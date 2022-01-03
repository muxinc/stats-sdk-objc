#ifndef MUXSDKViewerData_h
#define MUXSDKViewerData_h

#import "MUXSDKQueryData.h"
#import <Foundation/Foundation.h>

@interface MUXSDKViewerData : MUXSDKQueryData

@property (nullable) NSString *viewerApplicationEngine;
@property (nullable) NSString *viewerApplicationName;
@property (nullable) NSString *viewerApplicationVersion;
@property (nullable) NSString *viewerDeviceCategory;
@property (nullable) NSString *viewerDeviceManufacturer;
@property (nullable) NSString *viewerDeviceName;
@property (nullable) NSString *viewerOsArchitecture;
@property (nullable) NSString *viewerOsFamily;
@property (nullable) NSString *viewerOsVersion;
@property (nullable) NSString *viewerConnectionType;
@property (nullable) NSString *viewerDeviceModel;
@property (nullable) NSString *MuxViewerDeviceCategory;
@property (nullable) NSString *MuxViewerDeviceManufacturer;
@property (nullable) NSString *MuxViewerDeviceName;
@property (nullable) NSString *MuxViewerOsFamily;
@property (nullable) NSString *MuxViewerOsVersion;
@property (nullable) NSString *MuxViewerDeviceModel;

@end

#endif
