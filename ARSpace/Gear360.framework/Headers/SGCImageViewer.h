/*
 * Copyright (c) 2017년 Samsung Electronics. All Rights Reserved.
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

@interface SGCImageViewer : NSObject

/**
 Shows a image file.

 @param ID The ID of file to show.
 @param view The view to be rendered.
 @param handler The completion handler to be executed after show image. This completion handler takes\n
 the following parameters:\n
 - error - An error object that indicates why to show image was failed, or nil if to show image was successfil.
 @since SDK Version 1.0.0
 */
- (void)showWithFileID:(NSString * _Nonnull)ID
                  view:(UIView * _Nonnull)view
     completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;


/**
 Set the view mode to stitch when show image.

 @param viewMode The view mode to stitch when show image.
 @since SDK Version 1.0.0
 */
- (void)setViewMode:(SGCViewMode)viewMode;

/**
 Get the view mode to stitch when preview image.
 Default view mode is SGCViewModePanoramic.

 @return The current view mode to stitch when show image.
 @since SDK Version 1.0.0
 */
- (SGCViewMode)getViewMode;


@end
