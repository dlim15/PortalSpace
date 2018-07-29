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

#import "SGCModel.h"

/**
 A data model that presents data about location.
 @since SDK Version 1.0.0
 */
@interface SGCLocation : SGCModel

/**
 The latitude in degrees.

 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) double latitude;

/**
 The longitude in degrees.

 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) double longitude;

@end
