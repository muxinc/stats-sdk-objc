#ifndef MUXSDKCustomerData_h
#define MUXSDKCustomerData_h

#import "MUXSDKQueryData.h"
#import "MUXSDKCustomerPlayerData.h"
#import "MUXSDKCustomerVideoData.h"
#import "MUXSDKCustomerViewData.h"
#import "MUXSDKCustomData.h"
#import <Foundation/Foundation.h>

@interface MUXSDKCustomerData : MUXSDKQueryData

@property (strong, nonatomic) MUXSDKCustomerPlayerData *customerPlayerData;
@property (strong, nonatomic) MUXSDKCustomerVideoData *customerVideoData;
@property (strong, nonatomic) MUXSDKCustomerViewData *customerViewData;
@property (strong, nonatomic) MUXSDKCustomData *customData;

- (id) initWithCustomerPlayerData:(MUXSDKCustomerPlayerData *) playerData videoData:(MUXSDKCustomerVideoData *) videoData viewData:(MUXSDKCustomerViewData *) viewData;

- (id) initWithCustomerPlayerData:(MUXSDKCustomerPlayerData *) playerData videoData:(MUXSDKCustomerVideoData *) videoData viewData:(MUXSDKCustomerViewData *) viewData customData:(MUXSDKCustomData *) customData;

@end

#endif
