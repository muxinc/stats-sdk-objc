#ifndef MUXSDKTrackableEvent_h
#define MUXSDKTrackableEvent_h

#import "MUXSDKBaseEvent.h"
#import "MUXSDKCustomerVideoData.h"
#import "MUXSDKCustomerPlayerData.h"
#import "MUXSDKEnvironmentData.h"
#import "MUXSDKEventTyping.h"
#import "MUXSDKPlayerData.h"
#import "MUXSDKViewData.h"
#import "MUXSDKViewerData.h"
#import "MUXSDKVideoData.h"
#import "MUXSDKQueryData.h"
#import "MUXSDKBandwidthMetricData.h"

extern NSString * _Nonnull const MUXSDKTrackableEventType;

@interface MUXSDKTrackableEvent : MUXSDKBaseEvent <MUXSDKEventTyping> {
    @private
    MUXSDKQueryData* query;
}

- (_Nullable id)initWithType:(NSString * _Nullable)type;
- (_Nullable id)initWithType:(NSString * _Nullable)type requiredProperties:(NSSet *_Nullable) requiredProperties;
- (void)updateAll;
- (NSDictionary * _Nullable)getQuery;
- (void)setQuery: (NSDictionary * _Nullable) query;

@property (nonatomic, copy, nullable) NSString *eventType;
@property (nonatomic, retain, nullable) MUXSDKViewData *viewData;
@property (nonatomic, retain, nullable) MUXSDKVideoData *videoData;
@property (nonatomic, retain, nullable) MUXSDKCustomerVideoData *customerVideoData;
@property (nonatomic, retain, nullable) MUXSDKPlayerData *playerData;
@property (nonatomic, retain, nullable) MUXSDKCustomerPlayerData *customerPlayerData;
@property (nonatomic, retain, nullable) MUXSDKEnvironmentData *environmentData;
@property (nonatomic, retain, nullable) MUXSDKViewerData *viewerData;
@property (nonatomic, retain, nullable) MUXSDKBandwidthMetricData *bandwidthMetricData;

@end

#endif
