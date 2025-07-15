#ifndef MUXSDKCustomerViewData_h
#define MUXSDKCustomerViewData_h

#import <MuxCore/MUXSDKQueryData.h>
#import <MuxCore/MUXSDKUpsertable.h>
#import <Foundation/Foundation.h>

NS_REQUIRES_PROPERTY_DEFINITIONS
@interface MUXSDKCustomerViewData : MUXSDKQueryData<MUXSDKUpsertable>

@property (nullable) NSString *viewCDNEdgePOP;
@property (nullable) NSString *viewCDNOrigin;

@property (nullable) NSString *viewClientApplicationName;
@property (nullable) NSString *viewClientApplicationVersion;

@property (nullable) NSString *viewSessionId;

@property (nullable) NSString *viewDrmType;
@property (nullable) NSString *viewDrmLevel;

@property (nullable) NSNumber *viewTimeShiftEnabled;

@end

#endif
