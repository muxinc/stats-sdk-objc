#ifndef MUXSDKViewData_h
#define MUXSDKViewData_h

#import "MUXSDKQueryData.h"
#import "MUXSDKViewDeviceOrientationData.h"
#import <Foundation/Foundation.h>

extern NSString * _Nonnull VIEW_SEQUENCE_NUMBER;
extern NSString * _Nonnull VIEW_ID;
extern NSString * _Nonnull VIEWER_TIME;

@interface MUXSDKViewData : MUXSDKQueryData

@property (nullable) NSNumber *viewAdBreakCount;
@property (nullable) NSNumber *viewAdCompleteCount;
@property (nullable) NSNumber *viewAdErrorCount;
@property (nullable) NSNumber *viewAdViewCount;
@property (nullable) NSNumber *viewAdWatchTime;
@property (nullable) NSNumber *viewEnd;
@property (nullable) NSString *viewId;
@property (nullable) NSNumber *viewMaxDownscalePercentage;
@property (nullable) NSNumber *viewMaxSeekTime;
@property (nullable) NSNumber *viewMaxUpscalePercentage;
@property (nullable) NSNumber *viewMidrollTimeToFirstAd;
@property (nullable) NSNumber *viewPercentageViewed;
@property (nullable) NSNumber *viewRebufferCount;
@property (nullable) NSNumber *viewRebufferDuration;
@property (nullable) NSNumber *viewRebufferFrequency;
@property (nullable) NSNumber *viewRebufferPercentage;
@property (nullable) NSNumber *viewSeekCount;
@property (nullable) NSNumber *viewSeekDuration;
@property (nullable) NSNumber *viewSequenceNumber;
@property (nullable) NSNumber *viewStart;
@property (nullable) NSNumber *viewTimeToFirstFrame;
@property (nullable) NSNumber *viewTimeToPreroll;
@property (nullable) NSNumber *viewTotalContentPlaybackTime;
@property (nullable) NSNumber *viewTotalDownscaling;
@property (nullable) NSNumber *viewTotalUpscaling;
@property (nullable) NSNumber *viewWaitingRebufferCount;
@property (nullable) NSNumber *viewWaitingRebufferDuration;
@property (nullable) NSNumber *viewWatchTime;
@property (nullable) NSNumber *viewerTime;
@property (nullable) NSNumber *viewMinRequestThroughput;
@property (nullable) NSNumber *viewAverageRequestThroughput;
@property (nullable) NSNumber *viewMaxRequestLatency;
@property (nullable) NSNumber *viewAverageRequestLatency;
@property (nullable) NSString *viewPrerollAdId;
@property (nullable) NSString *viewPrerollCreativeId;
@property (nullable) NSNumber *viewPrerollRequested;
@property (nullable) NSNumber *viewPrerollPlayed;
@property (nullable) NSNumber *viewPrerollRequestTime;
@property (nullable) NSNumber *viewStartupPrerollRequestTime;
@property (nullable) NSNumber *viewPrerollLoadTime;
@property (nullable) NSNumber *viewStartupPrerollLoadTime;
@property (nullable) NSString *viewPrerollAdTagHostname;
@property (nullable) NSString *viewPrerollAdTagDomain;
@property (nullable) NSString *vviewPrerollAdAssetHostname;
@property (nullable) NSString *viewPrerollAdAssetDomain;
@property (nonatomic, nullable) MUXSDKViewDeviceOrientationData *viewDeviceOrientationData;
@end

#endif
