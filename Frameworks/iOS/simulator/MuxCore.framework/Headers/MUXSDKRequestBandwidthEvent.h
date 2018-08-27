#ifndef MUXSDKRequestBandwidthEvent_h
#define MUXSDKRequestBandwidthEvent_h

#import "MUXSDKPlaybackEvent.h"
#import <Foundation/Foundation.h>

extern NSString *const MUXSDKPlaybackEventRequestBandwidthEventErrorType;
extern NSString *const MUXSDKPlaybackEventRequestBandwidthEventCancelType;
extern NSString *const MUXSDKPlaybackEventRequestBandwidthEventCompleteType;

@interface MUXSDKRequestBandwidthEvent : MUXSDKPlaybackEvent
@property (nullable) NSString *type;
@end

#endif
