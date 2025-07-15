#import <Foundation/Foundation.h>

//! Project version number for MuxCore.
FOUNDATION_EXPORT double MuxCoreVersionNumber;

//! Project version string for MuxCore.
FOUNDATION_EXPORT const unsigned char MuxCoreVersionString[];

#import <MuxCore/MUXSDKCore.h>
#import <MuxCore/MUXSDKDispatcher.h>
#import <MuxCore/MUXSDKQueryData.h>
#import <MuxCore/MUXSDKTrackableEvent.h>
#import <MuxCore/MUXSDKBandwidthMetricData.h>
#import <MuxCore/MUXSDKCustomerPlayerData.h>
#import <MuxCore/MUXSDKCustomerVideoData.h>
#import <MuxCore/MUXSDKCustomerViewData.h>
#import <MuxCore/MUXSDKCustomerViewerData.h>
#import <MuxCore/MUXSDKEnvironmentData.h>
#import <MuxCore/MUXSDKPlayerData.h>
#import <MuxCore/MUXSDKVideoData.h>
#import <MuxCore/MUXSDKViewData.h>
#import <MuxCore/MUXSDKViewDeviceOrientationData.h>
#import <MuxCore/MUXSDKViewerData.h>
#import <MuxCore/MUXSDKBaseEvent.h>
#import <MuxCore/MUXSDKEventTyping.h>
#import <MuxCore/MUXSDKEventHandling.h>
#import <MuxCore/MUXSDKPlaybackEvent.h>
#import <MuxCore/MUXSDKDataEvent.h>
#import <MuxCore/MUXSDKSessionDataEvent.h>
#import <MuxCore/MUXSDKErrorEvent.h>
#import <MuxCore/MUXSDKInternalSeekingEvent.h>
#import <MuxCore/MUXSDKPauseEvent.h>
#import <MuxCore/MUXSDKPlayEvent.h>
#import <MuxCore/MUXSDKPlayerReadyEvent.h>
#import <MuxCore/MUXSDKPlayingEvent.h>
#import <MuxCore/MUXSDKSeekedEvent.h>
#import <MuxCore/MUXSDKTimeUpdateEvent.h>
#import <MuxCore/MUXSDKViewInitEvent.h>
#import <MuxCore/MUXSDKViewEndEvent.h>
#import <MuxCore/MUXSDKRequestBandwidthEvent.h>
#import <MuxCore/MUXSDKAdBreakEndEvent.h>
#import <MuxCore/MUXSDKAdBreakStartEvent.h>
#import <MuxCore/MUXSDKAdEndedEvent.h>
#import <MuxCore/MUXSDKAdErrorEvent.h>
#import <MuxCore/MUXSDKAdFirstQuartileEvent.h>
#import <MuxCore/MUXSDKAdMidpointEvent.h>
#import <MuxCore/MUXSDKAdPauseEvent.h>
#import <MuxCore/MUXSDKAdPlayEvent.h>
#import <MuxCore/MUXSDKAdPlayingEvent.h>
#import <MuxCore/MUXSDKAdThirdQuartileEvent.h>
#import <MuxCore/MUXSDKAdRequestEvent.h>
#import <MuxCore/MUXSDKAdResponseEvent.h>
#import <MuxCore/MUXSDKOrientationChangeEvent.h>
#import <MuxCore/MUXSDKRenditionChangeEvent.h>
#import <MuxCore/MUXSDKCDNChangeEvent.h>
#import <MuxCore/MUXSDKEndedEvent.h>
#import <MuxCore/MUXSDKCustomerData.h>
#import <MuxCore/MUXSDKCustomData.h>
#import <MuxCore/MUXSDKErrorEventTranslating.h>


// Avoid warnings about these files missing from the umbrella header:
#if TARGET_OS_TV
#import <MuxCore/MuxCoreTv.h>
#elif TARGET_OS_VISION
#import <MuxCore/MuxCoreVision.h>
#endif
