#ifndef MUXSDKErrorEvent_h
#define MUXSDKErrorEvent_h

#import "MUXSDKPlaybackEvent.h"
#import <Foundation/Foundation.h>

extern NSString * _Nonnull const MUXSDKPlaybackEventErrorEventType;

@interface MUXSDKErrorEvent : MUXSDKPlaybackEvent

@property (nullable) NSString * errorContext;

-(id)init;
-(id)initWithContext:(NSString *)errorContext;

@end

#endif
