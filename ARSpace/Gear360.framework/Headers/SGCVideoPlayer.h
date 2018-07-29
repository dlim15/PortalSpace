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
#import "SGCVideoPlayerDelegate.h"

/**
 The SGCVideoPlayer class provides APIs to play the video file.
 @since SDK Version 1.0.0
 */
@interface SGCVideoPlayer : NSObject

/**
 The delegate object that manages the video player events.

 @since SDK Version 1.0.0
 */
@property (nonatomic, weak, nullable) id<SGCVideoPlayerDelegate> videoPlayerDelegate;

/**
 Plays video file which is saved on device storage.

 @param ID The ID of file to play.
 @param view The view to be rendered.
 @since SDK Version 1.0.0
 */
- (void)playWithFileID:(NSString * _Nonnull)ID
                  view:(UIView * _Nonnull)view;

/**
 Stops video playing.

 @since SDK Version 1.0.0
 */
- (void)stop;

/**
 Pauses video playing.

 @param handler The completion handler to be executed when pausing video playing is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why pausing was failed, or nil if getting was successful.
 @since SDK Version 1.0.0
 */
- (void)pauseWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Resumes video playing.

 @param handler The completion handler to be executed when resuming video playing is complete. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why resuming was failed, or nil if getting was successful.
 @since SDK Version 1.0.0
 */
- (void)resumeWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Set the view mode to stitch when play video.

 @param viewMode The view mode to stitch when play video.
 @since SDK Version 1.0.0
 */
- (void)setViewMode:(SGCViewMode)viewMode;

/**
 Get the view mode to stitch when play video.
 Default view mode is SGCViewModePanoramic.

 @return The current view mode to stitch when play video.
 @since SDK Version 1.0.0
 */
- (SGCViewMode)getViewMode;

@end
