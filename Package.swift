// swift-tools-version:5.3

import PackageDescription

let package = Package(
  name: "Mux-Stats-Core",
  products: [.library(name: "Mux-Stats-Core", targets: ["Mux-Stats-Core"])],
  dependencies: [],
  targets: [
    .binaryTarget(name: "Mux-Stats-Core", path: "XCFramework/MuxCore.xcframework")
  ]
)