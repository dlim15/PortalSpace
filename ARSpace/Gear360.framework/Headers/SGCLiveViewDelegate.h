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
 The SGCLiveViewDelegate protocol defines delegate methods that you should implement regarding the live view.

 @since SDK Version 1.0.0
 */
@protocol SGCLiveViewDelegate <NSObject>

@required

/**
 Tells the delegate that live view is started.

 @since SDK Version 1.0.0
 */
- (void)didStartLiveView;

/**
 Tells the delegate that live view is stopped.

 @since SDK Version 1.0.0
 */
- (void)didStopLiveView;

/**
 Tells the delegate that the error is received.

 @since SDK Version 1.0.0
 */
- (void)didReceiveError:(NSError * _Nonnull)error;

@optional
/**
 Tells the delegate that the video frame is received.

 @param data The video frame data.
 @param timeStamp The time stamp.
 @since SDK Version 1.0.0
 */
- (void)didReceiveVideoFrame:(CVPixelBufferRef _Nonnull)data timeStamp:(double)timeStamp;

/**
 Tells the delegate that the audio frame is received.

 @param data The audio frame data.
 @param timeStamp The time stamp.
 @since SDK Version 1.0.0
 */
- (void)didReceiveAudioFrame:(NSData * _Nonnull)data timeStamp:(double)timeStamp;

/**
 Tells the delegate that the rotation data is received.

 @param rotation The rotation data(yaw, pitch, roll).
 @param timeStamp The time stamp.
 @since SDK Version 1.0.0
 */
- (void)didReceiveRotationData:(SGCRotation)rotation timeStamp:(double)timeStamp;

@end
