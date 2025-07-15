#ifndef MUXSDKCustomerVideoData_h
#define MUXSDKCustomerVideoData_h

#import <MuxCore/MUXSDKQueryData.h>
#import <MuxCore/MUXSDKUpsertable.h>
#import <Foundation/Foundation.h>

NS_REQUIRES_PROPERTY_DEFINITIONS
@interface MUXSDKCustomerVideoData : MUXSDKQueryData<MUXSDKUpsertable>

@property (nullable) NSString *videoAffiliate;
@property (nullable) NSString *videoBrand;
@property (nullable) NSString *videoCodec;
@property (nullable) NSString *videoAudioCodec;
@property (nullable) NSString *videoCdn DEPRECATED_MSG_ATTRIBUTE("Please migrate to MUXSDKVideoData.videoCDN instead");
@property (nullable) NSString *videoContentType;
@property (nullable) NSString *videoCreatorId;
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
