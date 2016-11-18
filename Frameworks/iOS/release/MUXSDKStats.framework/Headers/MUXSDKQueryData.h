#ifndef MUXSDKQueryData_h
#define MUXSDKQueryData_h

#import <Foundation/Foundation.h>

@interface MUXSDKQueryData : NSObject {
    @private
    NSMutableDictionary *_query;
}

- (void)update:(nonnull NSDictionary *)query;
- (nullable id)get:(nonnull NSString *)key;
- (nonnull NSDictionary *)toQuery;

@end

#endif
