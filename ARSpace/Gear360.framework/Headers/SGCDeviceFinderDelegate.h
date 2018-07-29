/*
 * Copyright (c) 2017 Samsung Electronics. All Rights Reserved
 *
 * PROPRIETARY/CONFIDENTIAL
 *
 * This software is the confidential and proprietary information of
 * SAMSUNG ELECTRONICS ("Confidential Information").
 * You shall not disclose such Confidential Information and shall
 * use it only in accordance with the terms of the license agreement
 * you entered into with SAMSUNG ELECTRONICS. SAMSUNG make no
 * representations or warranties about the suitability
 * of the software, either express or implied, including but not
 * limited to the implied warranties of merchantability, fitness for a
 * particular purpose, or non-infringement. SAMSUNG shall not be liable
 * for any damages suffered by licensee as a result of using, modifying
 * or distributing this software or its derivatives.
 */

#import <Foundation/Foundation.h>
#import "SGCDevice.h"

/**
 The SGCDeviceFinderDelegate protocol defines delegate methods that you should implement regarding the device finder.
 @since SDK Version 1.0.0
 */
@protocol SGCDeviceFinderDelegate <NSObject>

/**
 Tells the delegate that the connected device is found.

 @param device The found device.
 @since SDK Version 1.0.0
 */
- (void)didFindDevice:(SGCDevice * _Nonnull)device;

/**
 Tells the delegate that the device is removed.

 @param deviceID The removed device ID.
 @since SDK Version 1.0.0
 */
- (void)didRemoveDevice:(NSString * _Nonnull)deviceID;

/**
 Tells the delegate that the connection is denied.

 @since SDK Version 1.0.0
 */
- (void)didDenyConnection;

@end
