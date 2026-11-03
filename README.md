# CIB OneID Client SDK Distribution

Official binary distribution repository for the **CIB OneID Client SDK** supporting **iOS** (iOS 16.0+) and **Android** (API 26+).

---

## What's Included

- **iOS XCFramework**: `CIBOneIdSDK.xcframework` (supports iOS Device arm64 and iOS Simulator arm64/x86_64).
- **Swift Package Manager**: `Package.swift` ready for Xcode integration.
- **CocoaPods Podspec**: `CIBOneIdSDK.podspec` for CocoaPods integration.
- **Android AAR**: `android/ciboneid-sdk-core-1.0.2.aar` for Gradle integration.

---

## 1. iOS Integration Guide

### Option A: Swift Package Manager (SPM) - Recommended

1. In Xcode, open your project and go to **File > Add Package Dependencies...**.
2. Enter the repository URL:
   ```
   https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk.git
   ```
3. Select **Up to Next Major Version** starting at `1.0.2` or select main branch.
4. Add `CIBOneIdSDK` to your application target.

### Option B: CocoaPods

Add the following pod to your `Podfile`:

```ruby
pod 'CIBOneIdSDK', :git => 'https://github.com/SeeSharp-Solutions-Sdn-Bhd/cib-oneid-sdk.git', :tag => '1.0.2'
```

Then run:
```bash
pod install
```

### iOS Host Configuration (`Info.plist`)

Add your tenant credentials and social configuration to your host app's `Info.plist`:

```xml
<!-- CIB OneID Core Credentials -->
<key>CIBTenantID</key>
<string>your-tenant-id</string>
<key>CIBAppID</key>
<string>app_ios_v1</string>
<key>CIBClientID</key>
<string>your-client-id</string>
<key>CIBClientSecret</key>
<string>your-client-secret</string>
<key>CIBAppName</key>
<string>My App</string>

<!-- Google Sign-In -->
<key>GIDServerClientID</key>
<string>your-google-server-client-id.apps.googleusercontent.com</string>
<key>GIDClientID</key>
<string>your-google-client-id.apps.googleusercontent.com</string>

<!-- Facebook Sign-In -->
<key>FacebookAppID</key>
<string>your-facebook-app-id</string>
<key>FacebookClientToken</key>
<string>your-facebook-client-token</string>
<key>FacebookDisplayName</key>
<string>My App</string>
```

---

## 2. Android Integration Guide

### Import AAR in Gradle

1. Copy `android/ciboneid-sdk-core-1.0.2.aar` into your app project's `libs/` directory (e.g. `app/libs/ciboneid-sdk-core-1.0.2.aar`).
2. Update your `app/build.gradle.kts`:

```kotlin
dependencies {
    implementation(files("libs/ciboneid-sdk-core-1.0.2.aar"))

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

Add your tenant credentials and social configuration to your app's `res/values/strings.xml`:

```xml
<resources>
    <!-- CIB OneID Core Credentials -->
    <string name="cib_tenant_id">your-tenant-id</string>
    <string name="cib_app_id">app_android_v1</string>
    <string name="cib_client_id">your-client-id</string>
    <string name="cib_client_secret">your-client-secret</string>
    <string name="cib_app_name">My App</string>

    <!-- Google Sign-In (OAuth Web / Server Client ID) -->
    <string name="google_server_client_id">your-google-server-client-id.apps.googleusercontent.com</string>
    <!-- Note: default_web_client_id from google-services.json is also automatically detected! -->

    <!-- Facebook Sign-In -->
    <string name="facebook_app_id">your-facebook-app-id</string>
    <string name="facebook_client_token">your-facebook-client-token</string>
    <string name="facebook_permissions">public_profile,email</string>
</resources>
```

---

## 3. Quick Start & SDK Initialization

All values (`clientId`, `clientSecret`, `appId`, `tenantId`, Google server client ID, Facebook App ID, etc.) are extracted automatically from `Info.plist` (iOS) or `strings.xml` (Android).

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
