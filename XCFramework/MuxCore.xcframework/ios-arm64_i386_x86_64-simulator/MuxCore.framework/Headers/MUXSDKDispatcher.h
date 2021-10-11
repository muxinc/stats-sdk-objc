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

@interface MUXSDKDispatcher : NSObject<MUXSDKEventHandling> {
}
- (void)handleBatch:(NSString *)envKey domain:(NSString *)domain osFamily:(NSString *)os jsonDict: (NSMutableDictionary *)jsonDict callback: (id<MUXSDKNetworkRequestsCompletion>) callback;

+ (void)handleException:(NSDictionary *)json pluginName:(NSString *)pluginName pluginVersion:(NSString *)pluginVerison;

#pragma mark Deprecated

- (void)handle:(id<MUXSDKEventTyping>)event __attribute__((deprecated("Please migrate to handleBatch:domain:osFamily:jsonDict:withCallback:")));
- (void)handleBatch:(NSString *)envKey osFamily:(NSString *)os withJson: (NSData *)json withCallback: (id<MUXSDKNetworkRequestsCompletion>) callback __attribute__((deprecated("Please migrate to handleBatch:domain:osFamily:jsonDict:withCallback:")));
- (void)handleBatch:(NSString *)envKey domain:(NSString *)domain osFamily:(NSString *)os withJson: (NSData *)json withCallback: (id<MUXSDKNetworkRequestsCompletion>) callback __attribute__((deprecated("Please migrate to handleBatch:domain:osFamily:jsonDict:withCallback:")));
@end

#endif
