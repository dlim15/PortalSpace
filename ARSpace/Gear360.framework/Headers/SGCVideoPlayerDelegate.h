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
#import "SGCRotation.h"

/**
 The SGCVideoPlayerDelegate protocol defines delegate methods that you should implement regarding the playing video.

 @since SDK Version 1.0.0
 */
@protocol SGCVideoPlayerDelegate <NSObject>

@required

/**
 Tells the delegate that playing video is started.

 @since SDK Version 1.0.0
 */
- (void)didStartPlaying;

/**
 Tells the delegate that playing video is stopped.

 @since SDK Version 1.0.0
 */
- (void)didStopPlaying;

/**
 Tells the delegate that the error is received.

 @since SDK Version 1.0.0
 */
- (void)didReceiveError:(NSError * _Nonnull)error;

@end
