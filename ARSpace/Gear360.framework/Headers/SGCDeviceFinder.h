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
#import "SGCDeviceFinderDelegate.h"

/**
 The SGCDeviceFinder class provides APIs to search the connected device.
 @since SDK Version 1.0.0
 */
@interface SGCDeviceFinder : NSObject

/**
 The delegate object that manages the events of the device.

 @since SDK Version 1.0.0
 */
@property (nonatomic, weak, nullable) id <SGCDeviceFinderDelegate> delegate;

/**
 Searchs the connected device.

 @note When finding the connected device, user interface to accept or reject is provided on the device.
  - Press OK button to accept.
  - Press BACK button to reject.

 @since SDK Version 1.0.0
 */
- (void)search;

@end
