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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.7.0/MuxCore.xcframework.zip",
            checksum: "93e763e1bab3b35e9e760fe48fb9f3408c1539edda97d395a85143a9f11e0027"),
    ]
)
