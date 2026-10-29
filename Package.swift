// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "CIBOneIdSDK",
    platforms: [
        .iOS(.v16)
    ],
    products: [
        .library(
            name: "CIBOneIdSDK",
            targets: ["CIBOneIdSDK"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "CIBOneIdSDK",
            path: "CIBOneIdSDK.xcframework"
        )
    ]
)
