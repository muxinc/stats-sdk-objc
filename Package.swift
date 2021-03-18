// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "MuxCore",
    platforms: [
        .iOS(.v9),
        .tvOS(.v9)
    ],
    products: [
        .library(name: "MuxCore", targets: ["MuxCore"])
    ],
    targets: [
        .binaryTarget(name: "MuxCore", path: "XCFramework/MuxCore.xcframework")
    ]
)
