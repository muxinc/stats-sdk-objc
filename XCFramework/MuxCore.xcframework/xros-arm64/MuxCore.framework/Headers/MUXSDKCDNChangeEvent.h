//
//  MUXSDKCDNChangeEvent.h
//  MuxCore
//
//  Created by Santiago Puppo on 9/6/25.
//

#import <MuxCore/MUXSDKPlaybackEvent.h>
#import <Foundation/Foundation.h>

NS_HEADER_AUDIT_BEGIN(nullability, sendability)

extern NSString * const MUXSDKPlaybackEventCDNChangeEventType;

@interface MUXSDKCDNChangeEvent : MUXSDKPlaybackEvent
@end

NS_HEADER_AUDIT_END(nullability, sendability)
