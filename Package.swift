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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.7.1/MuxCore.xcframework.zip",
            checksum: "c737ef893910eb8d54b1b28417a96178e775153970478fd83cc4354a93e6d8f1"),
    ]
)
