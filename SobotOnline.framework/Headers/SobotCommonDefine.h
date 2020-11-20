//
//  SobotCommonDefine.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/5.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotUITools.h"

// UTF8 字符串
#define ZCUTF8Data(str) [str dataUsingEncoding:NSUTF8StringEncoding]


// 是否为iOS7或者iOS7以上的版本，如果设备版本<iOS7 返回NO 否则返回YES
#define iOS7  ((floor(NSFoundationVersionNumber) <= NSFoundationVersionNumber_iOS_6_1)? NO:YES)


// 是否为竖屏
#define ZC_IsPortrait  ([[UIApplication sharedApplication] statusBarOrientation] == UIDeviceOrientationPortrait || [[UIApplication sharedApplication] statusBarOrientation] == UIDeviceOrientationPortraitUpsideDown)


// 格式化转换(int转String)
#define ZCIntToString(x)                      [NSString stringWithFormat:@"%d",x]


// 获取NSUserDefaults对象
#define SobotUserDefaults                        [NSUserDefaults standardUserDefaults]


// 获取发送通知对象
#define ZCNotificatCenter                 [NSNotificationCenter defaultCenter]


// 设备屏幕尺寸的宽度
#define SysScreenWidth                      [[UIScreen mainScreen] bounds].size.width

// 设备屏幕尺寸的高度
#define SysScreenHeight                     [[UIScreen mainScreen] bounds].size.height


// 屏幕旋转后宽度的尺寸
#define ScreenWidth                         (ZC_IsPortrait ? MIN(SysScreenWidth,SysScreenHeight) : MAX(SysScreenWidth,SysScreenHeight))

// 屏幕旋转后高度的尺寸
#define ScreenHeight                        (ZC_IsPortrait ? MAX(SysScreenWidth,SysScreenHeight) : MIN(SysScreenWidth,SysScreenHeight))


// iPhoneX
#define ZC_iPhoneX  [SobotUITools getIsIphonX]//(((SysScreenWidth == 375.f && SysScreenHeight == 812.f ) ||(SysScreenHeight == 375.f && SysScreenWidth == 812.f ) || (SysScreenHeight == 414.f && SysScreenWidth == 896.f ) || (SysScreenWidth == 414.f && SysScreenHeight == 896.f ))? YES : NO)

// 导航栏的高度
#define isLandspace     ([UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationLandscapeRight || [UIApplication sharedApplication].statusBarOrientation == UIInterfaceOrientationLandscapeLeft)
#define NavLandspaceBarHeight               ([UIApplication sharedApplication].statusBarHidden?44:64.0)
#define NavBarHeight                        (isLandspace ? NavLandspaceBarHeight : (ZC_iPhoneX ? 88.f : (iOS7 ? 64.0 : 44.0)))


// 状态栏的高度
#define StatusBarHeight                     (ZC_iPhoneX ? 44.f : (iOS7 ? 0.0 : 20.0))

#define XBottomBarHeight                    (ZC_iPhoneX ? 34.f : 0.0)

#define isiPad (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

// View的宽度
#define SobotViewWidth(v)                        v.frame.size.width

// View的高度
#define SobotViewHeight(v)                       v.frame.size.height

// View的X轴坐标
#define SobotViewX(v)                            v.frame.origin.x

// View的Y轴坐标
#define SobotViewY(v)                            v.frame.origin.y


// 多语言支持
#define SobotLocalString(key) [SobotUITools localizedStringForKey:key]


// 颜色
#define UIColorFromModeColor(themeColorKey) [SobotUITools getSobotThemeModeColor:themeColorKey]
#define UIColorFromModeColorAlpha(themeColorKey,a) [SobotUITools getSobotThemeModeColor:themeColorKey alpha:a]

#define SOBOTNotification_NetworkChange     @"NetworkChanged"
#define SobotNotification_SocketNewMessage  @"SobotNoticeNewMessage"

// token失效
#define SobotNotification_TokenExprise   @"SobotNoticeTokenExprise"

// Color keys
typedef NSString *SobotTypeColor NS_STRING_ENUM;
 
static SobotTypeColor const SobotColorBanner  = @"SobotBannerColor";// 导航"#1B1B1C";
static SobotTypeColor const SobotColorTheme   = @"SobotThemeColor";// 主题色，固定"#0DAEAF";
static SobotTypeColor const SobotColorBgLine  = @"SobotBgLineColor";// 线条颜色"#2C2C2C";
static SobotTypeColor const SobotColorBgMain  = @"SobotBgMainColor";// 新增默认背景"#000000";
static SobotTypeColor const SobotColorBgSub   = @"SobotBgSubColor";// 普通页面浅色背景"#262628";
static SobotTypeColor const SobotColorBgSubToMain  = @"SobotBgSub2MainColor";// 搜索等次级背景"#353538";
static SobotTypeColor const SobotColorBgSub3  = @"SobotBgSub3Color";// 搜索等次级背景"#FFFFFF";
static SobotTypeColor const SobotColorBgSub2  = @"SobotBgSub2Color";// 搜索等次级背景"#F6F8FC";

static SobotTypeColor const SobotColorTextMain = @"SobotTextMainColor";//主文本颜色"#D1D1D6";
static SobotTypeColor const SobotColorTextSub  = @"SobotTextSubColor";//次级文本颜色"#888890";
static SobotTypeColor const SobotColorTextSub1 = @"SobotTextSub1Color";//次级1文本颜色"#74747c";
static SobotTypeColor const SobotColorTextSub2 = @"SobotTextSub2Color";//次级2文本颜色"#7B7B7B";

static SobotTypeColor const SobotColorTextLink = @"SobotTextLinkColor";//链接文本颜色"#0DAEAF";

static SobotTypeColor const SobotColorBlack = @"SobotBlackColor";//纯黑色"#000000";
static SobotTypeColor const SobotColorWhite = @"SobotWhiteColor";//纯白色"#FFFFFF";
static SobotTypeColor const SobotColorYellow = @"SobotYellowColor";//纯白色"#F8C46E";
static SobotTypeColor const SobotColorRed  = @"SobotRedColor";//纯白色"#F8C46E";


#define SobotFormateTime @"yyyy-MM-dd HH:mm:ss"

////////////////////////////////////////////////////////////
/**
 *  字体
 */
#define  SobotFont20       [UIFont fontWithName:@"Helvetica" size:20]
#define  SobotFontBold20   [UIFont fontWithName:@"Helvetica-Bold" size:20]

#define  SobotFont18       [UIFont fontWithName:@"Helvetica" size:18]
#define  SobotFontBold18   [UIFont fontWithName:@"Helvetica-Bold" size:18]

#define  SobotFont17       [UIFont fontWithName:@"Helvetica" size:17]
#define  SobotFontBold17   [UIFont fontWithName:@"Helvetica-Bold" size:17]
// 字体
#define SobotFontSTHeitiSC17(f) [UIFont fontWithName:@"STHeitiSC-Light" size:f]

#define  SobotFont16       [UIFont fontWithName:@"Helvetica" size:16]
#define  SobotFontBold16   [UIFont fontWithName:@"Helvetica-Bold" size:16]


#define  SobotFont15       [UIFont fontWithName:@"Helvetica" size:15]
#define  SobotFontBold15   [UIFont fontWithName:@"Helvetica-Bold" size:15]

#define  SobotFont14       [UIFont fontWithName:@"Helvetica" size:14]
#define  SobotFontBold14   [UIFont fontWithName:@"Helvetica-Bold" size:14]

#define  SobotFont13       [UIFont fontWithName:@"Helvetica" size:13]
#define  SobotFontBold13   [UIFont fontWithName:@"Helvetica-Bold" size:13]

#define  SobotFont12       [UIFont fontWithName:@"Helvetica" size:12]
#define  SobotFontBold12   [UIFont fontWithName:@"Helvetica-Bold" size:12]

#define  SobotFont11       [UIFont fontWithName:@"Helvetica" size:11]
#define  SobotFontBold11   [UIFont fontWithName:@"Helvetica-Bold" size:11]

#define  SobotFont10       [UIFont fontWithName:@"Helvetica" size:10]
#define  SobotFontBold10   [UIFont fontWithName:@"Helvetica-Bold" size:10]


#define  SobotFont8       [UIFont fontWithName:@"Helvetica" size:8]
#define  SobotFontBold8   [UIFont fontWithName:@"Helvetica-Bold" size:8]
