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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.8.1/MuxCore.xcframework.zip",
            checksum: "1f26cb52028c63f837f010b3c4a1a8aec3c19338b7879f5dc866211e8af2fd43"),
    ]
)
