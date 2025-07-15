#ifndef MUXSDKDataEvent_h
#define MUXSDKDataEvent_h

#import <MuxCore/MUXSDKBaseEvent.h>
#import <MuxCore/MUXSDKEventTyping.h>
#import <MuxCore/MUXSDKViewerData.h>
#import <MuxCore/MUXSDKEnvironmentData.h>
#import <MuxCore/MUXSDKVideoData.h>
#import <MuxCore/MUXSDKCustomerVideoData.h>
#import <MuxCore/MUXSDKCustomerPlayerData.h>
#import <MuxCore/MUXSDKCustomerViewData.h>
#import <MuxCore/MUXSDKCustomerViewerData.h>
#import <MuxCore/MUXSDKCustomData.h>

extern NSString * _Nonnull const MUXSDKDataEventType;

@interface MUXSDKDataEvent : MUXSDKBaseEvent <MUXSDKEventTyping>

@property (nonatomic, retain) MUXSDKViewerData * _Nullable viewerData;
@property (nonatomic, retain) MUXSDKEnvironmentData * _Nullable environmentData;
@property (nonatomic, retain) MUXSDKVideoData * _Nullable videoData;
@property (nonatomic, retain) MUXSDKCustomerVideoData * _Nullable customerVideoData;
@property (nonatomic, retain) MUXSDKCustomerPlayerData * _Nullable customerPlayerData;
@property (nonatomic, retain) MUXSDKCustomerViewData * _Nullable customerViewData;
@property (nonatomic, retain) MUXSDKCustomerViewerData * _Nullable customerViewerData;
@property BOOL videoChange;
@property (nonatomic, retain) MUXSDKCustomData * _Nullable customData;

@end

#endif
