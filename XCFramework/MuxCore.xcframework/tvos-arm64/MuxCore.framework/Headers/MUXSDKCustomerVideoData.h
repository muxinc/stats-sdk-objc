#ifndef MUXSDKCustomerVideoData_h
#define MUXSDKCustomerVideoData_h

#import "MUXSDKQueryData.h"
#import <Foundation/Foundation.h>
#import "MUXSDKUpsertable.h"

NS_REQUIRES_PROPERTY_DEFINITIONS
@interface MUXSDKCustomerVideoData : MUXSDKQueryData<MUXSDKUpsertable>

@property (nullable) NSString *videoAffiliate;
@property (nullable) NSString *videoBrand;
@property (nullable) NSString *videoCodec;
@property (nullable) NSString *videoAudioCodec;
@property (nullable) NSString *videoCdn;
@property (nullable) NSString *videoContentType;
@property (nullable) NSNumber *videoDuration;
@property (nullable) NSString *videoDynamicRangeType;
@property (nullable) NSString *videoEncodingVariant;
@property (nullable) NSString *videoId;
@property (nullable) NSNumber *videoIsLive;
@property (nullable) NSString *videoLanguageCode;
@property (nullable) NSString *videoProducer;
@property (nullable) NSString *videoSeries;
@property (nullable) NSString *videoStreamType;
@property (nullable) NSString *videoTitle;
@property (nullable) NSString *videoVariantId;
@property (nullable) NSString *videoVariantName;
@property (nullable) NSString *videoSourceUrl;
@property (nullable) NSString *videoExperiments;

@end

#endif
