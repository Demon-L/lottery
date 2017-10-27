//
//  Macro.h
//  SnoreBeurer
//
//  Created by 叶添添 on 16/6/22.
//  Copyright © 2016年 ytt. All rights reserved.
//
#ifndef Macro_h
#define Macro_h

/**
 *	@brief  DLog
 */
#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DLog(...)
#endif

/**
 *	@brief  数据库
 */
#define SqlitePath  [NSHomeDirectory() stringByAppendingPathComponent:@"/Documents/Bracelet.db"]

/**
 *	@brief  接口地址
 */

//滚动广告
#define urlOfDFU  @"http://test.yiqiquan.net/lottery-front/appclient/advert/lotteryAdvList"

/**
 *	@brief  UserDefault
 */

#define UserDefaultObjectSet(object,key) [[NSUserDefaults standardUserDefaults] setObject:object forKey:key]
#define UserDefaultObjectGet(key) [[NSUserDefaults standardUserDefaults] objectForKey:key]
#define UserDefaultBoolSet(bool,key) [[NSUserDefaults standardUserDefaults] setBool:bool forKey:key]
#define UserDefaultBoolGet(key) [[NSUserDefaults standardUserDefaults] boolForKey:key]
#define UserDefaultIntegerSet(integer,key) [[NSUserDefaults standardUserDefaults] setInteger:integer forKey:key]
#define UserDefaultIntegerGet(key) [[NSUserDefaults standardUserDefaults] integerForKey:key]
#define UserDefaultFloatSet(ft,key) [[NSUserDefaults standardUserDefaults] setFloat:ft forKey:key]
#define UserDefaultFloatGet(key) [[NSUserDefaults standardUserDefaults] floatForKey:key]

/**
 *	@brief  系统
 */
#define SCREENWIDTH [UIScreen mainScreen].bounds.size.width
#define SCREENHEIGHT [UIScreen mainScreen].bounds.size.height
#define VIEW_WIDTH self.view.bounds.size.width
#define VIEW_HEIGHT self.view.bounds.size.height

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

/**
 *	@brief  RGB
 */
// rgb颜色转换（16进制->10进制）
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define HexFromRGBhalfA(rgbValue,al) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:al]

#define CLEARCOLOR [UIColor clearColor]
#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
#define RGB(r,g,b) RGBA(r,g,b,1.0f)
#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]


#endif /* Macro_h */
