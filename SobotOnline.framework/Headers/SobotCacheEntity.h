//
//  SobotCacheEntity.h
//  SobotCommon
//
//  Created by zhangxy on 2020/8/6.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface SobotCacheEntity : NSObject

// SAppThemeMode,默认0
//SAppThemeMode_Default    = 0, // 默认，跟随系统
//SAppThemeMode_Dark       = 1, // 暗黑模式
//SAppThemeMode_Light      = 2, // 亮色模式
@property(nonatomic,assign) NSInteger themeMode;

// 资源bundle名称，比如SobotOnline.bundle则 bundleName = SobotOnline
@property(nonatomic,strong) NSString *bundleName;

// 资源bundle中，语言文件名称
@property(nonatomic,strong) NSString *languageTableName;

// 资源bundle中，语言文件名称
@property(nonatomic,strong) NSString *colorTableName;


// 指定语言
@property(nonatomic,strong) NSString *absoluetelanguage;

@end
