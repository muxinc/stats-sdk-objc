#ifndef MUXSDKEventHandling_h
#define MUXSDKEventHandling_h

#import <MuxCore/MUXSDKEventTyping.h>
#import <Foundation/Foundation.h>

@protocol MUXSDKEventHandling

- (void)handle:(id<MUXSDKEventTyping>)event;

@end

#endif
