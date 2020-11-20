//
//  SobotBaseController.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/5.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotUITools.h"
#import "SobotCommonDefine.h"
#import "SobotProgressHUD.h"

typedef NS_ENUM(NSInteger,ZCButtonClick) {
    ZCButtonClickBack = 0,
    ZCButtonClickBackChat,
    ZCButtonClickClose,
    ZCButtonClickMenu,
    ZCButtonClickRight,
    ZCButtonClickItem1,
    ZCButtonClickItem2,
    ZCButtonClickItem3,
    ZCButtonClickTransfer,
    ZCButtonClickFavoriter,
    ZCButtonClickBlock
};

NS_ASSUME_NONNULL_BEGIN

@interface SobotBaseController : UIViewController

/**
 *  顶部的View
 */
@property(nonatomic,strong) UIView      * topView;

/**
 *  关闭按钮（返回）
 */
@property(nonatomic,strong) UIButton    * backButton;

/**
  更多按钮，ZCButtonClickRight
 */
@property(nonatomic,strong) UIButton    * moreButton;

/**
 *  标题
 */
@property(nonatomic,strong) UILabel    * titleLabel;

@property(nonatomic,strong) NSString *backTitle;

/**
 *
 *  导航条底部线条
 *
 **/
@property (nonatomic,strong) UIView * bottomLine;


@property (nonatomic,assign) CGFloat contentY;
@property (nonatomic,assign) CGFloat contentHeight;
@property (nonatomic,assign) BOOL isAppear;


-(void)goBack;

-(void)buttonClick:(UIButton *) sender;

// 打开新页面
-(void)autoOpenNewVC:(UIViewController *)controller;
-(void)openWithPresent:(UIViewController *)controller;
-(void)openNav:(UIViewController *)controller;
-(void)openWithPresent:(UIViewController *)controller sound:(NSString *__nullable)soundName animated:(BOOL) anmated;
-(void)openNav:(UIViewController *)controller sound:(NSString *__nullable)soundName;

// 创建导航头
-(void)createVCTitleView;
-(void)setNavigationBarLeft:(NSArray *__nullable)leftTags right:(NSArray *__nullable)rightTags;
-(void)setNavTitle:(NSString *) title;

// 获取页面内容的起始坐标
-(CGFloat )getVCContentY;
-(void)setViewFrameInViewAppear;



-(void)createPlaceHolderView:(UIView *) superView title:(NSString *) title desc:(NSString *__nullable )message image:(UIImage *__nullable )  tipImage block:(void(^__nullable)(UIButton *_Nonnull btn,NSInteger tag))  refreshClick;
- (void)removePlaceholderView;

@end

NS_ASSUME_NONNULL_END
