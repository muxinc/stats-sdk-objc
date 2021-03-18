// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "Mux-Stats-Core",
    platforms: [
        .iOS(.v9),
        .tvOS(.v9)
    ],
    products: [
        .library(name: "Mux-Stats-Core", targets: ["Mux-Stats-Core"])
    ],
    targets: [
        .binaryTarget(name: "Mux-Stats-Core", path: "XCFramework/MuxCore.xcframework")
    ]
)
