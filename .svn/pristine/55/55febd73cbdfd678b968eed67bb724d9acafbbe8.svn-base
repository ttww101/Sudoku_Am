//
//  UtilsMacros.h
//  亿红酒
//
//  Created by 蜗牛 on 2017/10/17.
//  Copyright © 2017年 SnailLi. All rights reserved.
//

#ifndef UtilsMacros_h
#define UtilsMacros_h

/*
 获取系统对象
 */
#define LApplication            [UIApplication sharedApplication]
#define LAppWindow              [UIApplication sharedApplication].delegate.window
#define LAppDelegate            [AppDelegate shareAppDelegate]
#define LRootViewController     [UIApplication sharedApplication].delegate.window.rootViewController
#define LUserDefaults           [NSUserDefaults standardUserDefaults]
#define LNotificationCenter     [NSNotificationCenter defaultCenter]


/*
 屏幕大小
 */
//屏幕大小
#define LScreenSize                     [[UIScreen mainScreen] bounds].size
#define LScreenBounds                  [UIScreen mainScreen].bounds
//屏幕宽度
#define LScreenWidth                    [[UIScreen mainScreen] bounds].size.width
//屏幕高度
#define LScreenHeight                   [[UIScreen mainScreen] bounds].size.height
//
#define LStatusBarHeight                [[UIApplication sharedApplication] statusBarFrame].size.height
#define LNavBarHeight                   44.0
#define LTabBarHeight                   ([[UIApplication sharedApplication] statusBarFrame].size.height>20?83:49)
#define LTopHeight                      (LStatusBarHeight + LNavBarHeight)

//屏幕高度比（以iPhone 5/5S/5SE为基准）
#define LHeightScale(F)                 ([UIScreen mainScreen].bounds.size.height/568.0f)*F
//屏幕宽度比（以iPhone 5/5S/5SE为基准）
#define LWidthScale(F)                  ([UIScreen mainScreen].bounds.size.width/320.0f)*F
// 判断是否是iPhone X
#define LRealValueX(with)               ((with)*(LScreenWidth/375.0f))
// 判断是否为iPhone 6/6s/7/8
#define LRealValue6_6s_7_8(with)        ((with)*(LScreenWidth/375.0f))
// 判断是否为iPhone 6Plus/6sPlus/7Plus/8Plus
#define LRealValue6P_6sP_7P_8P(with)    ((with)*(LScreenWidth/414.0f))
// 判断是否为 iPhone 5SE/5S/5
#define LRealValue5SE_5S_5(with)        ((with)*(LScreenWidth/320.0f))
//判断是否是iPhone 4/4s
#define LRealValue4_4S(with)            ((with)*(LScreenWidth/320.0f))



/*
 判断当前的设备/系统版本
 */
//判断是否为iPhone
#define IS_IPHONE                      (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
//判断是否为iPad
#define IS_IPAD                        (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
//判断是否为ipod
#define IS_IPOD                        ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])
//判断是否为 iPhone 5SE/5S/5
#define iPhone5SE_5S_5                 [[UIScreen mainScreen] bounds].size.width == 320.0f && [[UIScreen mainScreen] bounds].size.height == 568.0f
//判断是否是iPhone 4/4s
#define iPhone4_4S                     [[UIScreen mainScreen] bounds].size.width == 320.0f && [[UIScreen mainScreen] bounds].size.height == 480.0f
//判断是否为iPhone 6/6s/7/8
#define iPhone6_6S_7                   [[UIScreen mainScreen] bounds].size.width == 375.0f && [[UIScreen mainScreen] bounds].size.height == 667.0f
//判断是否为iPhone 6Plus/6sPlus/7Plus/8Plus
#define iPhone6Plus_6sPlus_7Plus_8Plus [[UIScreen mainScreen] bounds].size.width == 414.0f && [[UIScreen mainScreen] bounds].size.height == 736.0f
//判断是否为iPhone X
#define iPhoneX                        [[UIScreen mainScreen] bounds].size.width == 375.0f && [[UIScreen mainScreen] bounds].size.height == 812.0f
//判断是否为横屏iphone X
#define LandscapeIPhoneX                        [[UIScreen mainScreen] bounds].size.height == 375.0f && [[UIScreen mainScreen] bounds].size.width == 812.0f

//获取系统版本
#define L_SYSTEM_VERSION               [[[UIDevice currentDevice] systemVersion] floatValue]
//判断 iOS 8 或更高的系统版本
#define L_VERSION_8_OR_LATER           (([[[UIDevice currentDevice] systemVersion] floatValue] >=8.0)? (YES):(NO))
//IOS版本判断
#define LAVAILABLEVERSION(version)     ([[UIDevice currentDevice] availableVersion:version] < 0)
//当前语言
#define LCurrentLanguage               (［NSLocale preferredLanguages] objectAtIndex:0])


/*
 弱引用/强引用
 */
//弱引用
#define LWeakSelf(type)                 __weak typeof(type) weak##type = type;
#define LWEAKSELF typeof(self)          __weak weakSelf = self
//强引用
#define LStrongSelf(type)               __strong typeof(type) type = weak##type;
#define LSTRONGSELF typeof(weakSelf)    __strong strongSelf = weakSelf


/*
 NSLog打印
 */
#if DEBUG
#define NSLog(FORMAT, ...) fprintf(stderr,"---[方法名:%s]\n---[行号:%d]\n---打印内容:\n%s\n",__FUNCTION__, __LINE__,[[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
//#define NSLog(FORMAT, ...) nil
#endif


/*
 View 圆角和加边框
 */
#define LViewBorderRadius(View, Radius, Width, Color)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES];\
[View.layer setBorderWidth:(Width)];\
[View.layer setBorderColor:[Color CGColor]]

// View 圆角
#define LViewRadius(View, Radius)\
\
[View.layer setCornerRadius:(Radius)];\
[View.layer setMasksToBounds:YES]


/*
 定义UIImage对象
 */
#define LImageWithFile(_pointer)   [UIImage imageWithContentsOfFile:([[NSBundle mainBundle] pathForResource:[NSString stringWithFormat:@"%@@%dx", _pointer, (int)[UIScreen mainScreen].nativeScale] ofType:@"png"])]
#define LIMAGE_NAMED(name)         [UIImage imageNamed:name]
//获取图片资源
#define LGetImage(imageName)        [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]

#define xiaoheng                    [UIImage imageNamed:@"xiaoheng.png"]
#define hengxiang                   [UIImage imageNamed:@"hengxiang.png"]
#define zongxiang                   [UIImage imageNamed:@"zongxiang.png"]
#define zheng                       [UIImage imageNamed:@"zheng.png"]
#define lunbo                       [UIImage imageNamed:@"banner.png"]
#define head                        [UIImage imageNamed:@"head-user"]
#define zanwushuju                  [UIImage imageNamed:@"zanwushuju.png"]

/*
 颜色
 */
// clear背景颜色(清除背景色)
#define ClearColor           [UIColor clearColor]
//红色背景色
#define REDColor             [UIColor redColor]
//绿色背景色
#define GREENColor           [UIColor greenColor]
//黑色背景色
#define BLACKColor           [UIColor blackColor]
//白色背景色
#define WHITEColor           [UIColor whiteColor]
//灰色背景色
#define GRAYColor            [UIColor grayColor]
//深灰色
#define DARKGRAY             [UIColor darkGrayColor]
//浅灰色
#define LIGHTGRAY            [UIColor lightGrayColor]
//青色
#define CYANGRAY             [UIColor cyanColor]
//黄色
#define YELLOWGRAY           [UIColor yellowColor]
//品红色
#define MAGENTAGRAY          [UIColor magentaColor]
//橙色
#define ORANGEGRAY           [UIColor orangeColor]
//紫色
#define PURPLEGRAY           [UIColor purpleColor]
//布朗色
#define BROWNGRAY            [UIColor brownColor]
//蓝色
#define BLUEGRAY             [UIColor blueColor]
//随机RGB颜色
#define RandomColor          [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]
//设置RGB颜色
#define RGBColor(r, g, b)     [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
//设置RGBA颜色
#define RGBAColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]
// rgb颜色转换（16进制->10进制）
#define RGB(rgbValue)         [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
//十六进制颜色（使用此方法一定要添加十六进颜色制库）
#define Hexadecimal(string)   [UIColor colorWithHexString:WhiteColor]



//数据验证
#define LStrValid(f)        (f!=nil && [f isKindOfClass:[NSString class]] && ![f isEqualToString:@""])
#define LSafeStr(f)         (SLStrValid(f) ? f:@"")
#define LHasString(str,eky) ([str rangeOfString:key].location!=NSNotFound)

#define LValidStr(f) StrValid(f)
#define LValidDict(f)       (f!=nil && [f isKindOfClass:[NSDictionary class]])
#define LValidArray(f)      (f!=nil && [f isKindOfClass:[NSArray class]] && [f count]>0)
#define LValidNum(f)        (f!=nil && [f isKindOfClass:[NSNumber class]])
#define LValidClass(f,cls)  (f!=nil && [f isKindOfClass:[cls class]])
#define LValidData(f)       (f!=nil && [f isKindOfClass:[NSData class]])
#define LValidString(f,r)   ([f isEqualToString:r])


//获取一段时间间隔
#define LStartTime                        CFAbsoluteTime start = CFAbsoluteTimeGetCurrent();
#define LEndTime                          NSLog(@"Time: %f", CFAbsoluteTimeGetCurrent() - start)
//打印当前方法名
#define ITTDPRINTMETHODNAME()             ITTDPRINT(@"%s", __PRETTY_FUNCTION__)

//GCD
#define LDISPATCH_ASYNC_BLOCK(block)     dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block)
#define LDISPATCH_MAIN_BLOCK(block)      dispatch_async(dispatch_get_main_queue(),block)
//GCD - 一次性执行
#define LDISPATCH_ONCE_BLOCK(onceBlock)  static dispatch_once_t onceToken; dispatch_once(&onceToken, onceBlock);



//发送通知
#define LPostNotification(name,obj)       [[NSNotificationCenter defaultCenter] postNotificationName:name object:obj];


//单例化一个类
#define LSINGLETON_FOR_HEADER(className) \
\
+ (className *)shared##className;

#define LSINGLETON_FOR_CLASS(className) \
\
+ (className *)shared##className { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[self alloc] init]; \
}); \
return shared##className; \
}


//字体
/*font
 Font18: 标准字36px18sp/18pt导航标题、文章标题、重要突出词句
 Font16: 标准字32px16sp/16pt用户姓名、列表文章标题、分类栏目、模块名称、按钮文字等
 Font14: 标准字28px14sp/14pt长段描述文字、非标题文字、文章正文、提示性文字等
 Font12: 标准字24px12sp/12pt次要描述文字、小副标题、 次要提示、标签文字等
 Font10: 标准字20px10sp/10pt标签栏名称、次要长段描述或提示文字
 */
#define     Font(F)               [UIFont systemFontOfSize:(F)]
#define     FontBold(F)           [UIFont boldSystemFontOfSize:(F)]
#define     Font_H(F)             [UIFont fontWithName:@"Helvetica" size:(F)]
#define     Font_Bold(F)          [UIFont fontWithName:@"Helvetica-Bold" size:(F)]

//字符串不为空验证
#define StrValid(f) (f!=nil && [f isKindOfClass:[NSString class]] && ![f isEqualToString:@""])
//字符串为空验证
#define StrNullValid(f) ([f isEqualToString:@""])

//数组不为空验证
#define ArrayValid(f) (f!=nil && [f isKindOfClass:[NSMutableArray class]] && [f count]>0)

//数组为空验证
#define ArrayNullValid(f) ([f count] == 0)

//屏幕以5适配
#define Height_Scale [UIScreen mainScreen].bounds.size.height/568.0
#define Width_Scale  [UIScreen mainScreen].bounds.size.width/320.0
#define Screen_Height [UIScreen mainScreen].bounds.size.height
#define Screen_Width  [UIScreen mainScreen].bounds.size.width
#define Color(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

//property属性快速声明

#define PropertyString(s)@property(nonatomic,copy)NSString * s

#define PropertyNSInteger(s)@property(nonatomic,assign)NSIntegers

#define PropertyFloat(s)@property(nonatomic,assign)floats

#define PropertyBOOL(s)@property(nonatomic,assign)BOOL

#define PropertyNSMutableDict(s)@property(nonatomic,strong)NSMutableDictionary * s

#define PropertyNSArray(s)@property(nonatomic,strong)NSArray * s

#define PropertyNSMutableArray(s)@property(nonatomic,strong)NSMutableArray * s

#define ValidArray(f)(f!=nil &&[f isKindOfClass:[NSArray class]]&&[f count]>0)

#define ValidStr(f)(f!=nil &&[f isKindOfClass:[NSString class]]&& ![f isEqualToString:@""])

#define foundManager [FoundManager sharedFoundManager]

//获取主窗口
#define MTKeyWindows [UIApplication sharedApplication].keyWindow

#define PicPath  @"http://img.unexpect.net:98/index.php"

#endif /* UtilsMacros_h */
