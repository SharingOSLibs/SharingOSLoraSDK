//
//  SharingOSLockConnector.h
//  SharingOSLockSDK
//
//  Created by 张真 on 2019/4/28.
//  Copyright © 2019 张真. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SharingOSLockConnectDelegate.h"

@interface SharingOSLockConnector : NSObject

/**
 delegate to get the callback
 */
@property id<SharingOSLockConnectDelegate> delegate;

/**
 unlock bike
 
 @param uniqueId the lock unique id can be the QRCode/PlateNumber
 @param duration connect duration must long than 20000(which means 20 seconds,if less will use the default 20s)
 @param tripId the partner's trip id
 */
- (void)wakeUpLoraLock:(NSString *)uniqueId duration:(int)duration tripId:(NSString *)tripId;
/**
 disconnect all connector with lock
 */
- (void)disconnectWithLock;

@end

