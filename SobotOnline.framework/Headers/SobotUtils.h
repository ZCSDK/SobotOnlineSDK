//
//  SobotUtils.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/6.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SobotUtils : NSObject

/**
 *  空对象转行成@""
 *
 *  @param object 传入的不定对象
 *
 *  @return 字符串
 */
NSString *sAppConvertToString(id object);
NSString *sAppIntToString(int value);

/**
 * do md5 hash
 ***/
NSString* sAppMd5(NSString* input);
NSString *sAppMD5Hash(NSString * input);

NSString *sAppRandom32bitString(int len);

NSString *sAppUrlEncodedString(NSString *url);

/**
 *  去掉尾部空格
 *
 *  @param input 要去掉的空格
 */
NSString* sAppTrimString (NSString* input);

/**
 *  判断nil
 *  object
 */
BOOL sAppIs_null(id object);

/**
 *  判断@""
 * str
 */
BOOL sAppIsEmpty(NSString* str);


/**
 判断是否为数字

 @param number 判断的字段
 @return 是YES
 */
BOOL sAppIs_Number(NSString *number);

// 验证2位小数,len 小数点位数
BOOL sAppValidateDecimal(NSString *number,int len);

// 验证
BOOL sAppValidateEmail(NSString* email);
BOOL sAppValidateMobile(NSString* mobile);
BOOL sAppValidateMobileWithRegex(NSString* mobile,NSString *regex);
BOOL sAppValidateQQNumber(NSString *qqNumber);
// 纯数字
BOOL sAppValidateNumber(NSString *str);
BOOL sAppValiddatePinYin(NSString *pinYin);

/**
 判断最多2位小数

 @param str 字符串
 @return yes/no
 */
BOOL sAppValidateDecimalDouble(NSString *str);


/**
 * 字母、数字、中文正则判断（不包括空格）
 */
BOOL sAppValidateRuleNotBlank(NSString *str);

/**
 * extract the file name from path
 *
 **/
NSString* sAppExtractFileNameFromPath(NSString* path);


/**
 *  get the Tmp path of download file
 *
 ***/
NSString* sAppGetTmpDownloadFilePath(NSString* filePath);

/**
 *  get cache file path
 ***/
NSString* sAppGetCacheFilePath(NSString* cacheKey);

//获取Library路径
NSString* sAppGetLibraryFilePath(const NSString* fileName);

NSString* sAppGetDocumentsFilePath(const NSString* fileName);

NSString* sAppGetResourcePath(NSString* basePath, NSString* resName, NSString* resType);

NSURL* sAppGetResourceUrl(NSString* basePath, NSString* resName, NSString* resType);


BOOL sAppCheckFileIsExsis(NSString *filePath);
BOOL sAppCheckFilePathIsExsis(NSString *filePath);

/*删除文件 指向目录为（NSCachesDirectory）临时文件夹*/
BOOL sAppDeleteFileAtPath(NSString *filePath);


//检查路径，没有就创建路径
BOOL sAppCheckPathAndCreate(NSString *path);

//检查路径文件，没有就创建路径和文件
BOOL sAppCheckFileAndCreate(NSString *filePath);


/**
 *  日期格式
 *
 *  @param fromate 格式
 *  @param date    要格式的日期
 *
 *  @return 格式化后的字符串
 */
NSString * sAppDateTransformString(NSString* fromate,NSDate*date);


/// 获取指定当前日期之前的日期
/// @param number
NSString *sAppBackToPassedTimeWithDaysNumber(NSInteger number);

/**
 *  longlong类型日期，转换为字符串
 *
 *  @param fromate  格式
 *  @param longdate 转换的类型，主要php和java日期精确度不一样
 *
 *  @return return value description
 */
NSString * sAppLongdateTransformString(NSString* fromate,long long longdate);

/**
 *  字符串转日期
 *
 *  @param stringDate <#stringDate dessAppGetSystemDoubleVersionn <#return value description#>
 */
NSDate * sAppStringFormateDate(NSString * stringDate);


/// 计算时间与当前时间的差，单位秒，如果是分钟需要除以60
/// theDate
NSTimeInterval sAppDiffTimeSinceNow(NSString *theDate);



/**
 返回时差小时
 **/
int sAppIntervalDateSinceSimpleNow(NSString *theDate);

/**
 *  计算日期与当前时间的差
 *
 *  @param theDate 要对比的日期
 *
 *  @return 刚刚、几分钟前、几小时前、几天前、日期
 */
NSString *sAppIntervalSinceNow(NSString *theDate);

/**
 *  获取日期的年
 *
 *  @param date 要获取的日期
 *
 *  @return 返回哪一年
 */
NSInteger sAppGetDataYear(NSDate *date);


/// 获取文件存储的天数
/// @param filePath  本地文件路径
int sAppIntervalDay(NSString *filePath);


/// 验证文件过期时间，默认7天
/// @param filePath  图片路径
BOOL sAppImageIsValid(NSString *filePath);


/// 验证视频文件是否过期，默认7天
/// @param filePath  视频文件路径
BOOL sAppVideoIsValid(NSString *filePath);


/**
 *  获取sdk版本号
 *
 *  @return 版本号字符串
 */
NSString *sAppGetSDKVersion(void);

/**
 *  获取渠道名称
 *
 *  @return 渠道
 */
NSString *sAppGetAppChannel(void);


/**
 *  获取应用BunddleID

 */
NSString *zcGetAppBunddleID(void);

/**
 *  显示日志信息
 *
 */
BOOL sAppIsShowDebugLog(void);



/**
 *  获取设备的系统
 *
 */
NSString *sAppGetSystemVersion(void);
double sAppGetSystemDoubleVersion(void);


/**
 *  获取app的名称
 *
 */
NSString *sAppGetAppName(void);

/**
 *  获取app的版本号
 *
 */
NSString *sAppGetAppVersion(void);

/**
 *  获取手机型号
 *
 */
NSString *sAppGetIphoneType(void);


/**
 *  获取运营商信息
 *
 */
NSString *sAppGetIphoneOperators(void);


/**
 *  获取当前手机设置的语言
 *  return  是否是英语
 *  服务端使用
 **/
int  sAppIsChinaLanguages(void);

/**
 获取当前语言文件前缀名称
 */
NSString *sAppGetLanguagePrefix(void);

/**
 *   获取当前的手机语言
 *
 */
NSString *sAppGetCurrentLanguages(void);



/// 判断当前是否需要从右往左显示
BOOL sAppIsRTLLayout(void);

/**
 *  获取当前的分辨率
 *
 */
NSString *sAppGetScreenScale(void);


/**
 *  获取设备的尺寸
 *
 */
NSString *sAppGetScreenHeightAndWidth(void);

@end
