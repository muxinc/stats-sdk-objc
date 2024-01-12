#ifndef MUXSDKErrorEvent_h
#define MUXSDKErrorEvent_h

#import "MUXSDKPlaybackEvent.h"
#import <Foundation/Foundation.h>

extern NSString * _Nonnull const MUXSDKPlaybackEventErrorEventType;

@interface MUXSDKErrorEvent : MUXSDKPlaybackEvent

@property (nullable) NSString * errorContext;

-(nonnull instancetype)initWithContext:(nullable NSString *)errorContext;

@end

#endif
