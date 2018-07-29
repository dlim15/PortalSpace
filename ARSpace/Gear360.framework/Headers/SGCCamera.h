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

#import <UIKit/UIKit.h>
#import "SGCConstant.h"
#import "SGCCameraDelegate.h"
#import "SGCLiveViewDelegate.h"
#import "SGCExposureValueRange.h"

/**
 The SGCCamera class provides APIs to control camera of device.
 @since SDK Version 1.0.0
 */
@interface SGCCamera : NSObject

/**
 The delegate object that manages the events from the camera.

 @since SDK Version 1.0.0
 */
@property (nonatomic, weak, nullable) id<SGCCameraDelegate> delegate;

/**
 The delegate object that manages the live view service events.

 @since SDK Version 1.0.0
 */
@property (nonatomic, weak, nullable) id<SGCLiveViewDelegate> liveViewDelegate;

/**
 Sets the exposure value.

 @param exposureValue The exposure value to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setExposureValue:(Float32)exposureValue
       completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the exposure value.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - exposureValue - The current exposure value, or 0 if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getExposureValueWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                 Float32 exposureValue))handler;

/**
 Gets the minimum, maximum and step of exposure values.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - exposureValueRange - The exposure value range, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedExposureValueRangeWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                          SGCExposureValueRange * _Nullable exposureValueRange))handler;

/**
 Sets the ISO sensitivity.

 @param ISOSensitivity The ISO sensitivity value to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setISOSensitivity:(SGCISOSensitivity)ISOSensitivity
        completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the ISO sensitivity.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - ISOSensitivity - The current isoSensitivity value, or SGCISOSensitivityNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getISOSensitivityWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                  SGCISOSensitivity ISOSensitivity))handler;

/**
 Gets the supported list of ISO sensitivity.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - ISOSensitivities - The supported isoSensitivity values, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedISOSensitivitiesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                             NSArray <NSNumber *> * _Nullable ISOSensitivities))handler;

/**
 Sets the white balance.

 @param whiteBalance The white balance to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setWhiteBalance:(SGCWhiteBalance)whiteBalance
      completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the white balance.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - whiteBalance - The current white balance, or SGCWhiteBalanceNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getWhiteBalanceWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                SGCWhiteBalance whiteBalance))handler;

/**
 Gets the supported list of white balance.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - whiteBalances - The supported white balances values, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedWhiteBalancesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                NSArray <NSNumber *> * _Nullable whiteBalances))handler;

/**
 Sets the shooting mode. It is not possible to change shooting mode during recording.

 @param shootingMode The shooting mode to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setShootingMode:(SGCShootingMode)shootingMode
      completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the shooting mode.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - shootingMode - The current shooting mode, or SGCShootingModeNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getShootingModeWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                SGCShootingMode shootingMode))handler;

/**
 Gets the supported list of shooting mode.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - shootingModes - The supported shooting modes, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedShootingModesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                NSArray <NSNumber *> * _Nullable shootingModes))handler;

/**
 Sets the HDR enabled for photo mode. Landscape HDR mode is always enabled.

 @param enabled A Boolean that indicates whether or not the HDR is enabled.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setPhotoHDREnabled:(BOOL)enabled
         completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Sets the HDR enabled for video and video looping mode. Time lapse mode is always disabled.

 @param enabled A Boolean that indicates whether or not the HDR is enabled.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setRecordingHDREnabled:(BOOL)enabled
             completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the HDR enabled for photo mode.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - enabled - HDR enabled, or NO if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getPhotoHDREnabledWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                   BOOL enabled))handler;

/**
 Gets the HDR enabled for video and video looping mode.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - enabled - HDR enabled, or NO if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getRecordingHDREnabledWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                       BOOL enabled))handler;

/**
 Sets the wind cut enabled.

 @param enabled A Boolean that indicates whether or not the wind cut is enabled.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setWindCutEnabled:(BOOL)enabled
        completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the wind cut enabled.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - enabled - the wind cut enabled, or NO if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getWindCutEnabledWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error, BOOL enabled))handler;

/**
 Sets the sharpness

 @param sharpness the sharpness to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setSharpness:(SGCSharpness)sharpness
   completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the sharpness.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - sharpness - The current sharpness, or SGCSharpnessNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSharpnessWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error, SGCSharpness sharpness))handler;

/**
 Gets the supported sharpness values.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - sharpnesses - The supported sharpness values, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedSharpnessesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                  NSArray <NSNumber *> * _Nullable sharpnesses))handler;

/**
 Sets the timelapse interval.

 @param interval the timelapse interval to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setTimeLapseInterval:(SGCTimeLapseInterval)interval
           completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the timelapse interval.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - interval - The current timelapse interval, or SGCTimeLapseIntervalNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getTimeLapseIntervalWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                     SGCTimeLapseInterval interval))handler;

/**
 Gets the supported timelapse intervals.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - intervals - The supported timelapse intervals, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedTimeLapseIntervalsWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                    NSArray <NSNumber *> * _Nullable intervals))handler;

/**
 Sets the video looping recording time.

 @param videoLoopingRecordingTime The video looping recording time to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setVideoLoopingRecordingTime:(SGCVideoLoopingRecordingTime)videoLoopingRecordingTime
                   completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the video looping recording time.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - videoLoopingRecordingTime - The current video looping recording time, or SGCVideoLoopingRecordingTimeNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getVideoLoopingRecordingTimeWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                        SGCVideoLoopingRecordingTime videoLoopingRecordingTime))handler;

/**
 Gets the supported video looping recording times.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - videoLoopingRecordingTimes - The supported video looping recording times, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedVideoLoopingRecordingTimesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                NSArray <NSNumber *> * _Nullable videoLoopingRecordingTimes))handler;

/**
 Sets the lens mode.

 @param lensMode The lens mode to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setLensMode:(SGCLensMode)lensMode
  completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the lens mode.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - lensMode - The current lens mode, or SGCLensModeNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getLensModeWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                            SGCLensMode lensMode))handler;

/**
 Gets the supported lens modes.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - lensModes - The supported lens modes, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedLensModesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                    NSArray <NSNumber *> * _Nullable lensModes))handler;

/**
 Sets the main lens.

 @param mainLens The lens to set as the main lens.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setMainLens:(SGCMainLens)mainLens
  completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the main lens.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - mainLens - The current main lens, or SGCMainLensNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getMainLensWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error, SGCMainLens mainLens))handler;

/**
 Gets the supported lenses for the main lens

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - mainLenses - The supported lenses for the main lens, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedMainLensesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                NSArray <NSNumber *> * _Nullable mainLenses))handler;

/**
 Sets the timer setting value.

 @param timer The timer setting value to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setTimer:(SGCTimer)timer completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the timer setting value.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - timer - The timer setting value, or SGCTimerNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getTimerWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error, SGCTimer timer))handler;

/**
 Gets the supported timer setting values.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - timers - The supported timer setting values, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedTimersWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                   NSArray <NSNumber *> * _Nullable timers))handler;

/**
 Starts recording.

 @param handler The completion handler to be executed when starting recording is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why starting recording was failed, or nil if starting recording was successful.
 - availableRecordingTime - The available recording time. (seconds)
 @since SDK Version 1.0.0
 */
- (void)startRecordingWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                               NSUInteger availableRecordingTime))handler;

/**
 Cancels starting recording. It operates when the timer is running.

 @param handler The completion handler to be executed when canceling is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why canceling was failed, or nil if canceling was successful.
 */
- (void)cancelStartingRecordingWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Starts recording with location information.

 @param latitude The latitude in degrees.
 @param longitude The longitude in degrees.
 @param handler The completion handler to be executed when starting recording is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why starting recording was failed, or nil if starting recording was successful.
 - availableRecordingTime - The available recording time. (seconds)
 @since SDK Version 1.0.0
 */
- (void)startRecordingWithLatitude:(double)latitude
                         longitude:(double)longitude
                 completionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                      NSUInteger availableRecordingTime))handler;

/**
 Stops recording.

 @param handler The completion handler to be executed when stopping recording is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why stopping recording was failed, or nil if stopping recording was successful.
 - availableRecordingTime - The available recording time. (seconds)
 @since SDK Version 1.0.0
 */
- (void)stopRecordingWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                              NSUInteger availableRecordingTime))handler;

/**
 Pauses recording.

 @param handler The completion handler to be executed when pausing recording is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why pausing recording was failed, or nil if pausing recording was successful.
 - recordedTime - Recorded time. (seconds)
 @since SDK Version 1.0.0
 */
- (void)pauseRecordingWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                    NSInteger recordedTime))handler;

/**
 Resumes recording.

 @param handler The completion handler to be executed when resuming recording is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why resuming recording was failed, or nil if resuming recording was successful.
 @since SDK Version 1.0.0
 */
- (void)resumeRecordingWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Takes photo.

 @param handler The completion handler to be executed when taking photo is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why taking photo was failed, or nil if taking photo was successful.
 - availablePhotoCount - The available photo count.
 @since SDK Version 1.0.0
 */
- (void)takePhotoWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                          NSUInteger availablePhotoCount))handler;

/**
 Takes photo with location information.

 @param latitude The latitude in degrees.
 @param longitude The longitude in degrees.
 @param handler The completion handler to be executed when taking photo is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why taking photo was failed, or nil if taking photo was successful.
 - availablePhotoCount - The available photo count.
 @since SDK Version 1.0.0
 */
- (void)takePhotoWithLatitude:(double)latitude
                    longitude:(double)longitude
            completionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                 NSUInteger availablePhotoCount))handler;

/**
 Cancels taking photo. It operates when the timer is running.

 @param handler The completion handler to be executed when canceling is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why canceling was failed, or nil if canceling was successful.
 @since SDK Version 1.0.0
 */
- (void)cancelTakingPhotoWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Sets the photo resolution.

 @param resolution The photo resolution to set.
 @param shootingMode The shooting mode.
 @param lensCount The lens count.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setPhotoResolution:(SGCPhotoResolution)resolution
              shootingMode:(SGCShootingMode)shootingMode
                 lensCount:(SGCLensCount)lensCount
         completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the photo resolution.

 @param shootingMode The shooting mode.
 @param lensCount The lens count.
 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - resolution - The current photo resolution, or SGCPhotoResolutionNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getPhotoResolutionWithShootingMode:(SGCShootingMode)shootingMode
                                 lensCount:(SGCLensCount)lensCount
                         completionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                              SGCPhotoResolution resolution))handler;

/**
 Gets the supported photo resolution

 @param shootingMode The shooting mode.
 @param lensCount The lens count.
 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - resolutions - The supported single lens video resolution, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedPhotoResolutionsWithShootingMode:(SGCShootingMode)shootingMode
                                           lensCount:(SGCLensCount)lensCount
                                   completionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                  NSArray <NSNumber *> * _Nullable resolutions))handler;

/**
 Sets the recording resolution.

 @param resolution The recording resolution to set.
 @param shootingMode The shooting mode.
 @param lensCount The lens count.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setRecordingResolution:(SGCRecordingResolution)resolution
                  shootingMode:(SGCShootingMode)shootingMode
                     lensCount:(SGCLensCount)lensCount
             completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the recording resolution.

 @param shootingMode The shooting mode.
 @param lensCount The lens count.
 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - resolution - The current single lens video resolution, or SGCRecordingResolutionNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getRecordingResolutionWithShootingMode:(SGCShootingMode)shootingMode
                                     lensCount:(SGCLensCount)lensCount
                             completionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                  SGCRecordingResolution resolution))handler;

/**
 Gets the supported recording resolution

 @param shootingMode The shooting mode.
 @param lensCount The lens count.
 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - resolutions - The supported single lens video resolution, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedRecordingResolutionsWithShootingMode:(SGCShootingMode)shootingMode
                                               lensCount:(SGCLensCount)lensCount
                                       completionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                  NSArray <NSNumber *> * _Nullable resolutions))handler;

/**
 Starts the preview.
 The video frame can be received with didReceiveVideoFrame:timeStamp: of SGCLiveViewDelegate

 @since SDK Version 1.0.0
 */
- (void)startPreview;

/**
 Starts the preview with view.
 It will be rendered on the view.

 @param view The view to be rendered.
 @since SDK Version 1.0.0
 */
- (void)startPreviewWithView:(UIView *_Nonnull)view;

/**
 Set the view mode to stitch preview.
 It will work when the view that be rendered is set.

 @param viewMode The view mode to stitch preview.
 @since SDK Version 1.0.0
 */
- (void)setPreviewMode:(SGCViewMode)viewMode;

/**
 Get the view mode to stitch preview.
 It will work when the view that be rendered is set.
 Default view mode is SGCViewModePanoramic.

 @return The current view mode to stitch preview.
 @since SDK Version 1.0.0
 */
- (SGCViewMode)getPreviewMode;

/**
 Stops the preview.

 @since SDK Version 1.0.0
 */
- (void)stopPreview;

/**
 Starts live streaming from the camera.
 The video frame can be received with didReceiveVideoFrame:timeStamp: of SGCLiveViewDelegate.
 The audio frame can be received with didReceiveAudioFrame:timeStamp: of SGCLiveViewDelegate.
 The rotation data can be received with didReceiveRotationData:timeStamp: of SGCLiveViewDelegate.

 @since SDK Version 1.0.0
 */
- (void)startStreaming;

/**
 Stops streaming

 @since SDK Version 1.0.0
 */
- (void)stopStreaming;

@end
