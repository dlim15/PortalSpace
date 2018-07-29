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
#import "SGCConstant.h"
#import "SGCSettingDelegate.h"

/**
The SGCSetting class provides APIs to control settings of device.
 @since SDK Version 1.0.0
 */
@interface SGCSetting : NSObject

/**
 The delegate object that manages the events from the device.

 @since SDK Version 1.0.0
 */
@property (nonatomic, weak, nullable) id<SGCSettingDelegate> delegate;

/**
 Sets the beep volume.

 @param beepVolume The new beep volume to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setBeepVolume:(SGCBeepVolume)beepVolume
    completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the beep volume.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - beepVolume - The current beep volume, or SGCBeepVolumeNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getBeepVolumeWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                              SGCBeepVolume beepVolume))handler;

/**
 Gets the supported list of beep volume.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - beepVolumes - The supported list of beep volume, or nil if getting was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedBeepVolumesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                  NSArray <NSNumber *> * _Nullable beepVolumes))handler;

/**
 Sets the auto power off time.

 @param autoPowerOffTime The new auto power off time to set.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setAutoPowerOffTime:(SGCAutoPowerOffTime)autoPowerOffTime
          completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the auto power off time.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - autoPowerOffTime - The current auto power off time, or SGAutoPowerOffTimeNil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getAutoPowerOffTimeWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                    SGCAutoPowerOffTime autoPowerOffTime))handler;

/**
 Gets the supported list of auto power off time.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - autoPowerOffTimes - The supported list of auto power off time, or nil if getting was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedAutoPowerOffTimesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                            NSArray <NSNumber *> * _Nullable autoPowerOffTimes))handler;

/**
 Refreshes the auto power off time.
 If the device is not recording or previewing, then it is turned off automatically as auto power off settings.
 To avoid auto power off, application should call this API.

 @since SDK Version 1.0.0
 */
- (void)refreshAutoPowerOffTime;

/**
 Sets the led enabled.

 @param enabled A Boolean that indicates whether or not the led of the device is enabled.
 @param handler The completion handler to be executed when setting is complete. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why setting was failed, or nil if setting was successful.
 @since SDK Version 1.0.0
 */
- (void)setLEDEnabled:(BOOL)enabled
    completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the led enabled.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - enabled - The led enabled, or NO if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getLEDEnabledWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error, BOOL enabled))handler;

@end
