#ifndef MUXSDKCustomerPlayerData_h
#define MUXSDKCustomerPlayerData_h

#import "MUXSDKQueryData.h"
#import <Foundation/Foundation.h>
#import "MUXSDKUpsertable.h"

NS_REQUIRES_PROPERTY_DEFINITIONS
@interface MUXSDKCustomerPlayerData : MUXSDKQueryData<MUXSDKUpsertable>

- (nullable instancetype)initWithEnvironmentKey:(nonnull NSString *)envKey;

@property (nullable) NSString *adConfigVariant;
@property (nullable) NSString *experimentName;
@property (nullable) NSString *pageType;
@property (nullable) NSNumber *playerInitTime;
@property (nullable) NSString *playerName;
@property (nullable) NSString *playerVersion;
@property (nullable) NSString *playerSoftwareName;
@property (nullable) NSString *playerSoftwareVersion;
@property (nullable) NSString *environmentKey;
@property (nullable) NSString *subPropertyId;
@property (nullable) NSString *viewerUserId;
@property (nullable) NSNumber *playerCaptionsEnabled;
@property (nullable) NSNumber *playerPictureInPictureEnabled;

@property BOOL playerAutoplayOn;

@end


@interface MUXSDKCustomerPlayerData (MUXSDKDeprecated)

- (nullable instancetype)initWithPropertyKey:(nonnull NSString *)propertyKey
    DEPRECATED_MSG_ATTRIBUTE("Please migrate to -initWithEnvironmentKey:");

@property (nullable) NSString *propertyKey
    DEPRECATED_MSG_ATTRIBUTE("Please migrate to environmentKey");

@end

#endif
