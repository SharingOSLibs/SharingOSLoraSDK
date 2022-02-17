//
//  SharingOSLockSDK.h
//  SharingOSLockSDK
//
//  Created by 张真 on 2019/4/29.
//  Copyright © 2019 张真. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SharingOSLockSDK : NSObject

/**
 *  @author LionelZhang
 *
 *  @brief Get the instance
 *
 *  @return instace
 */
+ (SharingOSLockSDK *)shareInstance;

/**
 init the SDK
 
 @param appKey application key
 @param partnerKey partner key
 */
- (void)initWithAppkey:(NSString *)appKey partnerKey:(NSString *)partnerKey;

@end

