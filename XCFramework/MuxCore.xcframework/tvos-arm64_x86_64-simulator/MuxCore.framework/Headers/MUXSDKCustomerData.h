#ifndef MUXSDKCustomerData_h
#define MUXSDKCustomerData_h

#import "MUXSDKQueryData.h"
#import "MUXSDKCustomerPlayerData.h"
#import "MUXSDKCustomerVideoData.h"
#import "MUXSDKCustomerViewData.h"
#import <Foundation/Foundation.h>

@interface MUXSDKCustomerData : MUXSDKQueryData

@property (strong, nonatomic) MUXSDKCustomerPlayerData *customerPlayerData;
@property (strong, nonatomic) MUXSDKCustomerVideoData *customerVideoData;
@property (strong, nonatomic) MUXSDKCustomerViewData *customerViewData;

- (id) initWithCustomerPlayerData:(MUXSDKCustomerPlayerData *) playerData videoData:(MUXSDKCustomerVideoData *) videoData viewData:(MUXSDKCustomerViewData *) viewData;

@end

#endif
