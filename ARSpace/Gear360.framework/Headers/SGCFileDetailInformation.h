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
#import "SGCConstant.h"
#import "SGCLocation.h"

/**
 A data model that presents data about detail file information.
 @since SDK Version 1.0.0
 */
@interface SGCFileDetailInformation : SGCModel

/**
 The file ID
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nullable) NSString *ID;

/**
 The title of file
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nullable) NSString *title;

/**
 The file size (Bytes)
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) NSUInteger size;

/**
 The date of the file.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nullable) NSDate *date;

/**
 The type of the file.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) SGCFileType type;

/**
 The GPS location information of the file.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nullable) SGCLocation *location;

/**
 The resolution of the file.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nullable) NSString *resolution;

/**
 The main lens of the file.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) SGCMainLens mainLens;

/**
 The manufacturer information of the photo. It is nil if file is video.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nullable) NSString *manufacturer;

/**
 The model information of the photo. It is nil if file is video.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly, nullable) NSString *model;

/**
 The orientation of the photo. It is SGCPhotoOrientationNil if file is video.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) SGCPhotoOrientation orientation;

/**
 The white balance of the photo. It is SGCWhiteBalanceNil if file is video.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) SGCWhiteBalance whiteBalance;

/**
 The bit rate of the video. It is 0 if file is photo.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) Float32 bitRate;

/**
 The duration of the video. It is 0 if file is photo. (seconds)
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) NSUInteger duration;

/**
 The frame rate of video. It is 0 if file is photo.
 @since SDK Version 1.0.0
 */
@property (nonatomic, readonly) NSUInteger frameRate;

@end
