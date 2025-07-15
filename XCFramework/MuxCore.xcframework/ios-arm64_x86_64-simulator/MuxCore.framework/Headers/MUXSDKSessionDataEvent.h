
#ifndef MUXSDKSessionDataEvent_h
#define MUXSDKSessionDataEvent_h

#import <MuxCore/MUXSDKBaseEvent.h>
#import <MuxCore/MUXSDKEventTyping.h>
#import <MuxCore/MUXSDKVideoData.h>
#import <MuxCore/MUXSDKViewData.h>
#import <MuxCore/MUXSDKCustomerVideoData.h>
#import <MuxCore/MUXSDKCustomerPlayerData.h>
#import <MuxCore/MUXSDKCustomerViewData.h>
#import <MuxCore/MUXSDKCustomerViewerData.h>
#import <MuxCore/MUXSDKCustomData.h>

extern NSString * _Nonnull const MUXSDKSessionDataEventType;

@interface MUXSDKSessionDataEvent : MUXSDKBaseEvent <MUXSDKEventTyping>

@property (nonatomic, retain) NSDictionary * _Nullable sessionData;
@property (nonatomic, retain) MUXSDKViewData * _Nullable viewData;
@property (nonatomic, retain) MUXSDKVideoData * _Nullable videoData;
@property (nonatomic, retain) MUXSDKCustomerVideoData * _Nullable customerVideoData;
@property (nonatomic, retain) MUXSDKCustomerPlayerData * _Nullable customerPlayerData;
@property (nonatomic, retain) MUXSDKCustomerViewData * _Nullable customerViewData;
@property (nonatomic, retain) MUXSDKCustomerViewerData * _Nullable customerViewerData;
@property (nonatomic, retain) MUXSDKCustomData * _Nullable customData;

@end

#endif
