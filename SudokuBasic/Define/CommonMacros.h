//
//  CommonMacros.h
//  亿红酒
//
//  Created by 蜗牛 on 2017/10/17.
//  Copyright © 2017年 SnailLi. All rights reserved.
//
#import <Foundation/Foundation.h>
#ifndef CommonMacros_h
#define CommonMacros_h



//导航栏颜色
static NSString    *  MasterCoolor=   @"#990033";
//白色
static NSString    *  White       =   @"#ffffff";
//字体颜色
static NSString    *  WordColor   =   @"#4a4a4a";
//灰色
static NSString    *  Gray        =   @"#999999";
//底色
static NSString   *   BaseColor   =   @"#f0f2f5";
//价格
static NSString   *   PriceColor  =   @"#ff0000";
//涨
static NSString   *   RoseColor   =   @"#f11010";
//跌
static NSString   *   FallColor   =   @"#22aa33";
//涨底色
static NSString   *   RoseBaseColor=  @"#fbe7e7";
//跌底色
static NSString   *   FallBaseColor=  @"#e7fbea";




#pragma mark--------------------------AES加密---------------------
#define DevelopSeverkeypwd    0
#define ProductSeverkeypwd    1

#if DevelopSeverkeypwd

//测试keypwd
static NSString   *     keypwd    =  @"fA*f~!sd5fs521@#";

#elif ProductSeverkeypwd

//正式signkey
static NSString   *     keypwd    =  @"SC*f~!SP5fA5D1@#";

#endif

//识别码
static  NSString  *     appid     =  @"bbh";
//来源标识
static  NSString  *     comeFrom  =  @"appstore";



//获取保存版本号
#define VersionNumber     [[NSUserDefaults standardUserDefaults]objectForKey:@"versionNumber"];

#define Token             [[NSUserDefaults standardUserDefaults]objectForKey:@"Token"];

#define YJ_Token          [[NSUserDefaults standardUserDefaults]objectForKey:@"yj_token"];

#define ACCOUNT          [[NSUserDefaults standardUserDefaults]objectForKey:@"account"];


//用户devicetoken
#define DEVICETOKEN [[NSUserDefaults standardUserDefaults]objectForKey:@"devicetoken"];
//用户cid
#define ClientId [[NSUserDefaults standardUserDefaults]objectForKey:@"clientId"];

//资金协议
#define AGREEMENT_ENTRUSTMENT @"allow-message__entrustment"
//隐私协议
#define AGREEMENT_PRIVACY @"allow-message__Privacy-agreement"
//用户协议
#define AGREEMENT_USER @"allow-message__user"
//新手学堂
#define AGREEMENT_NOVICE @"novice-message__novice"
//关于我们
#define ABOUT_US @"base-message_other_aboutus"

//偏好设置
#define kUserDefaults  [NSUserDefaults standardUserDefaults]

//发送通知
#define KPostNotification(name,obj) [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj];

//头像改变
#define KNotificationHeadChange @"FreshHead"

//下线
#define KNotificationLoginOut @"KNotificationLoginOut"

//地址更新
#define KNotificationReloadAddressList @"reloadAddressList"

//行情网络请求
#define markerManager  [MarkerManager sharedMarkerManager]

#endif /* CommonMacros_h */
