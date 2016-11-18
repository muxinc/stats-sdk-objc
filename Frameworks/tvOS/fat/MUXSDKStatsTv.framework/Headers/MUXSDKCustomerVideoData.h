#ifndef MUXSDKCustomerVideoData_h
#define MUXSDKCustomerVideoData_h

#import "MUXSDKQueryData.h"
#import <Foundation/Foundation.h>

@interface MUXSDKCustomerVideoData : MUXSDKQueryData

- (void)setVideoCdn:(nullable NSString *)videoCdn;
- (nullable NSString *)videoCdn;
- (void)setVideoContentType:(nullable NSString *)videoContentType;
- (nullable NSString *)videoContentType;
- (void)setVideoDuration:(nullable NSNumber *)videoDuration;
- (nullable NSNumber *)videoDuration;
- (void)setVideoEncodingVariant:(nullable NSString *)videoEncodingVariant;
- (nullable NSString *)videoEncodingVariant;
- (void)setVideoId:(nullable NSString *)videoId;
- (nullable NSString *)videoId;
- (void)setVideoIsLive:(nullable NSNumber *)videoIsLive;
- (nullable NSNumber *)videoIsLive;
- (void)setVideoLanguageCode:(nullable NSString *)videoLanguageCode;
- (nullable NSString *)videoLanguageCode;
- (void)setVideoProducer:(nullable NSString *)videoProducer;
- (nullable NSString *)videoProducer;
- (void)setVideoSeries:(nullable NSString *)videoSeries;
- (nullable NSString *)videoSeries;
- (void)setVideoStreamType:(nullable NSString *)videoStreamType;
- (nullable NSString *)videoStreamType;
- (void)setVideoTitle:(nullable NSString *)videoTitle;
- (nullable NSString *)videoTitle;
- (void)setVideoVariantId:(nullable NSString *)videoVariantId;
- (nullable NSString *)videoVariantId;
- (void)setVideoVariantName:(nullable NSString *)videoVariantName;
- (nullable NSString *)videoVariantName;

@end

#endif
