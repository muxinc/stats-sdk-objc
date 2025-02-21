#ifndef MUXSDKCustomerViewerData_h
#define MUXSDKCustomerViewerData_h

#import <Foundation/Foundation.h>
#import "MUXSDKQueryData.h"
#import "MUXSDKUpsertable.h"

NS_REQUIRES_PROPERTY_DEFINITIONS
@interface MUXSDKCustomerViewerData : MUXSDKQueryData<MUXSDKUpsertable>

@property (nullable) NSString *viewerPlan;
@property (nullable) NSString *viewerPlanCategory;
@property (nullable) NSString *viewerPlanStatus;

@property (nullable) NSString* viewerApplicationName;
@property (nullable) NSString* viewerOsFamily;
@property (nullable) NSString* viewerOsVersion;
@property (nullable) NSString* viewerDeviceModel;
@property (nullable) NSString* viewerDeviceManufacturer;
@property (nullable) NSString* viewerDeviceCategory;

@end

#endif
