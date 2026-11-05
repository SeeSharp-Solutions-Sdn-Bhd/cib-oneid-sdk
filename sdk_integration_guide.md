# CIB OneID Client SDK Integration Guide

A streamlined guide for integrating the **CIB OneID Client SDK** (`ciboneid-sdk-core`) into native **Android** (Kotlin) and **iOS** (Swift) applications, including request patterns and example responses for all SDK functions.

---

## 1. Installation

### Android

Ensure `minSdk >= 26` and Java 17 compatibility in your module's `build.gradle.kts`:

```kotlin
android {
    compileSdk = 35
    defaultConfig {
        minSdk = 26
        targetSdk = 35
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_17
        targetCompatibility = JavaVersion.VERSION_17
    }
}

dependencies {
    // If using local project module:
    implementation(project(":ciboneid-sdk-core"))
    
    // OR if using the binary distribution AAR:
    // implementation(files("libs/ciboneid-sdk-core-1.0.3.aar"))

    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:1.10.1")
}
```

Add the `INTERNET` permission to `AndroidManifest.xml`:

```xml
<uses-permission android:name="android.permission.INTERNET" />
```

### iOS

#### Option A: Swift Package Manager (SPM)
Add the package dependency using:
```
https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk.git
```
Select **Up to Next Major Version** starting at `1.0.3` and link `CIBOneIdSDK` to your app target.

#### Option B: CocoaPods
Add the pod dependency to your `Podfile`:
```ruby
pod 'CIBOneIdSDK', :git => 'https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk.git', :tag => '1.0.3'
```

---

## 2. Configuration & Initialization

Client credentials (`X-Client-Id` and `X-Client-Secret`) are loaded directly from `res/values/strings.xml` (Android) or `Info.plist` (iOS).

> **Note**: `tenantId` and `appId` do **not** need to be configured in host files. These values are automatically resolved and cached at runtime when calling `getSdkConfig()`.

### Host Configuration

**Android (`res/values/strings.xml`)**
```xml
<resources>
    <string name="x_client_id">your-client-id</string>
    <string name="x_client_secret">your-client-secret</string>
</resources>
```

**iOS (`Info.plist`)**
```xml
<key>X-Client-Id</key>
<string>your-client-id</string>
<key>X-Client-Secret</key>
<string>your-client-secret</string>
```

> **Note**: Key aliases such as `cib_client_id` / `CIBClientID` and `cib_client_secret` / `CIBClientSecret` are also supported. All other settings—including `tenantId`, `appId`, and social provider keys (Google Client ID, Apple Service ID, Facebook App ID)—are retrieved dynamically at runtime via `getSdkConfig()`.

### Client Initialization

**Android (Kotlin)**
```kotlin
import com.cib.oneid.sdk.CIBOneIdClient
import com.cib.oneid.sdk.network.loadPlatformConfig
import com.cib.oneid.sdk.storage.PlatformTokenStore

val config = loadPlatformConfig(context)
val tokenStore = PlatformTokenStore(context = applicationContext)
val cibClient = CIBOneIdClient(config = config, tokenStore = tokenStore)
```

**iOS (Swift)**
```swift
import CIBOneIdSDK

let config = CIBPlatformConfigKt.loadPlatformConfig(context: nil)
let tokenStore = PlatformTokenStore(context: nil)
let cibClient = CIBOneIdClient(config: config, tokenStore = tokenStore, customHttpClient: nil)
```

---

## 3. Dynamic SDK Configuration (`getSdkConfig`)

Call `getSdkConfig()` at app launch to fetch identity and social provider settings dynamically:

### Kotlin
```kotlin
when (val result = cibClient.getSdkConfig()) {
    is CIBResult.Success -> {
        val config = result.data
        println("Tenant: ${config.tenantId}, App ID: ${config.appId}")
        println("Google Client ID: ${config.providers?.google?.serverClientId}")
    }
    is CIBResult.Failure -> {
        println("Failed to fetch SDK config: ${result.error.message}")
    }
}
```

### Swift
```swift
do {
    let result = try await cibClient.getSdkConfig(clientId: nil, clientSecret: nil, appId: nil, tenantId: nil)
    if let success = result as? CIBResultSuccess<SdkConfigResponse> {
        let config = success.data
        print("Tenant: \(config.tenantId ?? ""), Google Client ID: \(config.providers?.google?.serverClientId ?? "")")
    }
} catch {
    print("Error fetching SDK config: \(error)")
}
```

### Example Response (`SdkConfigResponse`)
```json
{
  "status": "success",
  "tenantId": "cib_tenant_id",
  "appId": "cib_app_id",
  "providers": {
    "google": {
      "enabled": true,
      "serverClientId": "965689394200-0k7vsl0jhk40buva2j52ube7t315e89u.apps.googleusercontent.com"
    },
    "apple": {
      "enabled": true,
      "serviceId": "com.cib.oneid.apple"
    },
    "facebook": {
      "enabled": true,
      "appId": "1107593411833416",
      "clientToken": "278fbbdff65906b6d462123a01331a02"
    }
  }
}
```

**Response Properties**:
- `status`: String status indicator (`"success"`).
- `tenantId`: Active tenant identifier.
- `appId`: Active application identifier.
- `providers`: Identity provider configurations (`google`, `apple`, `facebook`).
  - `google.enabled`: Whether Google Sign-In is enabled.
  - `google.serverClientId`: Web / Server OAuth Client ID for Google credential verification.
  - `apple.enabled`: Whether Sign in with Apple is enabled.
  - `apple.serviceId`: Apple Service ID.
  - `facebook.enabled`: Whether Facebook Login is enabled.
  - `facebook.appId`: Facebook App ID.
  - `facebook.clientToken`: Facebook Client Token.

**How It Works:**
- Automatically cached in-memory (`SdkConfigCache`).
- Dynamically resolves `tenantId` and `appId` for all subsequent authentication and OTP requests (eliminating the need to configure them in `strings.xml` or `Info.plist`).
- Social logins (`loginWithGoogle`, `loginWithFacebook`, `loginWithApple`) automatically use cached keys (e.g., Google `serverClientId`, Apple `serviceId`, Facebook `appId`).
- Clears automatically when the app process terminates, or manually via `cibClient.clearSdkConfigCache()`.

---

## 4. Authentication Flows

### A. Social Logins (Google, Facebook, Apple)

Each social login method handles the full authentication lifecycle:
1. Grabs necessary IDs and keys from `SdkConfigCache`.
2. Authenticates with the identity provider (via native launcher or direct token).
3. Exchanges credentials for session tokens and automatically persists them in `TokenStore`.
4. Returns the authenticated user profile and JWT tokens.

---

#### 1. Google Sign-In (`loginWithGoogle`)

**Android (Kotlin)**
```kotlin
// Native UI launcher (or pass SocialAuthLauncher(activity))
val result = cibClient.loginWithGoogle()
when (result) {
    is CIBResult.Success -> {
        val user = result.data.user
        val accessToken = result.data.accessToken ?: result.data.tokens?.accessToken
        println("Logged in as ${user?.email}, Access Token: $accessToken")
    }
    is CIBResult.Failure -> println("Login failed: ${result.error.message}")
}

// Or validate an existing ID token directly:
val result = cibClient.loginWithGoogle(idToken = "eyJhbGci...")
```

**iOS (Swift)**
```swift
let result = try await cibClient.loginWithGoogle()
if let success = result as? CIBResultSuccess<LoginGoogleResponse> {
    let user = success.data.user
    print("Logged in as: \(user?.email ?? "")")
}
```

### Example Response (`LoginGoogleResponse` / `SocialLoginExchangeResponse`)
```json
{
  "status": "success",
  "message": "User authenticated successfully.",
  "token_type": "Bearer",
  "access_token": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiJ1c3JfMTIz...s",
  "expires_in": 3600,
  "refresh_token": "rf_01a18bd9ad09d92c9e231",
  "tokens": {
    "tokenType": "Bearer",
    "accessToken": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiJ1c3JfMTIz...s",
    "expiresIn": 3600,
    "refreshToken": "rf_01a18bd9ad09d92c9e231"
  },
  "user": {
    "id": "usr_9b1deb4d-3b7d-4bad-9bdd-2b0d7b3dcb6d",
    "userName": "john.doe@gmail.com",
    "email": "john.doe@gmail.com",
    "phoneNumber": null,
    "firstName": "John",
    "lastName": "Doe",
    "extraFields": {}
  }
}
```

**Response Properties**:
- `status`: Result status (`"success"`).
- `accessToken` / `tokens.accessToken`: Standard JWT access token for authenticating API requests.
- `refreshToken` / `tokens.refreshToken`: Secure refresh token used for session rotation.
- `expiresIn` / `tokens.expiresIn`: Access token expiry duration in seconds.
- `tokenType`: Authorization scheme (`"Bearer"`).
- `user.id`: Unique user UUID.
- `user.email`: User email address.
- `user.firstName` / `user.lastName`: User full name.
- `user.extraFields`: Custom key-value tenant profile metadata.

---

#### 2. Facebook Sign-In (`loginWithFacebook`)

**Android (Kotlin)**
```kotlin
val result = cibClient.loginWithFacebook()
when (result) {
    is CIBResult.Success -> {
        val user = result.data.user
        println("Facebook login success for: ${user?.email}")
    }
    is CIBResult.Failure -> println("Login failed: ${result.error.message}")
}

// Or validate an existing Facebook access token directly:
val result = cibClient.loginWithFacebook(accessToken = "EAAB...")
```

**iOS (Swift)**
```swift
let result = try await cibClient.loginWithFacebook()
if let success = result as? CIBResultSuccess<LoginFacebookResponse> {
    print("Facebook login success: \(success.data.user?.email ?? "")")
}
```

### Example Response (`LoginFacebookResponse` / `SocialLoginExchangeResponse`)
```json
{
  "status": "success",
  "message": "User authenticated successfully.",
  "token_type": "Bearer",
  "access_token": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiJ1c3JfNDU2...s",
  "expires_in": 3600,
  "refresh_token": "rf_02b28cd9ad09d92c9e452",
  "tokens": {
    "tokenType": "Bearer",
    "accessToken": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiJ1c3JfNDU2...s",
    "expiresIn": 3600,
    "refreshToken": "rf_02b28cd9ad09d92c9e452"
  },
  "user": {
    "id": "usr_7c2eeb3a-1a2c-4f8e-8a1d-9e1f5d2b1c4e",
    "userName": "john.facebook",
    "email": "john.doe@example.com",
    "phoneNumber": null,
    "firstName": "John",
    "lastName": "Doe",
    "extraFields": {}
  }
}
```

---

#### 3. Sign in with Apple (`loginWithApple`)

**Kotlin / Swift**
```kotlin
val result = cibClient.loginWithApple(
    code = "c0123456789abcdef...",
    idToken = "eyJraWQi..."
)
when (result) {
    is CIBResult.Success -> {
        println("Apple login success. User: ${result.data.user?.email}")
    }
    is CIBResult.Failure -> println("Login failed: ${result.error.message}")
}
```

### Example Response (`LoginAppleResponse` / `SocialLoginExchangeResponse`)
```json
{
  "status": "success",
  "message": "User authenticated successfully.",
  "token_type": "Bearer",
  "access_token": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiJ1c3JfNzg5...s",
  "expires_in": 3600,
  "refresh_token": "rf_03c38ed9ad09d92c9e783",
  "tokens": {
    "tokenType": "Bearer",
    "accessToken": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiJ1c3JfNzg5...s",
    "expiresIn": 3600,
    "refreshToken": "rf_03c38ed9ad09d92c9e783"
  },
  "user": {
    "id": "usr_6f3aac1e-5c4b-4a3d-8f2e-1c4b5a6d7e8f",
    "userName": "john.apple",
    "email": "john.privaterelay@appleid.com",
    "phoneNumber": null,
    "firstName": "John",
    "lastName": "Doe",
    "extraFields": {}
  }
}
```

---

#### 4. Manual Token Validation & Exchange

If your application handles native social SDK callbacks manually, exchange the tokens directly using the validation endpoints:

```kotlin
// Google
val googleResult = cibClient.validateGoogleLoginResponse(token = "google_id_token")

// Apple
val appleResult = cibClient.validateAppleLoginResponse(authorizationCode = "apple_auth_code")

// Facebook
val fbResult = cibClient.validateFacebookLoginResponse(token = "facebook_user_token")
```

All three methods return `CIBResult<SocialLoginExchangeResponse>` with the same structure as shown above.

---

### B. Email Authentication

#### 1. Email Registration (`registerWithEmail`)

```kotlin
val regResult = cibClient.registerWithEmail(
    email = "user@example.com", 
    password = "SecurePassword123!"
)
```

### Example Response (`RegisterEmailResponse`)
```json
{
  "status": "success",
  "message": "User registered successfully. A verification email has been dispatched."
}
```

**Response Properties**:
- `status`: `"success"`
- `message`: Confirmation message instructing the user to verify their email address.

---

#### 2. Email Login (`loginWithEmail`)

```kotlin
val loginResult = cibClient.loginWithEmail(
    email = "user@example.com", 
    password = "SecurePassword123!"
)
when (loginResult) {
    is CIBResult.Success -> {
        val tokens = loginResult.data.tokens
        val user = loginResult.data.user
        println("Logged in as ${user?.email}. Access Token: ${tokens?.accessToken}")
    }
    is CIBResult.Failure -> println("Login failed: ${loginResult.error.message}")
}
```

### Example Response (`LoginEmailResponse`)
```json
{
  "status": "success",
  "tokens": {
    "tokenType": "Bearer",
    "accessToken": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIwMWExOGI1ZC0...s",
    "expiresIn": 600,
    "refreshToken": "rf_01a18bd9ad09d92c9e231"
  },
  "user": {
    "id": "01a18b5d-4ba3-76fe-8e6d-b5d9051bc5d2",
    "userName": "user@example.com",
    "email": "user@example.com",
    "firstName": "Alex",
    "lastName": "Tan",
    "extraFields": {
      "loyaltyTier": "platinum"
    }
  }
}
```

**Response Properties**:
- `status`: `"success"`
- `tokens`: Active session tokens (stored automatically in `TokenStore`).
- `user`: Authenticated user entity with unique `id`, `userName`, `email`, and `extraFields`.

---

### C. Phone Number OTP

#### 1. Request Registration OTP (`requestRegisterPhoneOtp`)

```kotlin
val reqResult = cibClient.requestRegisterPhoneOtp(phoneNumber = "+60123456789")
```

### Example Response (`RegisterPhoneOtpResponse`)
```json
{
  "status": "success",
  "message": "OTP sent successfully."
}
```

---

#### 2. Verify Registration OTP (`verifyRegisterPhoneOtp`)

```kotlin
val verifyResult = cibClient.verifyRegisterPhoneOtp(
    phoneNumber = "+60123456789", 
    otp = "123456"
)
```

### Example Response (`VerifyRegisterPhoneOtpResponse`)
```json
{
  "status": "success",
  "message": "Phone number verified successfully. Please complete your registration profile.",
  "tokens": {
    "tokenType": "Bearer",
    "accessToken": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiJ1c3JfMTIz...s",
    "expiresIn": 600,
    "refreshToken": "rf_01a18bd9ad09d92c9e231"
  },
  "user": {
    "id": "usr_01a18b5d-4ba3-76fe-8e6d-b5d9051bc5d2",
    "userName": "user_60123456789",
    "phoneNumber": "+60123456789",
    "firstName": null,
    "lastName": null,
    "extraFields": {}
  }
}
```

---

#### 3. Request Login OTP (`requestLoginPhoneOtp`)

```kotlin
val reqLoginResult = cibClient.requestLoginPhoneOtp(phoneNumber = "+60123456789")
```

### Example Response (`LoginPhoneOtpResponse`)
```json
{
  "status": "success",
  "message": "OTP sent successfully."
}
```

---

#### 4. Verify Login OTP (`verifyLoginPhoneOtp`)

```kotlin
val verifyLoginResult = cibClient.verifyLoginPhoneOtp(
    phoneNumber = "+60123456789", 
    otp = "123456"
)
```

### Example Response (`VerifyLoginPhoneOtpResponse`)
```json
{
  "status": "success",
  "message": "Phone login verified successfully.",
  "tokens": {
    "tokenType": "Bearer",
    "accessToken": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiJ1c3JfMTIz...s",
    "expiresIn": 600,
    "refreshToken": "rf_01a18bd9ad09d92c9e231"
  },
  "user": {
    "id": "usr_01a18b5d-4ba3-76fe-8e6d-b5d9051bc5d2",
    "userName": "user_60123456789",
    "phoneNumber": "+60123456789",
    "firstName": "Alex",
    "lastName": "Tan",
    "extraFields": {}
  }
}
```

---

## 5. Session & Account Management

### A. Fetch Valid Access Token (`getValidAccessToken`)

Retrieves the active JWT access token from `TokenStore`. If expired or near expiration, it performs an automatic silent refresh:

```kotlin
when (val tokenResult = cibClient.getValidAccessToken()) {
    is CIBResult.Success -> {
        val validToken: String = tokenResult.data
        println("Valid Access Token: $validToken")
        // Use with Bearer header: Authorization: Bearer $validToken
    }
    is CIBResult.Failure -> {
        println("No valid session available. Redirecting to login...")
    }
}
```

### Example Result
`result.data` returns the raw JWT string:
```
"eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIwMWExOGI1ZC0...s"
```

---

### B. Refresh Token (`refreshToken`)

Manually rotates the access token using the stored refresh token:

```kotlin
val refreshResult = cibClient.refreshToken()
when (refreshResult) {
    is CIBResult.Success -> {
        val newAccessToken = refreshResult.data.tokens?.accessToken
        println("Refreshed Access Token: $newAccessToken")
    }
    is CIBResult.Failure -> println("Refresh failed: ${refreshResult.error.message}")
}
```

### Example Response (`RefreshTokenResponse`)
```json
{
  "status": "success",
  "token_type": "Bearer",
  "expires_in": 3600,
  "refresh_token": "rf_new_refresh_token_789012",
  "tokens": {
    "tokenType": "Bearer",
    "accessToken": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIwMWExOGI1ZC0...s",
    "expiresIn": 3600,
    "refreshToken": "rf_new_refresh_token_789012"
  },
  "user": {
    "id": "01a18b5d-4ba3-76fe-8e6d-b5d9051bc5d2",
    "userName": "user@example.com",
    "email": "user@example.com",
    "phoneNumber": null,
    "firstName": "Alex",
    "lastName": "Tan",
    "extraFields": {}
  }
}
```

---

### C. Logout (`logout`)

Revokes active sessions on the server and purges tokens from local `TokenStore`:

```kotlin
val logoutResult = cibClient.logout()
```

### Example Response (`LogoutResponse`)
```json
{
  "status": "success",
  "message": "Logged out successfully."
}
```

---

### D. Delete Account (`deleteAccount`)

Schedules the user account for permanent deletion and wipes all local tokens:

```kotlin
val deleteResult = cibClient.deleteAccount()
```

### Example Response (`DeleteAccountResponse`)
```json
{
  "status": "success",
  "message": "Account scheduled for deletion successfully."
}
```

---

### E. Restore Account (`restoreAccount`)

Restores an account scheduled for deletion prior to the retention period expiring:

```kotlin
val restoreResult = cibClient.restoreAccount(email = "user@example.com")
```

### Example Response (`RestoreAccountResponse`)
```json
{
  "status": "success",
  "tokens": {
    "tokenType": "Bearer",
    "accessToken": "eyJhbGciOiJFUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIwMWExOGI1ZC0...s",
    "expiresIn": 3600,
    "refreshToken": "rf_01a18bd9ad09d92c9e231"
  },
  "user": {
    "id": "01a18b5d-4ba3-76fe-8e6d-b5d9051bc5d2",
    "userName": "user@example.com",
    "email": "user@example.com",
    "firstName": "Alex",
    "lastName": "Tan",
    "extraFields": {}
  }
}
```

---

## 6. Error Handling (`CIBResult.Failure`)

All SDK operations return a `CIBResult<T>` sealed class:
- `CIBResult.Success<T>` containing `data: T`.
- `CIBResult.Failure` containing `error: CIBError`.

### Kotlin Pattern
```kotlin
when (val result = cibClient.loginWithEmail("user@example.com", "wrong_password")) {
    is CIBResult.Success -> {
        val response = result.data
        // Handle successful response
    }
    is CIBResult.Failure -> {
        val error: CIBError = result.error
        println("Error Code: ${error.code}")
        println("Error Message: ${error.message}")
        println("HTTP Status Code: ${error.httpStatusCode}")
    }
}
```

### Swift Pattern
```swift
do {
    let result = try await cibClient.loginWithEmail(email: "user@example.com", password: "wrong_password")
    if let success = result as? CIBResultSuccess<LoginEmailResponse> {
        let response = success.data
        // Handle successful response
    } else if let failure = result as? CIBResultFailure {
        let error = failure.error
        print("Error [\(error.code)]: \(error.message) (HTTP \(error.httpStatusCode ?? 0))")
    }
} catch {
    print("Execution error: \(error)")
}
```

### Example Error Response (`CIBError`)
```json
{
  "code": "INVALID_CREDENTIALS",
  "message": "Invalid email or password.",
  "httpStatusCode": 401,
  "details": {}
}
```

#### Common Error Codes
| Code | HTTP Status | Description |
| :--- | :--- | :--- |
| `INVALID_CREDENTIALS` | 401 | Email/password combination does not match. |
| `USER_NOT_FOUND` | 404 | User account does not exist. |
| `INVALID_OTP` | 400 | Phone OTP verification code is invalid or has expired. |
| `INVALID_PHONE_NUMBER` | 400 | Phone number is not in valid E.164 format. |
| `TOKEN_EXPIRED` | 401 | Session or refresh token has expired. |
| `BAD_REQUEST` | 400 | Missing mandatory headers (`X-Tenant-Id`, `X-Client-Id`, etc.). |
| `ACCOUNT_DELETED` | 403 | Account is scheduled for deletion; call `restoreAccount` to recover. |
| `NETWORK_ERROR` | null | Client failed to establish connection with server. |
