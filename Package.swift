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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.11.0/MuxCore.xcframework.zip",
            checksum: "6fd1a88786ea0ed6c418a801b0c20682905ed3edace1b909eace91575e434d7e"),
    ]
)
