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
#import "SGCSetting.h"
#import "SGCCamera.h"
#import "SGCFileManager.h"
#import "SGCVideoPlayer.h"
#import "SGCImageViewer.h"
#import "SGCStorageInformation.h"
#import "SGCConstant.h"
#import "SGCDeviceDelegate.h"
#import "SGCBatteryInformation.h"

/**
 The SGCDevice class provides APIs to control the device.
 @since SDK Version 1.0.0
 */
@interface SGCDevice : NSObject

/**
 The ID of the device.

 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nonnull) NSString *ID;

/**
 The name of the device.

 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nonnull) NSString *name;

/**
 The object that manages the device settings.

 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nonnull) SGCSetting *setting;

/**
 The object that manages the camera.

 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nonnull) SGCCamera *camera;

/**
 The object that accesses the device storage.

 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nonnull) SGCFileManager *fileManager;

/**
 The object that play to video file of device.

 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nonnull) SGCVideoPlayer *videoPlayer;

/**
 The object that view image file of device.

 @since SDK Version 1.0.0
 */

@property (nonatomic, readonly, nonnull) SGCImageViewer *imageViewer;

/**
 The delegate object that manages the events from the device.

 @since SDK Version 1.0.0
 */
@property (nonatomic, weak, nullable) id<SGCDeviceDelegate> delegate;

/**
 Resets the device.

 @param resetType The reset type.
 @param handler The completion handler to be executed when the reset is complete. This completion handler takes
 the following parameter:\n
    - error - An error object that indicates why the reset was failed, or nil if the reset was successful.
 @since SDK Version 1.0.0
 */
- (void)resetWithType:(SGCResetType)resetType
    completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets the supported list of reset type.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - resetTypes - The supported list of reset type, or nil if getting was failed.
 @since SDK Version 1.0.0
 */
- (void)getSupportedResetTypesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                NSArray <NSNumber *> * _Nullable resetTypes))handler;

/**
 Gets the storage information of the device.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameter:\n
    - error - An error object that indicates why getting was failed, or nil if getting was successful.
    - storageInformation - The storage information, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getStorageInformationWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                           SGCStorageInformation * _Nullable storageInformation))handler;

/**
 Formats the device storage.

 @param handler The completion handler to be executed when the format is complete. This completion handler takes
 the following parameter:\n
    - error - An error object that indicates why the format was failed, or nil if the format was successful.
 @since SDK Version 1.0.0
 */
- (void)formatStorageWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Get the battery information.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - batteryInformation - The battery information, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getBatteryInformationWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                          SGCBatteryInformation * _Nullable batteryInformation))handler;

/**
 Get the firmware version.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - firmwareVersion - The firmware version, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getFirmwareVersionWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                   NSString * _Nullable firmwareVersion))handler;

/**
 Get the model name.

 @param handler The completion handler to be executed when getting is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.
 - modelName - The model name, or nil if gettings was failed.
 @since SDK Version 1.0.0
 */
- (void)getModelNameWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                             NSString * _Nullable modelName))handler;
@end
