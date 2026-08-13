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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.14.0/MuxCore.xcframework.zip",
            checksum: "1139e57d5896425e42a7839ef7474978921704c7c4731986a8e5ee6c621f82f6"),
    ]
)
