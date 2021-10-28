#ifndef MUXSDKSamplingEvent_h
#define MUXSDKSamplingEvent_h

#import "MUXSDKBaseEvent.h"
#import "MUXSDKEventTyping.h"
#import "MUXSDKSamplingData.h"

extern NSString * _Nonnull const MUXSDKSamplingEventType;

@interface MUXSDKSamplingEvent : MUXSDKBaseEvent <MUXSDKEventTyping>

@property (nonatomic, retain, nullable) MUXSDKSamplingData *samplingData;

@end

#endif
