# CIB OneID Client SDK Integration Guide (Android & iOS)

This guide provides step-by-step instructions for integrating the **CIB OneID Client SDK** (`ciboneid-sdk-core`) into native **Android** (Kotlin) and **iOS** (Swift) applications.

---

## 1. Overview & SDK Capabilities

The **CIB OneID Client SDK** is built on Kotlin Multiplatform (KMP) and delivers authentication services via `/api/client/*` endpoints across mobile and web platforms.

### Supported Features
- **Host Application Configuration**: Platform-native configuration via `res/values/strings.xml` (Android) and `Info.plist` (iOS).
- **Email Authentication**: Email registration and login via `/api/client/auth/register/email` and `/api/client/auth/login/email`.
- **Phone Number OTP**: Two-step OTP registration and OTP login flows via `/api/client/auth/register/phone/*` and `/api/client/auth/login/phone/*`.
- **Automated Session Management**: Client token refresh via `/api/client/auth/refreshtoken`.
- **Logout & Account Deletion**: Revoke active sessions via `/api/client/auth/logout`, schedule account deletion via `/api/client/user/account`, and restore account via `/api/client/auth/account/restore`.
- **Hardware-Backed Secure Storage**: Android `EncryptedSharedPreferences` (AES-256 GCM) and iOS Apple Keychain (`SecItem`).

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
   All required credentials (Tenant ID, App ID, Client ID, Secret) are provided by the host app inside `res/values/strings.xml`:
   ```xml
   <resources>
       <string name="cib_tenant_id">your-tenant-id</string>
       <string name="cib_app_id">app_android_v1</string>
       <string name="cib_client_id">cib_client_id</string>
       <string name="cib_client_secret">your-client-secret</string>
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
        val config = loadPlatformConfig(context)
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

### B. Phone Number OTP Flows (Client Auth)

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

### C. Client Refresh Token Flow

Refreshes the user's session tokens via client credentials (`POST /api/client/auth/refreshtoken`). Upon success, updated session tokens (`accessToken`, `refreshToken`) are returned and automatically saved to the hardware-backed `TokenStore`. If a breach or invalid grant is detected (`BREACH_DETECTED` or `invalid_grant`), local tokens are automatically cleared.

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

### D. Session & Account Lifecycle

#### 1. Fetching Valid Access Token
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

#### 2. Logout Flow
Revokes all active sessions on the server (`POST /api/client/auth/logout`) and clears tokens stored locally in `TokenStore`.

**Android (Kotlin)**
```kotlin
suspend fun logoutUser() {
    when (val result = CIBOneIdManager.client.logout()) {
        is CIBResult.Success -> {
            println("Logged out: ${result.data.message}")
        }
        is CIBResult.Failure -> {
            println("Logout Failed [${result.error.code}]: ${result.error.message}")
        }
    }
}
```

**iOS (Swift)**
```swift
import CIBOneIdSDK

func logoutUser() async {
    do {
        let result = try await CIBOneIdManager.shared.client.logout(accessToken: nil, clientId: nil, clientSecret: nil, appId: nil, tenantId: nil)
        if let success = result as? CIBResultSuccess<LogoutResponse> {
            print("Logged out: \(success.data.message ?? "")")
        } else if let failure = result as? CIBResultFailure {
            print("Logout Failed [\(failure.error.code)]: \(failure.error.message)")
        }
    } catch {
        print("Error: \(error)")
    }
}
```

#### 3. Delete Account Flow
Schedules the user account for deletion (`DELETE /api/client/user/account`) and clears stored tokens upon success.

**Android (Kotlin)**
```kotlin
suspend fun deleteAccount() {
    when (val result = CIBOneIdManager.client.deleteAccount()) {
        is CIBResult.Success -> {
            println("Account scheduled for deletion: ${result.data.message}")
        }
        is CIBResult.Failure -> {
            println("Delete failed [${result.error.code}]: ${result.error.message}")
        }
    }
}
```

**iOS (Swift)**
```swift
func deleteAccount() async {
    do {
        let result = try await CIBOneIdManager.shared.client.deleteAccount(accessToken: nil, clientId: nil, clientSecret: nil, appId: nil, tenantId: nil)
        if let success = result as? CIBResultSuccess<DeleteAccountResponse> {
            print("Delete response: \(success.data.message ?? "")")
        }
    } catch {
        print("Error: \(error)")
    }
}
```

#### 4. Restore Deleted Account Flow
Restores a scheduled-for-deletion / soft-deleted account (`POST /api/client/auth/account/restore`), returns new session tokens, and automatically saves them to `TokenStore`.

**Android (Kotlin)**
```kotlin
import com.cib.oneid.sdk.models.RestoreAccountRequest

suspend fun restoreUserAccount(email: String) {
    when (val result = CIBOneIdManager.client.restoreAccount(email = email)) {
        is CIBResult.Success -> {
            println("Account restored!")
            println("New Access Token: ${result.data.tokens?.accessToken}")
            println("User: ${result.data.user?.userName}")
        }
        is CIBResult.Failure -> {
            println("Restore failed [${result.error.code}]: ${result.error.message}")
        }
    }
}
```

**iOS (Swift)**
```swift
func restoreAccount(email: String) async {
    do {
        let result = try await CIBOneIdManager.shared.client.restoreAccount(
            email: email,
            clientId: nil,
            clientSecret: nil,
            appId: nil,
            tenantId: nil
        )
        if let success = result as? CIBResultSuccess<RestoreAccountResponse> {
            print("Account restored: \(success.data.user?.userName ?? "")")
        }
    } catch {
        print("Error: \(error)")
    }
}
```

---

## 5. Security & Best Practices Checklist

- [x] **Host Configuration**: Application credentials (`tenantId`, `appId`, `clientId`, `clientSecret`) provided via `strings.xml` (Android) and `Info.plist` (iOS).
- [x] **Secure Storage**: Tokens encrypted via Android `EncryptedSharedPreferences` (AES-256 GCM) and iOS Keychain (`kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly`).
- [x] **Client Auth Endpoints**: All operations execute against `/api/client/*` endpoint suite.
