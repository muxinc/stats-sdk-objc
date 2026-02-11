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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.10.0/MuxCore.xcframework.zip",
            checksum: "d62dae165b641260588a280a2903a0f6ab9dcc101bc5bef78ae4a97fa15177b2"),
    ]
)
