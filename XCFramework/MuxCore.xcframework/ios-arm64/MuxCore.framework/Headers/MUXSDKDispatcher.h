#ifndef MUXSDKDispatcher_h
#define MUXSDKDispatcher_h

#import "MUXSDKEventHandling.h"
#import "MUXSDKEventTyping.h"

#if __has_feature(modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif

@protocol MUXSDKNetworkRequestsCompletion
- (void)onComplete: (bool)result;
@end

@protocol MUXSDKNetworkRequestBuilding
- (NSMutableURLRequest *) buildRequestFromURL:(NSURL *) url eventsJsonDict:(NSDictionary *) dict error:(NSError **) error;
@end

@interface MUXSDKDispatcher : NSObject<MUXSDKEventHandling, MUXSDKNetworkRequestBuilding> {
}
- (void)handleBatch:(NSString *)envKey beaconCollectionDomain:(NSString *)collectionDomain osFamily:(NSString *)os jsonDict: (NSMutableDictionary *)jsonDict callback: (id<MUXSDKNetworkRequestsCompletion>) callback;

+ (void)handleException:(NSDictionary *)json pluginName:(NSString *)pluginName pluginVersion:(NSString *)pluginVerison;

#pragma mark Deprecated

- (void)handle:(id<MUXSDKEventTyping>)event __attribute__((deprecated("Please migrate to handleBatch:domain:osFamily:jsonDict:withCallback:")));
- (void)handleBatch:(NSString *)envKey osFamily:(NSString *)os withJson: (NSData *)json withCallback: (id<MUXSDKNetworkRequestsCompletion>) callback __attribute__((deprecated("Please migrate to handleBatch:domain:osFamily:jsonDict:withCallback:")));
- (void)handleBatch:(NSString *)envKey domain:(NSString *)domain osFamily:(NSString *)os withJson: (NSData *)json withCallback: (id<MUXSDKNetworkRequestsCompletion>) callback __attribute__((deprecated("Please migrate to handleBatch:domain:osFamily:jsonDict:withCallback:")));
- (void)handleBatch:(NSString *)envKey domain:(NSString *)domain osFamily:(NSString *)os jsonDict: (NSMutableDictionary *)jsonDict callback: (id<MUXSDKNetworkRequestsCompletion>) callback __attribute__((deprecated("Please migrate to handleBatch:beaconCollectionDomain:osFamily:jsonDict:withCallback:")));;
@end

#endif
