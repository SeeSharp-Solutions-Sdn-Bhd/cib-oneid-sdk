# CIB OneID Client SDK Distribution

Official binary distribution repository for the **CIB OneID Client SDK** supporting **iOS** (iOS 16.0+) and **Android** (API 26+).

---

## What's Included

- **iOS XCFramework**: `CIBOneIdSDK.xcframework` (supports iOS Device arm64 and iOS Simulator arm64/x86_64).
- **Swift Package Manager**: `Package.swift` ready for Xcode integration.
- **CocoaPods Podspec**: `CIBOneIdSDK.podspec` for CocoaPods integration.
- **Android AAR**: `android/ciboneid-sdk-core-1.0.0.aar` for Gradle integration.

---

## 1. iOS Integration Guide

### Option A: Swift Package Manager (SPM) - Recommended

1. In Xcode, open your project and go to **File > Add Package Dependencies...**.
2. Enter the repository URL:
   ```
   https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk.git
   ```
3. Select **Up to Next Major Version** starting at `1.0.0` or select main branch.
4. Add `CIBOneIdSDK` to your application target.

### Option B: CocoaPods

Add the following pod to your `Podfile`:

```ruby
pod 'CIBOneIdSDK', :git => 'https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk.git', :tag => '1.0.0'
```

Then run:
```bash
pod install
```

### iOS Host Configuration (`Info.plist`)

Add your tenant credentials to your host app's `Info.plist`:

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

---

## 2. Android Integration Guide

### Import AAR in Gradle

1. Copy `android/ciboneid-sdk-core-1.0.0.aar` into your app project's `libs/` directory (e.g. `app/libs/ciboneid-sdk-core-1.0.0.aar`).
2. Update your `app/build.gradle.kts`:

```kotlin
dependencies {
    implementation(files("libs/ciboneid-sdk-core-1.0.0.aar"))

    // Required transitives for CIB OneID SDK Core
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:1.9.0")
    implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:1.7.3")
    implementation("io.ktor:ktor-client-core:3.0.1")
    implementation("io.ktor:ktor-client-okhttp:3.0.1")
    implementation("io.ktor:ktor-client-content-negotiation:3.0.1")
    implementation("io.ktor:ktor-serialization-kotlinx-json:3.0.1")
    implementation("androidx.security:security-crypto:1.1.0-alpha06")
    implementation("com.google.android.gms:play-services-auth:21.2.0")
    implementation("com.facebook.android:facebook-login:17.0.0")
}
```

### Android Host Configuration (`res/values/strings.xml`)

Add your tenant credentials to your app's `res/values/strings.xml`:

```xml
<resources>
    <string name="cib_tenant_id">your-tenant-id</string>
    <string name="cib_app_id">app_android_v1</string>
    <string name="cib_client_secret">your-client-secret</string>
    <string name="cib_app_name">My App</string>
</resources>
```

---

## 3. Quick Start & SDK Initialization

### iOS Usage (Swift)

```swift
import CIBOneIdSDK

// 1. Initialize Client & Storage (Loads credentials automatically from Info.plist)
let config = CIBPlatformConfigKt.loadPlatformConfig(context: nil)
let tokenStore = PlatformTokenStore(context: nil)
let cibClient = CIBOneIdClient(config: config, tokenStore: tokenStore, customHttpClient: nil)

// 2. Embedded Native Social Login
let launcher = SocialAuthLauncher(viewController: self)

// Google Sign-In
cibClient.loginWithGoogle(launcher: launcher, serverClientId: "YOUR_GOOGLE_SERVER_CLIENT_ID") { result, error in
    if let tokens = result?.getOrNull() {
        print("Logged in successfully! Access Token: \(tokens.accessToken)")
    }
}

// Apple Sign-In
cibClient.loginWithApple(launcher: launcher) { result, error in
    if let tokens = result?.getOrNull() {
        print("Apple login success!")
    }
}

// 3. Username / Password Login
cibClient.login(identifier: "user@example.com", password: "Password123!") { result, error in
    if let tokens = result?.getOrNull() {
        print("Logged in! Token: \(tokens.accessToken)")
    }
}
```

### Android Usage (Kotlin)

```kotlin
import com.cib.oneid.sdk.CIBOneIdClient
import com.cib.oneid.sdk.network.loadPlatformConfig
import com.cib.oneid.sdk.storage.PlatformTokenStore
import com.cib.oneid.sdk.social.SocialAuthLauncher
import kotlinx.coroutines.launch

// 1. Initialize Client & Hardware Token Store (EncryptedSharedPreferences)
val config = loadPlatformConfig(context) // Reads res/values/strings.xml
val tokenStore = PlatformTokenStore(context = applicationContext)
val cibClient = CIBOneIdClient(config = config, tokenStore = tokenStore)

// 2. Embedded Native Social Login
val launcher = SocialAuthLauncher(activity = this)

lifecycleScope.launch {
    // Google Sign-In
    val googleResult = cibClient.loginWithGoogle(launcher = launcher)
    googleResult.onSuccess { tokens ->
        println("Google Login Success! Access Token: ${tokens.accessToken}")
    }

    // Username / Password Login
    val loginResult = cibClient.login(identifier = "user@example.com", password = "Password123!")
    loginResult.onSuccess { tokens ->
        println("Logged in! Token: ${tokens.accessToken}")
    }
}
```

---

## License

Copyright © 2025 SeeSharp Solutions. All rights reserved.
