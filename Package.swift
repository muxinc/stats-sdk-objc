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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.5.0/MUXCore.xcframework.zip",
            checksum: "95ef70a31db4e4b77698d7a7e2052b0d1f72a5679fda700118aac0de72487293"),
    ]
)