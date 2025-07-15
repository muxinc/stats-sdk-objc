#ifndef MUXSDKTrackableEvent_h
#define MUXSDKTrackableEvent_h

#import <MuxCore/MUXSDKBaseEvent.h>
#import <MuxCore/MUXSDKCustomerVideoData.h>
#import <MuxCore/MUXSDKCustomerPlayerData.h>
#import <MuxCore/MUXSDKCustomerViewData.h>
#import <MuxCore/MUXSDKCustomerViewerData.h>
#import <MuxCore/MUXSDKEnvironmentData.h>
#import <MuxCore/MUXSDKEventTyping.h>
#import <MuxCore/MUXSDKPlayerData.h>
#import <MuxCore/MUXSDKViewData.h>
#import <MuxCore/MUXSDKViewerData.h>
#import <MuxCore/MUXSDKVideoData.h>
#import <MuxCore/MUXSDKQueryData.h>
#import <MuxCore/MUXSDKBandwidthMetricData.h>
#import <MuxCore/MUXSDKCustomData.h>
#import <MuxCore/MUXSDKAdData.h>

extern NSString * _Nonnull const MUXSDKTrackableEventType;

@interface MUXSDKTrackableEvent : MUXSDKBaseEvent <MUXSDKEventTyping>

- (_Nullable id)initWithType:(NSString * _Nullable)type;
- (_Nullable id)initWithType:(NSString * _Nullable)type requiredProperties:(NSSet *_Nullable) requiredProperties;
- (void)updateAll;
- (NSDictionary * _Nullable)getQuery;
- (void)setQuery: (NSDictionary * _Nullable) query;

@property (nonatomic, copy, nullable) NSString *eventType;
@property (nonatomic, retain, nullable) MUXSDKViewData *viewData;
@property (nonatomic, retain, nullable) MUXSDKCustomerViewData *customerViewData;
@property (nonatomic, retain, nullable) MUXSDKVideoData *videoData;
@property (nonatomic, retain, nullable) MUXSDKCustomerVideoData *customerVideoData;
@property (nonatomic, retain, nullable) MUXSDKPlayerData *playerData;
@property (nonatomic, retain, nullable) MUXSDKCustomerPlayerData *customerPlayerData;
@property (nonatomic, retain, nullable) MUXSDKEnvironmentData *environmentData;
@property (nonatomic, retain, nullable) MUXSDKViewerData *viewerData;
@property (nonatomic, retain, nullable) MUXSDKCustomerViewerData *customerViewerData;
@property (nonatomic, retain, nullable) MUXSDKBandwidthMetricData *bandwidthMetricData;
@property (nonatomic, retain, nullable) MUXSDKCustomData *customData;
@property (nonatomic, retain, nullable) MUXSDKAdData *adData;

@end

#endif
