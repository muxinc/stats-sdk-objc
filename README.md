# stats-sdk-objc

Hosts the core library for Mux for objective-c based integrations as of v2.x. The integration with `AVPlayer`/`AVPlayerItem` has been moved to a [new repository](https://github.com/muxinc/mux-stats-sdk-avplayer).

# Previous Versions
Versions 0.x of this library included the full `AVPlayer` integration, see [our docs](https://docs.mux.com/docs/ios-integration-guide) for integration instructions. If you currently use the cocoapod for this library as your integration, do _not_ upgrade above 0.x of this library.

# Release
To support the Carthage packaging, run the `carthage-archive.sh` when making a new release. Then attach the output to the release. 

### Upgrading
See [this repository](https://github.com/muxinc/mux-stats-sdk-avplayer) for the updated `AVPlayer` integration.
