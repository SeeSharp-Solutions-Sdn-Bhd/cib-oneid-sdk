# CIB OneID Client SDK Distribution

Official binary distribution repository for the **CIB OneID Client SDK** supporting **iOS** (iOS 16.0+) and **Android** (API 26+).

---

## What's Included

- **iOS XCFramework**: `CIBOneIdSDK.xcframework` (supports iOS Device arm64 and iOS Simulator arm64/x86_64).
- **Swift Package Manager**: `Package.swift` ready for Xcode integration.
- **CocoaPods Podspec**: `CIBOneIdSDK.podspec` for CocoaPods integration.
- **Android AAR**: `android/ciboneid-sdk-core-1.0.3.aar` for Gradle integration.

---

## 1. iOS Integration Guide

### Option A: Swift Package Manager (SPM) - Recommended

1. In Xcode, open your project and go to **File > Add Package Dependencies...**.
2. Enter the repository URL:
   ```
   https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk.git
   ```
3. Select **Up to Next Major Version** starting at `1.0.3` or select main branch.
4. Add `CIBOneIdSDK` to your application target.

### Option B: CocoaPods

Add the following pod to your `Podfile`:

```ruby
pod 'CIBOneIdSDK', :git => 'https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk.git', :tag => '1.0.3'
```

Then run:
```bash
pod install
```

### iOS Host Configuration (`Info.plist`)

Add your client credentials to your host app's `Info.plist` (`tenantId`, `appId`, and social provider credentials are automatically retrieved at runtime via `getSdkConfig()`):

```xml
<!-- CIB OneID Client Credentials -->
<key>CIBClientID</key>
<string>your-client-id</string>
<key>CIBClientSecret</key>
<string>your-client-secret</string>
```

---

## 2. Android Integration Guide

### Import AAR in Gradle

1. Copy `android/ciboneid-sdk-core-1.0.3.aar` into your app project's `libs/` directory (e.g. `app/libs/ciboneid-sdk-core-1.0.3.aar`).
2. Update your `app/build.gradle.kts`:

```kotlin
dependencies {
    implementation(files("libs/ciboneid-sdk-core-1.0.3.aar"))

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

Add your client credentials to your app's `res/values/strings.xml` (`tenantId`, `appId`, and social provider credentials are automatically retrieved at runtime via `getSdkConfig()`):

```xml
<resources>
    <!-- CIB OneID Client Credentials -->
    <string name="cib_client_id">your-client-id</string>
    <string name="cib_client_secret">your-client-secret</string>
</resources>
```

---

## 3. Quick Start & SDK Initialization

Client credentials (`clientId`, `clientSecret`) are extracted automatically from `Info.plist` (iOS) or `strings.xml` (Android). All other configuration (`tenantId`, `appId`, Google server client ID, Facebook App ID, etc.) is dynamically resolved at runtime via `getSdkConfig()`.

### iOS Usage (Swift)

```swift
import CIBOneIdSDK

// 1. Initialize Client (Auto-detects credentials from Info.plist)
let client = CIBOneIdClient()

// 2. Google Sign-In (One-liner: UI & credentials auto-resolved)
let googleResult = try await client.loginWithGoogle()

// 3. Facebook Sign-In (One-liner: UI & credentials auto-resolved)
let fbResult = try await client.loginWithFacebook()
```

### Android Usage (Kotlin)

```kotlin
import com.cib.oneid.sdk.CIBOneIdClient
import kotlinx.coroutines.launch

// 1. Initialize Client (Auto-detects credentials from strings.xml)
val client = CIBOneIdClient()

lifecycleScope.launch {
    // 2. Google Sign-In (One-liner: activity & credentials auto-resolved)
    val googleResult = client.loginWithGoogle()

    // 3. Facebook Sign-In (One-liner: activity & credentials auto-resolved)
    val fbResult = client.loginWithFacebook()
}
```

---

## License

Copyright © 2025 SeeSharp Solutions. All rights reserved.
