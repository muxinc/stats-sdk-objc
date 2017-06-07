#ifndef MUXSDKCustomerPlayerData_h
#define MUXSDKCustomerPlayerData_h

#import "MUXSDKQueryData.h"
#import <Foundation/Foundation.h>

@interface MUXSDKCustomerPlayerData : MUXSDKQueryData

- (nullable instancetype)init NS_UNAVAILABLE;
+ (nullable instancetype)new NS_UNAVAILABLE;

- (nullable instancetype)initWithPropertyKey:(nonnull NSString *)propertyKey;

@property (nullable) NSString *adConfigVariant;
@property (nullable) NSString *experimentName;
@property (nullable) NSString *pageType;
@property (nullable) NSNumber *playerInitTime;
@property (nullable) NSString *playerName;
@property (nullable) NSString *playerVersion;
@property (nullable) NSString *propertyKey;
@property (nullable) NSString *subPropertyId;
@property (nullable) NSString *viewerUserId;

@end

#endif
