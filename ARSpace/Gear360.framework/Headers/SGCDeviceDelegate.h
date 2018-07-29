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

/**
 The SGCDeviceDelegate protocol defines delegate methods that you should implement when handling events from the device.
 @since SDK Version 1.0.0
 */
@protocol SGCDeviceDelegate <NSObject>

@optional

/**
 Tells the delegate that the overheating warning is received.

 @since SDK Version 1.0.0
 */
- (void)didReceiveOverheatingWarning;

/**
 Tells the delegate that the overheating power off event is received.

 @since SDK Version 1.0.0
 */
- (void)didReceiveOverheatingPowerOff;

/**
 Tells the delegate that the lens error is received.

 @since SDK Version 1.0.0
 */
- (void)didReceiveLensError;

/**
 Tells the delegate that the battery level is updated.

 @param batteryLevel The battery level to be updated.
 @since SDK Version 1.0.0
 */
- (void)didUpdateBatteryLevel:(NSUInteger)batteryLevel;

/**
 Tells the delegate that the battery state is updated.

 @param batteryState The battery state to be updated.
 @since SDK Version 1.0.0
 */
- (void)didUpdateBatteryState:(SGCBatteryState)batteryState;

@end
