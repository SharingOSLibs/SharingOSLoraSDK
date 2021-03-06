// swift-tools-version:5.3
import PackageDescription
let package = Package(
    name: "SharingOSLockSDK",
    platforms: [
        .iOS(.v10)
    ],
    products: [
        .library(
            name: "SharingOSLockSDK", 
            targets: ["SharingOSLockSDK"])
    ],
    targets: [
        .binaryTarget(
            name: "SharingOSLockSDK", 
            path: "1.0.3/SharingOSLockSDK.xcframework")
    ])
