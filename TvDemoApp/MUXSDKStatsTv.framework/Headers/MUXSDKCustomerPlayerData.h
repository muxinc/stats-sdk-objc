#ifndef MUXSDKCustomerPlayerData_h
#define MUXSDKCustomerPlayerData_h

#import "MUXSDKQueryData.h"
#import <Foundation/Foundation.h>

@interface MUXSDKCustomerPlayerData : MUXSDKQueryData

- (nullable instancetype)init NS_UNAVAILABLE;
+ (nullable instancetype)new NS_UNAVAILABLE;

- (nullable instancetype)initWithPropertyKey:(nonnull NSString *)propertyKey;

- (void)setAdConfigVariant:(nullable NSString *)adConfigVariant;
- (nullable NSString *)adConfigVariant;
- (void)setExperimentName:(nullable NSString *)experimentName;
- (nullable NSString *)experimentName;
- (void)setPageType:(nullable NSString *)pageType;
- (nullable NSString *)pageType;
- (void)setPlayerInitTime:(nullable NSNumber *)playerInitTime;
- (nullable NSNumber *)playerInitTime;
- (void)setPlayerName:(nullable NSString *)playerName;
- (nullable NSString *)playerName;
- (void)setPlayerVersion:(nullable NSString *)playerVersion;
- (nullable NSString *)playerVersion;
- (void)setPropertyKey:(nullable NSString *)propertyKey;
- (nullable NSString *)propertyKey;
- (void)setViewerUserId:(nullable NSString *)viewerUserId;
- (nullable NSString *)viewerUserId;

@end

#endif
