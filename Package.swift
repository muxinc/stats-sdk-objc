// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "MuxCore",
    platforms: [
        .iOS(.v11),
        .tvOS(.v11)
    ],
    products: [
        .library(name: "MuxCore", targets: ["MuxCore"])
    ],
    targets: [
        .binaryTarget(name: "MuxCore", path: "XCFramework/MuxCore.xcframework")
    ]
)
