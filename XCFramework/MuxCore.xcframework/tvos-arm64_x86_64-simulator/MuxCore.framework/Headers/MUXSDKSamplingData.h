#ifndef MUXSDKSamplingData_h
#define MUXSDKSamplingData_h

#import "MUXSDKQueryData.h"
#import <Foundation/Foundation.h>

@interface MUXSDKSamplingData : MUXSDKQueryData

@property (nullable) NSNumber *playerProgramTime;
@property (nullable) NSNumber *playerManifestNewestProgramTime;

@end

#endif
