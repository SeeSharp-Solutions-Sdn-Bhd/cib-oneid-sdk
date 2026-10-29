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
   All required credentials (Tenant ID, App ID, Secret, App Name) are provided by the host app inside `res/values/strings.xml`:
   ```xml
   <resources>
       <string name="cib_tenant_id">your-tenant-id</string>
       <string name="cib_app_id">app_android_v1</string>
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
            config: config,
            tokenStore: tokenStore,
            customHttpClient: nil
        )
    }
}
```

---

## 4. Step 3: Implement Authentication Flows

---

### A. Username & Password Flow

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

### B. Phone Number OTP Flow

```kotlin
// Step 1: Request OTP
CIBOneIdManager.client.requestPhoneRegistrationOtp(phoneNumber = "+1234567890", email = "test@cib.com")

// Step 2: Verify OTP
CIBOneIdManager.client.verifyPhoneRegistrationOtp(
    VerifyPhoneOtpDto(phoneNumber = "+1234567890", otp = "123456")
)
```

---

### C. Embedded Social Logins (Google, Apple, Facebook)

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

### D. Session & Profile Lifecycle

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
