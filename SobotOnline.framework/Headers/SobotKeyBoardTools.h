//
//  SobotKeyBoardfView.h
//  SobotOnline
//
//  Created by zhangxy on 2020/8/24.
//  Copyright © 2020 sobot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SobotCommonDefine.h"

#define SobotMoreViewHeight  (isLandspace ? 120 : 256)
#define SobotEmojiViewHeight (isLandspace ? 120 : 256)
//#define SobotEmojiViewHeight (isLandspace ? 120 : 216)


typedef NS_ENUM(NSInteger, SobotKeyboardType) {
    SobotKeyboardTypeSendText   = 1,// 发布文字
    SobotKeyboardTypeSendPhoto  = 2,// 发布图片
    SobotKeyboardTypeSmartReply = 3,// 智能回复
    SobotKeyboardTypeQuickReply = 4,// 快速回复
    SobotKeyboardTypeWriting    = 5,// 正在输入
    SobotKeyboardTypeUnKnow     = 6,// 未知类型
    SobotKeyboardTypeReceived   = 7,// 接收消息
    SobotKeyboardTypeCallRequest= 8,// 通话请求
    SobotKeyboardTypeSummary    = 9,// 会话总结
    SobotKeyboardTypeInvitationEvaluation    = 10,// 邀请评价
    SobotKeyboardTypeSendVideo               = 11,// 发布视频
    SobotKeyboardTypeRefreshUStatus          = 12,// 刷新用户状态
    SobotKeyboardTypeInviteChat              = 13,// 邀请会话

};


@protocol SobotKeyboardDelegate <NSObject>

/**
 *  执行发送消息
 */
-(void)sendMessage:(NSString *_Nullable)text type:(SobotKeyboardType)type obj:(id _Nullable) object;

/**
 *  键盘的高度
 *
 *  @param height 键盘高度
 */
-(void) keyboardChanged:(CGFloat) height;


/**
 *  其它点击
 *
 *  @param type 点击事件
 */
-(void) keyboardItemClick:(SobotKeyboardType ) type;


@end

NS_ASSUME_NONNULL_BEGIN

@interface SobotKeyBoardTools : NSObject

@property(nonatomic,strong)id<SobotKeyboardDelegate> delegate;

-(void)createKeyboardWithView:(UIView *) superView aboveView:(UIView *) aboveView delegate:(id<SobotKeyboardDelegate>)delegate menu:(NSArray *) menus;


-(CGFloat) getKeyboardBottomHeight;
-(void)setAppearFrame;


-(void)setKeyboardText:(NSString *)text;
-(void)changeKeyboardFrame;

-(void)hideKeyBoardView;



-(void)showBottom;
-(void)hideBottom;
-(void)setUserBlock:(BOOL) isBlack;
-(void)loadUserStatusResult;

-(void)setUserSatusView:(int) status name:(NSString *) aname;
-(void)setUserSatusView:(int) status name:(NSString *) aname chatToMe:(BOOL) isMe;

// type = 1、快捷，2只能，3邀评,4服务总结
-(void)changeButtonStatus:(int ) type;

@end

NS_ASSUME_NONNULL_END
