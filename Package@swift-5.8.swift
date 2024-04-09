// swift-tools-version:5.8

import PackageDescription

let package = Package(
    name: "MuxCore",
    platforms: [
        .iOS(.v12),
        .tvOS(.v12),
    ],
    products: [
        .library(name: "MuxCore", targets: ["MuxCore"])
    ],
    targets: [
        .binaryTarget(name: "MuxCore", path: "XCFramework/MuxCore.xcframework")
    ]
)
