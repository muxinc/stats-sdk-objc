#ifndef MUXSDKPlaybackEvent_h
#define MUXSDKPlaybackEvent_h

#import <MuxCore/MUXSDKBaseEvent.h>
#import <MuxCore/MUXSDKEventTyping.h>
#import <MuxCore/MUXSDKPlayerData.h>
#import <MuxCore/MUXSDKVideoData.h>
#import <MuxCore/MUXSDKViewData.h>
#import <MuxCore/MUXSDKBandwidthMetricData.h>

extern NSString * _Nonnull const MUXSDKPlaybackEventType;

@interface MUXSDKPlaybackEvent : MUXSDKBaseEvent <MUXSDKEventTyping>

@property (nonatomic, retain, nullable) MUXSDKPlayerData *playerData;
@property (nonatomic, retain, nullable) MUXSDKVideoData *videoData;
@property (nonatomic, retain, nullable) MUXSDKViewData *viewData;
@property (nonatomic, retain, nullable) MUXSDKBandwidthMetricData *bandwidthMetricData;

@end

#endif
