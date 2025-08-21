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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.6.0/MuxCore.xcframework.zip",
            checksum: "4f93d008803a08c3e51c252eb48ab71d0f173cdb2cfe99e8fdeed3c0ff981e68"),
    ]
)
