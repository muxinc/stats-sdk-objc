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

- (void)handle:(id<MUXSDKEventTyping>)event;
- (void)handleBatch:(NSString *)envKey osFamily:(NSString *)os withJson: (NSData *)json withCallback: (id<MUXSDKNetworkRequestsCompletion>) callback;
+ (void)handleException:(NSDictionary *)json pluginName:(NSString *)pluginName pluginVersion:(NSString *)pluginVerison;

@end

#endif
