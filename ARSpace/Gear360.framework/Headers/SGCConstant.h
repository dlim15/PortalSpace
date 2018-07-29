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

/**
 Constants that specify the beep volume level.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCBeepVolume) {
    SGCBeepVolumeNil = -1,       ///< The nil value for error case.
    SGCBeepVolumeHigh = 0,       ///< The beep volume level is high.
    SGCBeepVolumeMedium,         ///< The beep volume level is medium.
    SGCBeepVolumeLow,            ///< The beep volume level is low.
    SGCBeepVolumeMute,           ///< No beep volume.
};

/**
 Constants that specify the auto power off time.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCAutoPowerOffTime) {
    SGCAutoPowerOffTimeNil = -1,     ///< The nil value for error case.
    SGCAutoPowerOffTime1Min,         ///< The auto power off time is 1 minute.
    SGCAutoPowerOffTime3Min,         ///< The auto power off time is 3 minutes.
    SGCAutoPowerOffTime5Min,         ///< The auto power off time is 5 minutes.
    SGCAutoPowerOffTime15Min,        ///< The auto power off time is 15 minutes.
};

/**
 Constants that specify the reset type.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCResetType) {
    SGCResetTypeAll = 0,        ///< Reset settings and connection.
    SGCResetTypeSettings,       ///< Reset settings only.
    SGCResetTypeConnection,     ///< Reset connection only.
};

/**
 Constants that specify the shooting mode.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCShootingMode) {
    SGCShootingModeNil = -1,     ///< The nil value for error case.
    SGCShootingModeVideo = 0,    ///< The shooting mode is video.
    SGCShootingModePhoto,        ///< The shooting mode is photo.
    SGCShootingModeTimeLapse,    ///< The shooting mode is time lapse.
    SGCShootingModeVideoLooping, ///< The shooting mode is video looping.
    SGCShootingModeLandscapeHDR, ///< The shooting mode is landscape HDR.
};

/**
 Constants that specify the photo resolution.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCPhotoResolution) {
    SGCPhotoResolutionNil = -1,          ///< The nil value for error case.
    SGCPhotoResolution2304x1296 = 0,     ///< The photo resolution is 2304 x 1296.
    SGCPhotoResolution5472x2736,         ///< The photo resolution is 5472 x 2736.
};

/**
 Constants that specify the recording resolution and the fps.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCRecordingResolution) {
    SGCRecordingResolutionNil = -1,              ///< The nil value for error case.
    SGCRecordingResolution1280x720_10FPS = 0,    ///< The recording resolution is 1280x720 and fps is 10.
    SGCRecordingResolution1280x720_30FPS,        ///< The recording resolution is 1280x720 and fps is 30.
    SGCRecordingResolution1440x720_120FPS,       ///< The recording resolution is 1440x720 and fps is 120.
    SGCRecordingResolution1920x960_10FPS,        ///< The recording resolution is 1920x960 and fps is 10.
    SGCRecordingResolution1920x960_30FPS,        ///< The recording resolution is 1920x960 and fps is 30.
    SGCRecordingResolution1920x1080_10FPS,       ///< The recording resolution is 1920x1080 and fps is 10.
    SGCRecordingResolution1920x1080_30FPS,       ///< The recording resolution is 1920x1080 and fps is 30.
    SGCRecordingResolution1920x1080_60FPS,       ///< The recording resolution is 1920x1080 and fps is 60.
    SGCRecordingResolution2560x1280_10FPS,       ///< The recording resolution is 2560x1280 and fps is 10.
    SGCRecordingResolution2560x1280_30FPS,       ///< The recording resolution is 2560x1280 and fps is 30.
    SGCRecordingResolution2560x1280_60FPS,       ///< The recording resolution is 2560x1280 and fps is 60.
    SGCRecordingResolution2880x1440_30FPS,       ///< The recording resolution is 2880x1440 and fps is 30.
    SGCRecordingResolution4096x2048_10FPS,       ///< The recording resolution is 4096x2048 and fps is 10.
    SGCRecordingResolution4096x2048_24FPS,       ///< The recording resolution is 4096x2048 and fps is 24.
};

/**
 Constants that specify the iso sensitivity.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCISOSensitivity) {
    SGCISOSensitivityNil = -1,   ///< The nil value for error case.
    SGCISOSensitivity400 = 0,    ///< The iso sensitivity is 400.
    SGCISOSensitivity800,        ///< The iso sensitivity is 800.
    SGCISOSensitivity1600,       ///< The iso sensitivity is 1600.
};

/**
 Constants that specify the white balance.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCWhiteBalance) {
    SGCWhiteBalanceNil = -1,         ///< The nil value for error case.
    SGCWhiteBalanceAuto = 0,         ///< The white balance is auto.
    SGCWhiteBalanceDaylight,         ///< The white balance is day light.
    SGCWhiteBalanceCloudy,           ///< The white balance is cloudy.
    SGCWhiteBalanceFluorescent,      ///< The white balance is fluorescent.
    SGCWhiteBalanceIncandescent,     ///< The white balance is incandescent.
};

/**
 Constants that specify the main lens for stitching.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCMainLens) {
    SGCMainLensNil = -1,     ///< The nil value for error case.
    SGCMainLensFront = 0,    ///< The main lens is front.
    SGCMainLensRear,         ///< The main lens is rear.
};

/**
 Constants that specify the the lens mode.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCLensMode) {
    SGCLensModeNil = -1,     ///< The nil value for error case.
    SGCLensModeDual = 0,     ///< The dual lens is used for taking photo and video recording.
    SGCLensModeFront,        ///< The front lens is only used for taking photo and video recording.
    SGCLensModeRear,         ///< The rear lens is only used for taking photo and video recording.
};

/**
 Constants that specify the timer interval for taking photo and video recording.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCTimer) {
    SGCTimerNil = -1,    ///< The nil value for error case.
    SGCTimerNever = 0,   ///< No timer interval for taking photo and video recording.
    SGCTimer2Sec,        ///< The timer interval is 2 seconds.
    SGCTimer5Sec,        ///< The timer interval is 5 seconds.
    SGCTimer10Sec,       ///< The timer interval is 10 secons.
};

/**
 Constants that specify the recording time of video looping mode.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCVideoLoopingRecordingTime) {
    SGCVideoLoopingRecordingTimeNil = -1,    ///< The nil value for error case.
    SGCVideoLoopingRecordingTime5Min = 0,    ///< The recording time of video looping mode is 5 minutes.
    SGCVideoLoopingRecordingTime30Min,       ///< The recording time of video looping mode is 30 minutes.
    SGCVideoLoopingRecordingTime60Min,       ///< The recording time of video looping mode is 1 hour.
    SGCVideoLoopingRecordingTimeMax,         ///< The video is recored up to space available.
};

/**
 Constants that specify the interval of timer lapse mode.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCTimeLapseInterval) {
    SGCTimeLapseIntervalNil = -1,        ///< The nil value for error case.
    SGCTimeLapseIntervalHalfSec = 0,     ///< The time lapse of timer lapse mode is half second.
    SGCTimeLapseInterval1Sec,            ///< The time lapse of timer lapse mode is a second.
    SGCTimeLapseInterval2Sec,            ///< The time lapse of timer lapse mode is 2 seconds.
    SGCTimeLapseInterval5Sec,            ///< The time lapse of timer lapse mode is 5 seconds.
    SGCTimeLapseInterval10Sec,           ///< The time lapse of timer lapse mode is 10 seconds.
    SGCTimeLapseInterval30Sec,           ///< The time lapse of timer lapse mode is 30 seconds.
    SGCTimeLapseInterval1Min,            ///< The time lapse of timer lapse mode is 1 minute.
};

/**
 Constants that specify the sharpness.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCSharpness) {
    SGCSharpnessNil = -1,        ///< The nil value for error case.
    SGCSharpnessNegative2 = 0,   ///< The sharpness is -2.
    SGCSharpnessNegative1,       ///< The sharpness is -1.
    SGCSharpnessZero,            ///< No sharpness.
    SGCSharpnessPositive1,       ///< The sharpness is +1.
    SGCSharpnessPositive2,       ///< The sharpness is +2.
};

/**
 Constants that specify the video codec type.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCVideoCodecType) {
    SGCVideoCodecTypeHEVC,   ///< The video codec is HEVC.
    SGCVideoCodecTypeMJPEG   ///< The video codec is MJPEG.
};

/**
 Constants that specify the battery state.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCBatteryState) {
    SGCBatteryStateUnplugged = 0,    ///< The device is unplugged.
    SGCBatteryStateCharging,         ///< The device is plugged and battery is charging.
    SGCBatteryStateNotCharging,      ///< The device is plugged but battery is not charging.
    SGCBatteryStateTemperatureError, ///< The device is plugged but temperature is not proper to charge.
};

/**
 Constants that specify the file type.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCFileType) {
    SGCFileTypeUnknown = -1,     ///< The unknown file type.
    SGCFileTypeVideo = 0,        ///< The video file type.
    SGCFileTypeImage,            ///< The image file type.
};

/**
 Constants that specify the lens count.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCLensCount) {
    SGCLensCountSingle = 0,      ///< The single lens.
    SGCLensCountDual,            ///< The dual lens.
};

/**
 Constants that specify the orientation of the photo.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCPhotoOrientation) {
    SGCPhotoOrientationNil = -1,    ///< The nil value for error case.
    SGCPhotoOrientation0 = 0,       ///< The photo was not rotated.
    SGCPhotoOrientation90,          ///< The photo was rotated clockwise by 90 degrees.
    SGCPhotoOrientation180,         ///< The photo was rotated clockwise by 180 degrees.
    SGCPhotoOrientation270,         ///< The photo was rotated clockwise by 270 degrees.
};

/**
 Constants that specify the button event.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCButtonEvent) {
    SGCButtonEventShutter,      ///< The shutter button is pressed.
};

/**
 Constants that specify the view mode.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCViewMode) {
    SGCViewModePanoramic = 0,   ///< The panoramic view mode.
    SGCViewMode360 = 1,         ///< The 360 degrees view mode.
    SGCViewModeDual = 3,        ///< The front and rear dual view mode.
    SGCViewModeStretch = 6,     ///< The stretch view mode.
    SGCViewModeRound = 7,       ///< The round view mode.
};
