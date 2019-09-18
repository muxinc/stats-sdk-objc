#ifndef MUXSDKRequestBandwidthEvent_h
#define MUXSDKRequestBandwidthEvent_h

#import "MUXSDKPlaybackEvent.h"
#import <Foundation/Foundation.h>

extern NSString *__nullable const MUXSDKPlaybackEventRequestBandwidthEventErrorType;
extern NSString *__nullable const MUXSDKPlaybackEventRequestBandwidthEventCancelType;
extern NSString *__nullable const MUXSDKPlaybackEventRequestBandwidthEventCompleteType;

@interface MUXSDKRequestBandwidthEvent : MUXSDKPlaybackEvent
@property (nullable) NSString *type;
@end

#endif
