//
//  MUXSDKAdEvent.h
//  MuxCore
//
//  Created by Emily Dixon on 1/30/23.
//  Copyright © 2023 Mux. All rights reserved.
//

#ifndef MUXSDKAdEvent_h
#define MUXSDKAdEvent_h

#import <MuxCore/MUXSDKAdData.h>
#import <MuxCore/MUXSDKEventTyping.h>
#import <MuxCore/MUXSDKPlaybackEvent.h>

@interface MUXSDKAdEvent : MUXSDKPlaybackEvent<MUXSDKEventTyping>
@property (nonatomic, retain, nullable) MUXSDKAdData *adData;
@end

#endif /* MUXSDKAdEvent_h */
