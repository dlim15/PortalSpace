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
#import "SGCFileInformations.h"
#import "SGCFileDetailInformation.h"
#import "SGCFileCopyDelegate.h"

/**
 The SGCFileManager class provides APIs to access the device storage.
 @since SDK Version 1.0.0
 */
@interface SGCFileManager : NSObject

/**
 The delegate object that manages copying file.

 @since SDK Version 1.0.0
 */
@property (nonatomic, weak, nullable) id<SGCFileCopyDelegate> fileCopyDelegate;

/**
 Gets file informations from the device storage.

 @param startIndex The index to begin browsing.
 @param requestCount The count to request files. Maximum count is 100.
 @param handler The completion handler to be executed when browsing ends. This completion handler takes
 the following parameters:\n
    - error - An error object that indicates why browsing was failed, or nil if browsing was successful.\n
    - fileInformations - The file list, or nil if browsing was failed.
 @since SDK Version 1.0.0
 */
- (void)getFileInformationsWithStartIndex:(NSUInteger)startIndex
                             requestCount:(NSUInteger)requestCount
                        completionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                             SGCFileInformations * _Nullable fileInformations))handler;

/**
 Gets file detail information.

 @param ID The id of file.
 @param handler The completion handler to be executed when getting ends. This completion handler takes
 the following parameters:\n
 - error - An error object that indicates why getting was failed, or nil if getting was successful.\n
 - fileDetailInformation - The file detail information, or nil if getting was failed.
 @since SDK Version 1.0.0
 */
- (void)getFileDetailInformationWithID:(NSString * _Nonnull)ID
                     completionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                    SGCFileDetailInformation * _Nullable fileDetailInformation))handler;

/**
 Deletes files from the device storage.

 @param IDs The file id list to be deleted. Maximum count is 100.
 @param handler The completion handler to be executed when deleting ends. This completion handler takes
 the following parameter:\n
    - error - An error object that indicates why deleting was failed, or nil if deleting was successful.
 @since SDK Version 1.0.0
 */
- (void)deleteFilesWithIDs:(NSArray <NSString *> * _Nonnull)IDs
         completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Deletes all files from the device storage.

 @param handler The completion handler to be executed when deleting ends. This completion handler takes
 the following parameter:\n
 - error - An error object that indicates why deleting was failed, or nil if deleting was successful.
 @since SDK Version 1.0.0
 */
- (void)deleteAllFilesWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Copy a file from the device to phone.

 @param ID The ID of file to copy.
 @param title The title of album that copy file.
 @param tiltCorrection The boolean value that indicates using tilt correction.
 @param handler The completion handler to be excuted after copying. This completion handler takes\n
 the following parameter:\n
    - error - An error object that indicates why copying was failed, or nil if copying was successful.
 @since SDK Version 1.0.0
 */
- (void)copyFileWithID:(NSString * _Nonnull)ID
            albumTitle:(NSString * _Nonnull)title
        tiltCorrection:(BOOL)tiltCorrection
     completionHandler:(void (^ _Nonnull)(NSError * _Nullable error))handler;

/**
 Gets a thumbnail image from file.

 @param ID The ID of file to get thumbnail image.
 @param handler The completion handler to be excuted after getting image. This completion handler takes\n
 the following parameter:\n
    - error - An error object that indicates why getting image was failed, or nil if getting image was successfil.
    - image - An UIImage object, or nil if getting image was failed.
 @since SDK Version 1.0.0
 */
- (void)getThumbnailWithID:(NSString * _Nonnull)ID
         completionHandler:(void (^ _Nonnull)(NSError * _Nullable error, UIImage * _Nullable image))handler;

/**
 Gets a screennail image from file.

 @param ID The ID of file to get screennail image.
 @param handler The completion handler to be excuted after getting image. This completion handler takes\n
 the following parameter:\n
 - error - An error object that indicates why getting image was failed, or nil if getting image was successfil.
 - image - An UIImage object, or nil if getting image was failed.
 @since SDK Version 1.0.0
 */
- (void)getScreennailWithID:(NSString * _Nonnull)ID
          completionHandler:(void (^ _Nonnull)(NSError * _Nullable error, UIImage * _Nullable image))handler;

/**
Gets the latest thumbnail image.

 @param handler The completion handler to be executed after getting thumbnail image. This completion handler takes\n
 the following parameters:\n
 - error - An error object that indicates why getting thumbnail image was failed, or nil if getting thumbnail image was successfil.
 @since SDK Version 1.0.0
*/
- (void)getLatestThumbnailWithCompletionHandler:(void (^ _Nonnull)(NSError * _Nullable error,
                                                                   UIImage * _Nullable image))handler;

@end
