// swift-tools-version:5.9

import PackageDescription

let package = Package(
    name: "MuxCore",
    platforms: [
        .iOS(.v12),
        .macCatalyst(.v13),
        .tvOS(.v12),
        .visionOS(.v1)
    ],
    products: [
        .library(name: "MuxCore", targets: ["MuxCore"])
    ],
    targets: [
        .binaryTarget(name: "MuxCore", path: "XCFramework/MuxCore.xcframework")
    ]
)
