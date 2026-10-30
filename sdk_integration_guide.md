# CIB OneID Client SDK Integration Guide (Android & iOS)

This guide provides step-by-step instructions for integrating the **CIB OneID Client SDK** (`ciboneid-sdk-core`) into native **Android** (Kotlin) and **iOS** (Swift) applications.

---

## 1. Overview & SDK Capabilities

The **CIB OneID Client SDK** is built on Kotlin Multiplatform (KMP) and delivers identity and authentication services across mobile and web platforms.

### Supported Features
- **Host Application Configuration**: Platform-native configuration via `res/values/strings.xml` (Android) and `Info.plist` (iOS).
- **Username & Password Authentication**: Local registration and login.
- **Phone Number OTP**: Two-step OTP registration and OTP login flows.
- **Embedded Social & Federated JIT Authentication**: Native UI embedded handshakes via `SocialAuthLauncher` for Google, Apple, Facebook, CIBMall, and Unified Auth Router.
- **Automated Session Management**: Silent token refresh via Refresh Token Rotation (RTR) with thread-safe `Mutex` locking.
- **Hardware-Backed Secure Storage**: Android `EncryptedSharedPreferences` (AES-256 GCM) and iOS Apple Keychain (`SecItem`).
- **Profile Management & Revocation**: RFC 7009 compliant token revocation and user profile updates.

### System Requirements

| Platform | Minimum Version | Language / Tooling | Secure Storage Backend |
| :--- | :--- | :--- | :--- |
| **Android** | Android 8.0 (API 26+) | Kotlin 1.9+ / Java 17 | `EncryptedSharedPreferences` |
| **iOS** | iOS 16.0+ | Swift 5.9+ / Swift 6 | Apple Keychain (`kSecClassGenericPassword`) |

---

## 2. Step 1: Add SDK Dependencies & Host Configuration

### Android Setup

1. **Add Required Permissions**
   Ensure `INTERNET` permission is declared in `AndroidManifest.xml`:
   ```xml
   <manifest xmlns:android="http://schemas.android.com/apk/res/android">
       <uses-permission android:name="android.permission.INTERNET" />
   </manifest>
   ```

2. **Configure Parameters in `strings.xml`**
   All required credentials (Tenant ID, App ID, Client ID, Secret, App Name) are provided by the host app inside `res/values/strings.xml`:
   ```xml
   <resources>
       <string name="cib_tenant_id">your-tenant-id</string>
       <string name="cib_app_id">app_android_v1</string>
       <string name="cib_client_id">cib_client_id</string>
       <string name="cib_client_secret">your-client-secret</string>
       <string name="cib_app_name">My App</string>
   </resources>
   ```

3. **Configure `build.gradle.kts` (App Module)**
   Include the SDK module or published dependency:

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

---

### iOS Setup (Swift Package Manager & Info.plist)

1. **Configure Parameters in `Info.plist`**
   All required credentials are provided by the host app in `Info.plist`:
   ```xml
   <key>CIBTenantID</key>
   <string>your-tenant-id</string>
   <key>CIBAppID</key>
   <string>app_ios_v1</string>
   <key>CIBClientID</key>
   <string>cib_client_id</string>
   <key>CIBClientSecret</key>
   <string>your-client-secret</string>
   <key>CIBAppName</key>
   <string>My App</string>
   ```

2. **Include Framework via Swift Package Manager (SPM)**
   - Build XCFramework: `./gradlew :ciboneid-sdk-core:assembleCIBOneIdSDKXCFramework`
   - In Xcode, go to **File > Add Package Dependencies...**.
   - Add local or remote repository and link `CIBOneIdSDK` to your app target.

---

## 3. Step 2: Initialize the SDK

Recommended pattern: Initialize `CIBOneIdClient` using `loadPlatformConfig()` to automatically parse `strings.xml` (Android) or `Info.plist` (iOS).

### Android Initialization (Kotlin)

```kotlin
import android.content.Context
import com.cib.oneid.sdk.CIBOneIdClient
import com.cib.oneid.sdk.network.loadPlatformConfig
import com.cib.oneid.sdk.storage.PlatformTokenStore

object CIBOneIdManager {
    lateinit var client: CIBOneIdClient
        private set

    fun initialize(context: Context) {
        // Automatically reads cib_tenant_id, cib_app_id, cib_client_secret, cib_app_name from strings.xml
        val config = loadPlatformConfig(context)

        // PlatformTokenStore requires Android Context for EncryptedSharedPreferences
        val tokenStore = PlatformTokenStore(context = context.applicationContext)

        client = CIBOneIdClient(
            config = config,
            tokenStore = tokenStore
        )
    }
}
```

Call `CIBOneIdManager.initialize(this)` inside your `Application` class:

```kotlin
class MyApplication : Application() {
    override fun onCreate() {
        super.onCreate()
        CIBOneIdManager.initialize(this)
    }
}
```

---

### iOS Initialization (Swift)

```swift
import Foundation
import CIBOneIdSDK

final class CIBOneIdManager {
    static let shared = CIBOneIdManager()

    let client: CIBOneIdClient

    private init() {
        // Automatically reads CIBTenantID, CIBAppID, CIBClientSecret, CIBAppName from Info.plist
        let config = CIBPlatformConfigKt.loadPlatformConfig(context: nil)

        let tokenStore = PlatformTokenStore(context: nil)

        self.client = CIBOneIdClient(
            config = config,
            tokenStore = tokenStore,
            customHttpClient: nil
        )
    }
}
```

---

## 4. Step 3: Implement Authentication Flows

---

### A. Email Authentication Flows

#### 1. Email Registration Flow

Registers a user using email and password (`POST /api/client/auth/register/email`) sending `X-Client-Id`, `X-Client-Secret`, `X-App-Id`, and `X-Tenant-Id` headers.

**Android (Kotlin)**
```kotlin
import com.cib.oneid.sdk.models.RegisterEmailRequest
import com.cib.oneid.sdk.models.CIBResult

suspend fun registerEmail(email: String, password: String) {
    when (val result = CIBOneIdManager.client.registerWithEmail(email, password)) {
        is CIBResult.Success -> {
            println("Status: ${result.data.status}, Message: ${result.data.message}")
        }
        is CIBResult.Failure -> {
            println("Error [${result.error.code}]: ${result.error.message}")
        }
    }
}
```

**iOS (Swift)**
```swift
import CIBOneIdSDK

func registerEmail(email: String, password: String) async {
    do {
        let result = try await CIBOneIdManager.shared.client.registerWithEmail(email: email, password: password)
        if let success = result as? CIBResultSuccess<RegisterEmailResponse> {
            print("Status: \(success.data.status ?? ""), Message: \(success.data.message ?? "")")
        } else if let failure = result as? CIBResultFailure {
            print("Error [\(failure.error.code)]: \(failure.error.message)")
        }
    } catch {
        print("Error: \(error)")
    }
}
```

---

#### 2. Email Login Flow

Authenticates a user using email and password (`POST /api/client/auth/login/email`). Upon success, session tokens (`accessToken`, `refreshToken`) are returned and automatically saved to the hardware-backed `TokenStore`.

**Request API Details:**
- **Endpoint**: `POST {baseUrl}/api/client/auth/login/email`
- **Headers**:
  - `X-Client-Id`: `cib_client_id`
  - `X-Client-Secret`: `cib_client_secret`
  - `X-App-Id`: `cib_app_id`
  - `X-Tenant-Id`: `cib_tenant_id`
- **Request Body**:
  ```json
  {
    "email": "test@mail.com",
    "password": "abc123456"
  }
  ```

**Response Details:**
- **Success Response Example (200 OK)**:
  ```json
  {
    "status": "success",
    "tokens": {
      "accessToken": "eyJhbGciOiJFUzI1...",
      "tokenType": "Bearer",
      "expiresIn": 600,
      "refreshToken": "rf_01a18bd9ad09d92c9e231"
    },
    "user": {
      "id": "01a18b5d-4ba3-76fe-8e6d-b5d9051bc5d2",
      "userName": "test@mail.com",
      "email": "test@mail.com",
      "firstName": null,
      "lastName": null,
      "extraFields": {
        "userid": "123"
      }
    }
  }
  ```
- **Failure Response Example (400/401)**:
  ```json
  {
    "code": "INVALID_CREDENTIALS",
    "message": "Invalid email or password."
  }
  ```

**Android (Kotlin)**
```kotlin
import com.cib.oneid.sdk.models.LoginEmailRequest
import com.cib.oneid.sdk.models.LoginEmailResponse
import com.cib.oneid.sdk.models.CIBResult

suspend fun loginWithEmail(email: String, password: String) {
    when (val result = CIBOneIdManager.client.loginWithEmail(email, password)) {
        is CIBResult.Success -> {
            println("Login Success!")
            println("Access Token: ${result.data.tokens?.accessToken}")
            println("User ID: ${result.data.user?.id}")
            println("User Email: ${result.data.user?.email}")
        }
        is CIBResult.Failure -> {
            println("Login Failed [${result.error.code}]: ${result.error.message}")
        }
    }
}
```

**iOS (Swift)**
```swift
import CIBOneIdSDK

func loginWithEmail(email: String, password: String) async {
    do {
        let result = try await CIBOneIdManager.shared.client.loginWithEmail(email: email, password: password)
        if let success = result as? CIBResultSuccess<LoginEmailResponse> {
            print("Login Success!")
            print("Access Token: \(success.data.tokens?.accessToken ?? "")")
            print("User ID: \(success.data.user?.id ?? "")")
        } else if let failure = result as? CIBResultFailure {
            print("Login Failed [\(failure.error.code)]: \(failure.error.message)")
        }
    } catch {
        print("Error: \(error)")
    }
}
```

---

### B. Username & Password Flow

#### Registration

**Android (Kotlin)**
```kotlin
import com.cib.oneid.sdk.models.RegisterTenantUserRequest
import com.cib.oneid.sdk.models.CIBResult

suspend fun registerUser(username: String, email: String, password: String) {
    val request = RegisterTenantUserRequest(
        username = username,
        email = email,
        password = password,
        extraFields = mapOf("fullName" to "John Doe")
    )

    when (val result = CIBOneIdManager.client.register(request)) {
        is CIBResult.Success -> println("Registered ID: ${result.data.id}")
        is CIBResult.Failure -> println("Failed: ${result.error.message}")
    }
}
```

**iOS (Swift)**
```swift
import CIBOneIdSDK

func registerUser(username: String, email: String, password: String) async {
    let request = RegisterTenantUserRequest(
        username: username,
        email: email,
        password: password,
        phoneNumber: nil,
        extraFields: ["fullName": "John Doe"],
        appId: nil
    )

    do {
        let result = try await CIBOneIdManager.shared.client.register(request: request)
        if let success = result as? CIBResultSuccess<TenantUserDto> {
            print("Registered: \(success.data.id)")
        } else if let failure = result as? CIBResultFailure {
            print("Error: \(failure.error.message)")
        }
    } catch {
        print("Error: \(error)")
    }
}
```

#### Login

**Android (Kotlin)**
```kotlin
suspend fun loginUser(identifier: String, password: String) {
    CIBOneIdManager.client.login(identifier, password)
        .onSuccess { tokens -> println("Login success: ${tokens.accessToken}") }
        .onFailure { error -> println("Login failed: ${error.message}") }
}
```

**iOS (Swift)**
```swift
func loginUser(identifier: String, password: String) async {
    let result = try? await CIBOneIdManager.shared.client.login(identifier: identifier, password: password)
}
```

---

### C. Phone Number OTP Flows (Client Auth)

#### 1. Phone Registration OTP Flow

Registers phone number via client credentials (`POST /api/client/auth/register/phone/request-otp` and `POST /api/client/auth/register/phone/verify`).

**Android (Kotlin)**
```kotlin
// Step 1: Request OTP
when (val result = CIBOneIdManager.client.requestRegisterPhoneOtp(phoneNumber = "+60168361127")) {
    is CIBResult.Success -> println("Status: ${result.data.status}, Message: ${result.data.message}")
    is CIBResult.Failure -> println("Error [${result.error.code}]: ${result.error.message}")
}

// Step 2: Verify OTP
when (val result = CIBOneIdManager.client.verifyRegisterPhoneOtp(phoneNumber = "+60168361127", otp = "171473")) {
    is CIBResult.Success -> {
        println("Status: ${result.data.status}, Message: ${result.data.message}")
        println("Access Token: ${result.data.tokens?.accessToken}")
        println("User ID: ${result.data.user?.id}")
    }
    is CIBResult.Failure -> println("Error [${result.error.code}]: ${result.error.message}")
}
```

**iOS (Swift)**
```swift
// Step 1: Request OTP
let reqResult = try await CIBOneIdManager.shared.client.requestRegisterPhoneOtp(phoneNumber: "+60168361127")

// Step 2: Verify OTP
let verifyResult = try await CIBOneIdManager.shared.client.verifyRegisterPhoneOtp(phoneNumber: "+60168361127", otp = "171473")
```

---

#### 2. Phone Login OTP Flow

Authenticates a user using phone number OTP verification via client credentials (`POST /api/client/auth/login/phone/request-otp` and `POST /api/client/auth/login/phone/verify`).

##### Step 1: Request Phone Login OTP
- **Endpoint**: `POST {baseUrl}/api/client/auth/login/phone/request-otp`
- **Headers**:
  - `X-Client-Id`: `cib_client_id`
  - `X-Client-Secret`: `cib_client_secret`
  - `X-App-Id`: `cib_app_id`
  - `X-Tenant-Id`: `cib_tenant_id`
- **Request Body**:
  ```json
  {
    "phone_number": "+60168361127"
  }
  ```
- **Success Response Example (200 OK)**:
  ```json
  {
    "status": "success",
    "message": "OTP sent."
  }
  ```
- **Failure Response Example (400/401)**:
  ```json
  {
    "code": "INVALID_CREDENTIALS",
    "message": "Invalid email or password."
  }
  ```

##### Step 2: Verify Phone Login OTP
- **Endpoint**: `POST {baseUrl}/api/client/auth/login/phone/verify`
- **Headers**:
  - `X-Client-Id`: `cib_client_id`
  - `X-Client-Secret`: `cib_client_secret`
  - `X-App-Id`: `cib_app_id`
  - `X-Tenant-Id`: `cib_tenant_id`
- **Request Body**:
  ```json
  {
    "phone_number": "+60168361127",
    "otp": "201667"
  }
  ```
- **Success Response Example (200 OK)**:
  ```json
  {
    "status": "success",
    "tokens": {
      "accessToken": "eyJhbGciOiJFUz4HO1ok6KWpj6DIwYSJ7Rimhp23dBoQ3bAtE2mbofDoQ4zKA",
      "tokenType": "Bearer",
      "expiresIn": 600,
      "refreshToken": "rf_01a18be398aa76cf816d146ddec153c5"
    },
    "user": {
      "id": "01a18be2-7302-7095-8144-6d8e4c238cd0",
      "userName": "+60168361127",
      "phoneNumber": "+60168361127",
      "firstName": null,
      "lastName": null,
      "extraFields": {}
    }
  }
  ```
- **Failure Response Example (400/401)**:
  ```json
  {
    "code": "INVALID_CREDENTIALS",
    "message": "Invalid email or password."
  }
  ```

**Android (Kotlin)**
```kotlin
// Step 1: Request OTP for Phone Login
when (val result = CIBOneIdManager.client.requestLoginPhoneOtp(phoneNumber = "+60168361127")) {
    is CIBResult.Success -> {
        println("Status: ${result.data.status}, Message: ${result.data.message}")
    }
    is CIBResult.Failure -> {
        println("Error [${result.error.code}]: ${result.error.message}")
    }
}

// Step 2: Verify OTP for Phone Login
when (val result = CIBOneIdManager.client.verifyLoginPhoneOtp(phoneNumber = "+60168361127", otp = "201667")) {
    is CIBResult.Success -> {
        println("Login Success!")
        println("Status: ${result.data.status}")
        println("Access Token: ${result.data.tokens?.accessToken}")
        println("User ID: ${result.data.user?.id}")
        println("Phone Number: ${result.data.user?.phoneNumber}")
    }
    is CIBResult.Failure -> {
        println("Login Failed [${result.error.code}]: ${result.error.message}")
    }
}
```

**iOS (Swift)**
```swift
import CIBOneIdSDK

// Step 1: Request OTP for Phone Login
let reqResult = try await CIBOneIdManager.shared.client.requestLoginPhoneOtp(phoneNumber: "+60168361127")

// Step 2: Verify OTP for Phone Login
let verifyResult = try await CIBOneIdManager.shared.client.verifyLoginPhoneOtp(phoneNumber: "+60168361127", otp = "201667")
```

---

### D. Client Refresh Token Flow

Refreshes the user's session tokens via client credentials (`POST /api/client/auth/refreshtoken`). Upon success, updated session tokens (`accessToken`, `refreshToken`) are returned and automatically saved to the hardware-backed `TokenStore`. If a breach or invalid grant is detected (`BREACH_DETECTED` or `invalid_grant`), local tokens are automatically cleared.

##### Request API Details
- **Endpoint**: `POST {baseUrl}/api/client/auth/refreshtoken`
- **Headers**:
  - `X-Client-Id`: `cib_client_id`
  - `X-Client-Secret`: `cib_client_secret`
  - `X-App-Id`: `cib_app_id`
  - `X-Tenant-Id`: `cib_tenant_id`
- **Request Body**:
  ```json
  {
    "refresh_token": "rf_01a18be398.."
  }
  ```

##### Response Details
- **Success Response Example (200 OK)**:
  ```json
  {
    "status": "success",
    "token_type": "Bearer",
    "expires_in": 600,
    "refresh_token": "rf_01a18bea53637eda918f3c7dabe3b4af",
    "tokens": {
      "accessToken": "SwiY3VzdG9tX3BhcmFtZXRlcnMiOnt9LCJhcHBfaWQiOiJwaW50YXJhaSJ9.qCx7GVEhSd4tU371JNYjOFQX8C1iS8FSrviUVNqOiULIwddWtJ7_l_ZLGWAw8NXvxm8u8QjgvQ0gCyaVYWFl1w",
      "tokenType": "Bearer",
      "expiresIn": 600,
      "refreshToken": "rf_01a18bea53637eda918f3c7dabe3b4af"
    },
    "user": {
      "id": "01a18be2-7302-7095-8144-6d8e4c238cd0",
      "userName": "+60168361127",
      "email": null,
      "phoneNumber": "+60168361127",
      "firstName": null,
      "lastName": null,
      "extraFields": {}
    }
  }
  ```
- **Failure Response Example (400/401)**:
  ```json
  {
    "code": "BREACH_DETECTED",
    "error": "invalid_grant",
    "message": "Replay attack detected. Token family has been revoked."
  }
  ```

**Android (Kotlin)**
```kotlin
import com.cib.oneid.sdk.models.RefreshTokenClientRequest
import com.cib.oneid.sdk.models.RefreshTokenResponse
import com.cib.oneid.sdk.models.CIBResult

// Refresh using stored refresh_token in TokenStore
suspend fun refreshSession() {
    when (val result = CIBOneIdManager.client.refreshToken()) {
        is CIBResult.Success -> {
            println("Token Refreshed!")
            println("Access Token: ${result.data.tokens?.accessToken}")
            println("Refresh Token: ${result.data.refreshToken}")
            println("User ID: ${result.data.user?.id}")
        }
        is CIBResult.Failure -> {
            println("Refresh Failed [${result.error.code}]: ${result.error.message}")
        }
    }
}

// Or supply an explicit refresh token
suspend fun refreshExplicit(refreshToken: String) {
    val result = CIBOneIdManager.client.refreshToken(refreshToken = refreshToken)
}
```

**iOS (Swift)**
```swift
import CIBOneIdSDK

func refreshSession() async {
    do {
        let result = try await CIBOneIdManager.shared.client.refreshToken(refreshToken: nil, clientId: nil, clientSecret: nil, appId: nil, tenantId: nil)
        if let success = result as? CIBResultSuccess<RefreshTokenResponse> {
            print("Token Refreshed!")
            print("Access Token: \(success.data.tokens?.accessToken ?? "")")
            print("Refresh Token: \(success.data.refreshToken ?? "")")
        } else if let failure = result as? CIBResultFailure {
            print("Refresh Failed [\(failure.error.code)]: \(failure.error.message)")
        }
    } catch {
        print("Error: \(error)")
    }
}
```

---

### E. Embedded Social Logins (Google, Apple, Facebook)

The host app passes the UI context (`ComponentActivity` on Android, `UIViewController` on iOS) via `SocialAuthLauncher`.

#### Google Embedded Login
```kotlin
// Android (Kotlin in ComponentActivity)
suspend fun loginGoogle() {
    val launcher = SocialAuthLauncher(activity = this)
    CIBOneIdManager.client.loginWithGoogle(launcher = launcher)
        .onSuccess { tokens -> println("Google Login Success") }
}
```

```swift
// iOS (Swift in UIViewController)
func loginGoogle() async {
    let launcher = SocialAuthLauncher(viewController: self)
    let result = try? await CIBOneIdManager.shared.client.loginWithGoogle(launcher: launcher, serverClientId: "")
}
```

#### Apple & Facebook Embedded Login
```kotlin
// Apple
suspend fun loginApple(launcher: SocialAuthLauncher) {
    CIBOneIdManager.client.loginWithApple(launcher)
}

// Facebook
suspend fun loginFacebook(launcher: SocialAuthLauncher) {
    CIBOneIdManager.client.loginWithFacebook(launcher)
}
```

#### Raw Token Overloads (For Custom/Headless UI)
```kotlin
cibClient.loginWithGoogleToken(idToken = "...", authCode = "...")
cibClient.loginWithAppleToken(idToken = "...", authorizationCode = "...", userJson = null)
cibClient.loginWithFacebookToken(accessToken = "...")
```

---

### F. Session & Profile Lifecycle

#### Fetching Valid Access Token (Silent Auto-Refresh)
```kotlin
suspend fun makeAuthenticatedApiCall() {
    when (val tokenResult = CIBOneIdManager.client.getValidAccessToken()) {
        is CIBResult.Success -> {
            val accessToken = tokenResult.data
            // Attach token to backend request header
        }
        is CIBResult.Failure -> {
            // Redirect user to login
        }
    }
}
```

#### User Profile & Logout
```kotlin
// Get Profile
CIBOneIdManager.client.getProfile()

// Update Profile
CIBOneIdManager.client.updateProfile(UpdateTenantUserProfileRequest(username = "newUsername"))

// Logout (Revokes token & purges local secure storage)
CIBOneIdManager.client.logout()
```

---

## 5. Security & Best Practices Checklist

- [x] **Host Configuration**: Application credentials (`tenantId`, `appId`, `clientSecret`, `appName`) provided via `strings.xml` (Android) and `Info.plist` (iOS).
- [x] **Secure Storage**: Tokens encrypted via Android `EncryptedSharedPreferences` (AES-256 GCM) and iOS Keychain (`kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly`).
- [x] **Embedded Social UI**: Abstraction via `SocialAuthLauncher` wraps `ComponentActivity` / `UIViewController`.
- [x] **Refresh Token Rotation**: Automatic token rotation with 20s network grace period and `Mutex` concurrency protection.
