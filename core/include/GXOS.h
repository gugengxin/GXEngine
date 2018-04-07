﻿//
//  GXOS.h
//  GX
//
//  Created by Gengxin Gu on 16/4/19.
//  Copyright © 2016年 Gengxin Gu. All rights reserved.
//

#ifndef GXOS_h
#define GXOS_h

#if !defined(GX_OS_IOS) && !defined(GX_OS_APPLETV) && !defined(GX_OS_MACOSX) && !defined(GX_OS_ANDROID) && !defined(GX_OS_WINDOWS)

#ifdef __APPLE__
#include <TargetConditionals.h>
#endif

#if defined(__APPLE__) && TARGET_OS_IOS
#define GX_OS_IOS
#elif defined(__APPLE__) && TARGET_OS_TV
#define GX_OS_APPLETV
#elif defined(__APPLE__) && TARGET_OS_OSX
#define GX_OS_MACOSX
#elif defined(ANDROID) || defined(__ANDROID__)
#define GX_OS_ANDROID
#elif defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)
#define GX_OS_WINDOWS
#else
#error Unsupport OS
#endif

#endif


#if defined(GX_OS_IOS)

#define GX_OS_APPLE
#define GX_OS_IPHONE

#elif defined(GX_OS_APPLETV)

#define GX_OS_APPLE
#define GX_OS_IPHONE

#elif defined(GX_OS_MACOSX)

#define GX_OS_APPLE
#define GX_OS_DESKTOP

#elif defined(GX_OS_ANDROID)

#define GX_OS_GOOGLE

#elif defined(GX_OS_WINDOWS)

#define GX_OS_MICROSOFT
#define GX_OS_DESKTOP

#endif


#define GX_LITTLE_ENDIAN 1234
#define GX_BIG_ENDIAN 4321
#define GX_BYTE_ORDER GX_LITTLE_ENDIAN

#endif /* GXOS_h */
