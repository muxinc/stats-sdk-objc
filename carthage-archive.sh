# Delete the old stuff
rm -Rf Carthage
# Make the target directories
mkdir -p Carthage/Build/iOS
mkdir -p Carthage/Build/tvOS

cp -r ./Frameworks/iOS/fat/*.framework ./Carthage/Build/iOS
cp -r ./Frameworks/tvOS/fat/*.framework ./Carthage/Build/tvOS

zip -r MuxCore.framework.zip Carthage
rm -Rf Carthage
