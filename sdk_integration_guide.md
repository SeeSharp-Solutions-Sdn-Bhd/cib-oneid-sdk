# CIB OneID Client SDK Integration Guide

A streamlined guide for integrating the **CIB OneID Client SDK** (`ciboneid-sdk-core`) into native **Android** (Kotlin) and **iOS** (Swift) applications.

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
    implementation(project(":ciboneid-sdk-core"))
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:1.10.1")
}
```

Add the `INTERNET` permission to `AndroidManifest.xml`:

```xml
<uses-permission android:name="android.permission.INTERNET" />
```

### iOS

1. Build the XCFramework:
   ```bash
   ./gradlew :ciboneid-sdk-core:assembleCIBOneIdSDKXCFramework
   ```
2. In Xcode, link `CIBOneIdSDK` via **File > Add Package Dependencies...** or drag the generated XCFramework into your target's **Frameworks, Libraries, and Embedded Content**.

---

## 2. Configuration & Initialization

Tenant credentials are loaded directly from `res/values/strings.xml` (Android) or `Info.plist` (iOS).

### Host Configuration

**Android (`res/values/strings.xml`)**
```xml
<resources>
    <string name="x_tenant_id">your-tenant-id</string>
    <string name="x_app_id">your-app-id</string>
    <string name="x_client_id">your-client-id</string>
    <string name="x_client_secret">your-client-secret</string>
</resources>
```

**iOS (`Info.plist`)**
```xml
<key>X-Tenant-Id</key>
<string>your-tenant-id</string>
<key>X-App-Id</key>
<string>your-app-id</string>
<key>X-Client-Id</key>
<string>your-client-id</string>
<key>X-Client-Secret</key>
<string>your-client-secret</string>
```

> **Note**: Standard variations such as `cib_tenant_id` or `CIBTenantID` are also supported. Social provider keys (Google Client ID, Apple Service ID, Facebook App ID) can be retrieved dynamically via `getSdkConfig()` without needing to be hardcoded in host configuration.

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

```kotlin
// Android (Kotlin)
when (val result = cibClient.getSdkConfig()) {
    is CIBResult.Success -> {
        val config = result.data
        println("SDK config loaded for tenant: ${config.tenantId}")
    }
    is CIBResult.Failure -> {
        println("Failed to fetch SDK config: ${result.error.message}")
    }
}
```

```swift
// iOS (Swift)
let result = try await cibClient.getSdkConfig(clientId: nil, clientSecret: nil, appId: nil, tenantId: nil)
```

**How It Works:**
- Automatically cached in-memory (`SdkConfigCache`).
- Social logins (`loginWithGoogle`, `loginWithFacebook`, `loginWithApple`) automatically use cached keys (e.g., Google `serverClientId`, Apple `serviceId`, Facebook `appId`).
- Clears automatically when the app process terminates, or manually via `cibClient.clearSdkConfigCache()`.

---

## 4. Authentication Flows

### A. Social Logins (Google, Facebook, Apple)

Each social login method handles the full lifecycle:
1. Grabs necessary IDs and keys from `SdkConfigCache`.
2. Authenticates with the identity provider.
3. Automatically validates the response (`validateGoogleLoginResponse`, `validateFacebookLoginResponse`, or `validateAppleLoginResponse`).
4. Exchanges the credentials for session tokens, stores them in `TokenStore`, and returns the access token and user info.

#### 1. Google Sign-In

**Android (Kotlin)**
```kotlin
// Native UI via launcher (or pass SocialAuthLauncher(activity))
val result = cibClient.loginWithGoogle()
when (result) {
    is CIBResult.Success -> {
        val accessToken = result.data.accessToken ?: result.data.tokens?.accessToken
        val user = result.data.user
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
```

#### 2. Facebook Sign-In

**Android (Kotlin)**
```kotlin
val result = cibClient.loginWithFacebook()
when (result) {
    is CIBResult.Success -> {
        val accessToken = result.data.accessToken ?: result.data.tokens?.accessToken
        println("Facebook login success. Access Token: $accessToken")
    }
    is CIBResult.Failure -> println("Login failed: ${result.error.message}")
}

// Or validate an existing Facebook access token directly:
val result = cibClient.loginWithFacebook(accessToken = "EAAB...")
```

**iOS (Swift)**
```swift
let result = try await cibClient.loginWithFacebook()
```

#### 3. Sign in with Apple

**Kotlin / Swift**
```kotlin
// Sign in with authorization code and optional identity token
val result = cibClient.loginWithApple(
    code = "c0123456789abcdef...",
    idToken = "eyJraWQi..."
)
when (result) {
    is CIBResult.Success -> {
        val accessToken = result.data.accessToken ?: result.data.tokens?.accessToken
        println("Apple login success. Access Token: $accessToken")
    }
    is CIBResult.Failure -> println("Login failed: ${result.error.message}")
}
```

#### 4. Manual Token Validation & Exchange

If your application handles the native social login SDKs independently, use the validation methods to exchange tokens for session credentials:

```kotlin
// Google
val googleTokens = cibClient.validateGoogleLoginResponse(token = "google_id_token")

// Apple
val appleTokens = cibClient.validateAppleLoginResponse(authorizationCode = "apple_auth_code")

// Facebook
val fbTokens = cibClient.validateFacebookLoginResponse(token = "facebook_user_token")
```

---

### B. Email Authentication

```kotlin
// Registration
val regResult = cibClient.registerWithEmail(email = "user@example.com", password = "SecurePassword123!")

// Login (saves tokens to TokenStore automatically)
val loginResult = cibClient.loginWithEmail(email = "user@example.com", password = "SecurePassword123!")
when (loginResult) {
    is CIBResult.Success -> println("Access Token: ${loginResult.data.tokens?.accessToken}")
    is CIBResult.Failure -> println("Login failed: ${loginResult.error.message}")
}
```

---

### C. Phone Number OTP

```kotlin
// Registration OTP
cibClient.requestRegisterPhoneOtp(phoneNumber = "+1234567890")
val verifyRegResult = cibClient.verifyRegisterPhoneOtp(phoneNumber = "+1234567890", otp = "123456")

// Login OTP
cibClient.requestLoginPhoneOtp(phoneNumber = "+1234567890")
val verifyLoginResult = cibClient.verifyLoginPhoneOtp(phoneNumber = "+1234567890", otp = "123456")
```

---

## 5. Session & Account Management

### Fetch Valid Access Token
Returns the current active access token, performing a silent refresh via `refreshToken` if expired:
```kotlin
when (val tokenResult = cibClient.getValidAccessToken()) {
    is CIBResult.Success -> {
        val token = tokenResult.data
        // Attach Bearer token to API requests
    }
    is CIBResult.Failure -> {
        // Redirect to login
    }
}
```

### Refresh Token
```kotlin
val refreshResult = cibClient.refreshToken()
```

### Logout
Revokes sessions on the server and clears tokens from `TokenStore`:
```kotlin
val logoutResult = cibClient.logout()
```

### Delete & Restore Account
```kotlin
// Delete account (schedules account for deletion and clears local tokens)
val deleteResult = cibClient.deleteAccount()

// Restore account
val restoreResult = cibClient.restoreAccount(email = "user@example.com")
```

---

## 6. Result Handling

All SDK API calls return a `CIBResult<T>` sealed interface:

```kotlin
when (result) {
    is CIBResult.Success -> {
        val data = result.data
        // Access payload
    }
    is CIBResult.Failure -> {
        val error = result.error
        println("Code: ${error.code}, Message: ${error.message}, Status: ${error.statusCode}")
    }
}
```
