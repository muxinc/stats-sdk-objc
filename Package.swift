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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.9.0/MuxCore.xcframework.zip",
            checksum: "b849cb63148d0b9434b1e05ef6742e98fc7683d8b573f0382235926e46710be2"),
    ]
)
