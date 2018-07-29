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
 This block type is designed to allow you to print out Gear360 SDK logs
 in your customized logging method.

 @param message Gear360 SDK log message
 @since SDK Version 1.0.0
 */
typedef void(^SGCLoggingDelegate)(NSString * _Nonnull message);

/**
 This class exposes the Gear360 SDK logging options.
 @since SDK Version 1.0.0
 */
@interface SGCLog : NSObject

/**
 The delegate for printing out Gear360 SDK logs.

 @since SDK Version 1.0.0
 */
@property (class, nullable) SGCLoggingDelegate delegate;

@end
