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
            url: "https://github.com/muxinc/stats-sdk-objc/releases/download/v5.5.1/MuxCore.xcframework.zip",
            checksum: "0519d609b35d4a988c7893e77bee0354a642a554c54612d23c2f258d25e0f2ee"),
    ]
)
