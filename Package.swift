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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.13.0/MuxCore.xcframework.zip",
            checksum: "c122b77b8bf08bc74ce89560e905502b38f30b67303d23868eb82e06d77d999f"),
    ]
)
