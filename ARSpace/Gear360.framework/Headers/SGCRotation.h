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
 A data model that presents data about rotation information of video frame.
 @since SDK Version 1.0.0
 */
struct SGCRotation {
    Float32 yaw;        ///< Rotation around the vertical axis.
    Float32 pitch;      ///< Rotation around the lateral axis.
    Float32 roll;       ///< Rotation around the longitudinal axis.
};

typedef struct SGCRotation SGCRotation;