//
//  SharingOSLockConnectDelegate.h
//  SharingOSLockSDK
//
//  Created by 张真 on 2019/4/28.
//  Copyright © 2019 张真. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 lock connect state
 
 - SharingOSLockConnectStateDisconnected: phone already disconnect with lock
 - SharingOSLockConnectStateConnected: phone already connect with lock
 - SharingOSLockConnectStateNoBluetoothPermission: user device don't open the bluetooth permission
 - SharingOSLockConnectStateNotSupportBle: user device not support bluetooth
 - SharingOSLockConnectStateConnectTimeOut: connect lock have time out
 - SharingOSLockConnectStateLockInfoErrorBikeNotExist: lock info have error bike not exist
 */
typedef NS_ENUM(NSInteger, SharingOSLockConnectState) {
    SharingOSLockConnectStateDisconnected,
    SharingOSLockConnectStateConnected,
    SharingOSLockConnectStateNoBluetoothPermission,
    SharingOSLockConnectStateNotSupportBle,
    SharingOSLockConnectStateConnectTimeOut,
    SharingOSLockConnectStateLockInfoErrorBikeNotExist,
};

/**
 the protocol id you operate

 - SharingOSLockProtocolIdGetLockState: user try to get the lock state
 - SharingOSLockProtocolIdGetLockPower: user try to get the lock power
 - SharingOSLockProtocolIdUnlock: user try to unlock
 - SharingOSLockProtocolIdUnlockVia4GCommandSended: only means the unlock command is sended
 - SharingOSLockProtocolIdlockVia4GCommandSended: only means the command is sended
 */
typedef NS_ENUM(NSInteger, SharingOSLockProtocolId) {
    SharingOSLockProtocolIdGetLockState,
    SharingOSLockProtocolIdGetLockPower,
    SharingOSLockProtocolIdUnlock,
    SharingOSLockProtocolIdUnlockVia4GCommandSended,
    SharingOSLockProtocolIdlockVia4GCommandSended
};

/**
 the lock state

 - SharingOSLockStateLockIsOpen: lock is opened
 - SharingOSLockStateLockIsClose: lock is closed
 - SharingOSLockStateUnlockSucessed: unlock success
 - SharingOSLockStateUnlockFailed: unlock failed
 */
typedef NS_ENUM(NSInteger, SharingOSLockState) {
    SharingOSLockStateLockIsOpen,
    SharingOSLockStateLockIsClose,
    SharingOSLockStateUnlockSucessed,
    SharingOSLockStateUnlockFailed,
    SharingOSLockStateGetPower,
    SharingOSLockStateUnlockVia4GCommandCallback
};

/**
 This is the delegate about the did lock connected
 and did get the data back
 */
@protocol SharingOSLockConnectDelegate <NSObject>

@required
/**
 it will callback when lock connect state changed
 
 @param state state about the connect
 */
- (void)lockConnectorDidUpdateState:(SharingOSLockConnectState) state;

/**
 it will callback when lock response data back
 
 @param data the lock data
 @param protocolId which operate you do
 @param extraData extra data like battery detail
 */
- (void)lockConnectorDidGetData:(SharingOSLockState)data protocolId:(SharingOSLockProtocolId)protocolId extraData:(NSString*)extraData;

@end
