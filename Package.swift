// swift-tools-version:6.0

import PackageDescription

let package = Package(
    name: "MuxCore",
    products: [
        .library(name: "MuxCore", targets: ["MuxCore"]),
    ],
    targets: [
        .binaryTarget(
            name: "MuxCore",
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.12.0/MuxCore.xcframework.zip",
            checksum: "991dcf7a024d7afd84fbf4f2806e0ca5e24fd07a4efd8afc08df9f42adb54575"),
    ]
)
