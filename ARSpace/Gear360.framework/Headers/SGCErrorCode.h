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
 Constants that specify the error code of sdk.
 @since SDK Version 1.0.0
 */
typedef NS_ENUM(NSInteger, SGCErrorCode) {
    SGCErrorDeviceInternalError = 1,        ///<Device internal error.
    SGCErrorNetworkError,                   ///<Network error.
    SGCErrorTimeOut,                        ///<Time out error.
    SGCErrorInvalidRequest,                 ///<Invalid request error.
    SGCErrorInvalidResponse,                ///<Invalid response error.
    SGCErrorDuplicateRequest,               ///<Duplicate request error.
    SGCErrorDeviceOverheating,              ///<Device overheating error.
    SGCErrorDeviceLowBattery,               ///<Device low battery error.
    SGCErrorStorageError,                   ///<Storage error.
    SGCErrorStorageLock,                    ///<Storage lock error.
    SGCErrorStorageBusy,                    ///<Storage busy error.
    SGCErrorStorageDetached,                ///<Storage detached error.
    SGCErrorStorageFull,                    ///<Storage full error.
    SGCErrorStorageNumberingOverflow,       ///<Storage numbering overflow error.
    SGCErrorInvalidState,                   ///<The State is not valid.
    SGCErrorFileCorrupted,                  ///<File is corrupted.
    SGCErrorFileNotFound,                   ///<No such file.
    SGCErrorExternalCablePlugged,           ///<External cable is plugged.
    SGCErrorFileCopyError,                  ///<File copy error.
    SGCErrorActionFailed,                   ///<Action failed.

    SGCErrorUnknown = NSIntegerMax          ///<Unknown error.
};
