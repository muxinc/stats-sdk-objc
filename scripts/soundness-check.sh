#!/bin/bash

readonly RELEASE_VERSION="5.4.2"

readonly PACKAGE_NAME=MuxCore
readonly PACKAGE="$PACKAGE_NAME.xcframework"

readonly PACKAGE_DIR="$PWD/XCFramework/$PACKAGE"

readonly IOS_SLICE_PACKAGE_SUBDIRECTORY="ios-arm64"
readonly IOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY="ios-arm64_x86_64-simulator"
readonly IOS_MACCATALYST_SLICE_PACKAGE_SUBDIRECTORY="ios-arm64_x86_64-maccatalyst"
readonly TVOS_SLICE_PACKAGE_SUBDIRECTORY="tvos-arm64"
readonly TVOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY="tvos-arm64_x86_64-simulator"
readonly XROS_SLICE_PACKAGE_SUBDIRECTORY="xros-arm64"
readonly XROS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY="xros-arm64_x86_64-simulator"

readonly IOS_SLICE_DIR="$PACKAGE_DIR/$IOS_SLICE_PACKAGE_SUBDIRECTORY/${PACKAGE_NAME}.framework"
readonly IOS_SIMULATOR_SLICE_DIR="$PACKAGE_DIR/$IOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY/${PACKAGE_NAME}.framework"
readonly IOS_MACCATALYST_SLICE_DIR="$PACKAGE_DIR/$IOS_MACCATALYST_SLICE_PACKAGE_SUBDIRECTORY/${PACKAGE_NAME}.framework"
readonly TVOS_SLICE_DIR="$PACKAGE_DIR/$TVOS_SLICE_PACKAGE_SUBDIRECTORY/${PACKAGE_NAME}.framework"
readonly TVOS_SIMULATOR_SLICE_DIR="$PACKAGE_DIR/$TVOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY/${PACKAGE_NAME}.framework"
readonly XROS_SLICE_DIR="$PACKAGE_DIR/$XROS_SLICE_PACKAGE_SUBDIRECTORY/${PACKAGE_NAME}.framework"
readonly XROS_SIMULATOR_SLICE_DIR="$PACKAGE_DIR/$XROS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY/${PACKAGE_NAME}.framework"

echo "▸ Branch release version: $RELEASE_VERSION"

echo "▸ Validating ${PACKAGE}"

echo "▸ Verifying $IOS_SLICE_PACKAGE_SUBDIRECTORY slice"

if [ -d $IOS_SLICE_DIR ]; then
    echo "▸ Found slice"
else
    echo "▸ Didn't find slice at $IOS_SLICE_DIR"
    exit 1
fi

echo "▸ Checking $IOS_SLICE_PACKAGE_SUBDIRECTORY CFBundleShortVersionString"

ios_slice_version="$(plutil -extract CFBundleShortVersionString raw \
       -o - $IOS_SLICE_DIR/Info.plist)"

if [[ $ios_slice_version == $RELEASE_VERSION ]]; then
    echo "Matching version"
else
    echo "▸ $IOS_SLICE_PACKAGE_SUBDIRECTORY packaged with incorrect version $ios_slice_version, expected $RELEASE_VERSION"
    exit 1
fi

echo "▸ Verifying $IOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY slice"

if [ -d $IOS_SIMULATOR_SLICE_DIR ]; then
    echo "▸ Found slice"
else
    echo "▸ Didn't find slice"
    exit 1
fi

ios_simulator_slice_version="$(plutil -extract CFBundleShortVersionString raw \
       -o - $IOS_SIMULATOR_SLICE_DIR/Info.plist)"

echo "▸ Checking $IOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY CFBundleShortVersionString"

if [[ $ios_simulator_slice_version == $RELEASE_VERSION ]]; then
    echo "Matching version"
else
    echo "▸ $IOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY packaged with incorrect version $ios_simulator_slice_version, expected $RELEASE_VERSION"
fi

echo "▸ Verifying $IOS_MACCATALYST_SLICE_PACKAGE_SUBDIRECTORY slice"

if [ -d $IOS_MACCATALYST_SLICE_DIR ]; then
    echo "▸ Found slice"
else
    echo "▸ Didn't find slice"
    exit 1
fi

ios_maccatalyst_slice_version="$(plutil -extract CFBundleShortVersionString raw \
       -o - $IOS_MACCATALYST_SLICE_DIR/Resources/Info.plist)"

echo "▸ Checking $IOS_MACCATALYST_SLICE_PACKAGE_SUBDIRECTORY CFBundleShortVersionString"

if [[ $ios_maccatalyst_slice_version == $RELEASE_VERSION ]]; then
    echo "Matching version"
else
    echo "▸ $IOS_MACCATALYST_SLICE_PACKAGE_SUBDIRECTORY packaged with incorrect version $ios_maccatalyst_slice_version, expected $RELEASE_VERSION"
fi

echo "▸ Verifying $TVOS_SLICE_PACKAGE_SUBDIRECTORY slice"

if [ -d $TVOS_SLICE_DIR ]; then
    echo "▸ Found slice"
else
    echo "▸ Didn't find slice"
    exit 1
fi

tvos_slice_version="$(plutil -extract CFBundleShortVersionString raw \
       -o - $TVOS_SLICE_DIR/Info.plist)"

echo "▸ Checking $TVOS_SLICE_PACKAGE_SUBDIRECTORY CFBundleShortVersionString"

if [[ $tvos_slice_version == $RELEASE_VERSION ]]; then
    echo "Matching version"
else
    echo "▸ $TVOS_SLICE_PACKAGE_SUBDIRECTORY packaged with incorrect version $tvos_slice_version, expected $RELEASE_VERSION"
fi

echo "▸ Verifying $TVOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY slice"

if [ -d $TVOS_SIMULATOR_SLICE_DIR ]; then
    echo "▸ Found slice"
else
    echo "▸ Didn't find slice"
    exit 1
fi

tvos_simulator_slice_version="$(plutil -extract CFBundleShortVersionString raw \
       -o - $TVOS_SIMULATOR_SLICE_DIR/Info.plist)"

echo "▸ Checking $TVOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY CFBundleShortVersionString"

if [[ $tvos_simulator_slice_version == $RELEASE_VERSION ]]; then
    echo "Matching version"
else
    echo "▸ $TVOS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY packaged with incorrect version $tvos_simulator_slice_version, expected $RELEASE_VERSION"
fi

echo "▸ Verifying $XROS_SLICE_PACKAGE_SUBDIRECTORY slice"

if [ -d $XROS_SLICE_DIR ]; then
    echo "▸ Found slice"
else
    echo "▸ Didn't find slice"
    exit 1
fi

xros_slice_version="$(plutil -extract CFBundleShortVersionString raw \
       -o - $XROS_SLICE_DIR/Info.plist)"

echo "▸ Checking $XROS_SLICE_PACKAGE_SUBDIRECTORY CFBundleShortVersionString"

if [[ $xros_slice_version == $RELEASE_VERSION ]]; then
    echo "Matching version"
else
    echo "▸ $XROS_SLICE_PACKAGE_SUBDIRECTORY packaged with incorrect version $xros_slice_version, expected $RELEASE_VERSION"
fi

echo "▸ Verifying $XROS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY slice"

if [ -d $XROS_SIMULATOR_SLICE_DIR ]; then
    echo "▸ Found slice"
else
    echo "▸ Didn't find slice"
    exit 1
fi

xros_simulator_slice_version="$(plutil -extract CFBundleShortVersionString raw \
       -o - $XROS_SIMULATOR_SLICE_DIR/Info.plist)"

echo "▸ Checking $XROS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY CFBundleShortVersionString"

if [[ $xros_simulator_slice_version == $RELEASE_VERSION ]]; then
    echo "Matching version"
else
    echo "▸ $XROS_SIMULATOR_SLICE_PACKAGE_SUBDIRECTORY packaged with incorrect version $xros_simulator_slice_version, expected $RELEASE_VERSION"
fi


