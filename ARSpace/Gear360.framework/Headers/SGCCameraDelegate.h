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
 The SGCameraDelegate protocol defines delegate methods that you should implement when handling events from the camera.
 @since SDK Version 1.0.0
 */
@protocol SGCCameraDelegate <NSObject>
@optional

/**
 Tells the delegate that the shooting mode is updated.

 @param shootingMode The shooting mode to be selected.
 @since SDK Version 1.0.0
 */
- (void)didUpdateShootingMode:(SGCShootingMode)shootingMode;

/**
 Tells the delegate that the recording resolution is updated.

 @param recordingResolution The resolution to be updated.
 @param shootingMode The shooting mode.
 @param lensCount The lens count.
 @since SDK Version 1.0.0
 */
- (void)didUpdateRecordingResolution:(SGCRecordingResolution)recordingResolution
                        shootingMode:(SGCShootingMode)shootingMode
                           lensCount:(SGCLensCount)lensCount;

/**
 Tells the delegate that the recorded time is received.

 @param recordedTime The recorded time. (seconds)
 @since SDK Version 1.0.0
 */
- (void)didReceiveRecordedTime:(NSUInteger)recordedTime;

/**
 Tells the delegate that the time lapse recorded time is received.

 @param timeLapseRecordedTime The recorded time. (seconds)
 @since SDK Version 1.0.0
 */
- (void)didReceiveTimeLapseRecordedTime:(NSUInteger)timeLapseRecordedTime;

/**
 Tells the delegate that the time lapse interval is updated.

 @param timeLapseInterval The time lapse interval to be updated.
 @since SDK Version 1.0.0
 */
- (void)didUpdateTimeLapseInterval:(SGCTimeLapseInterval)timeLapseInterval;

/**
 Tells the delegate that the video looping recording time is updated.

 @param videoLoopingRecordingTime The video looping recording time to be updated.
 @since SDK Version 1.0.0
 */
- (void)didUpdateVideoLoopingRecordingTime:(SGCVideoLoopingRecordingTime)videoLoopingRecordingTime;

/**
 Tells the delegate that the lens mode is selected.

 @param lensMode The lens mode to be selected.
 @since SDK Version 1.0.0
 */
- (void)didSelectLensMode:(SGCLensMode)lensMode;

/**
 Tells the delegate that the timer is updated.

 @param timer The timer to be updated.
 @since SDK Version 1.0.0
 */
- (void)didUpdateTimer:(SGCTimer)timer;

/**
 Tells the delegate that the button event is received.

 @param buttonEvent The button event to be received.
 @since SDK Version 1.0.0
 */
- (void)didReceiveButtonEvent:(SGCButtonEvent)buttonEvent;


/**
 Tells the delegate that the timer count is updated.

 @param timerCount The timer count to be received.
 @since SDK Version 1.0.0
 */
- (void)didCountdownTimer:(NSUInteger)timerCount;

/**
 Tells the delegate that the SD card is full during recording.

 @since SDK Version 1.0.0
 */
- (void)didReceiveSDCardFull;

/**
 Tells the delegate that the recording is stopped due to slow SD card.

 @since SDK Version 1.0.0
 */
- (void)didReceiveSDCardSlow;

@end
