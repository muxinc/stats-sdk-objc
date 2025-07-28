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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.5.0/MuxCore.xcframework.zip",
            checksum: "d60a8f241d64224d446d80f14c9387310429ec1b8e71a6a9b69275a918c0a05f"),
    ]
)