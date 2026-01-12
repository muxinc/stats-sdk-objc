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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.8.0/MuxCore.xcframework.zip",
            checksum: "bf20361cd0b3da3d397f08ddda48cdc99381e37c837a4d155b668973d4ba2aed"),
    ]
)
