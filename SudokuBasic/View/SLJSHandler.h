//
//  SLJSHandler.h
//  亿红酒
//
//  Created by 蜗牛 on 2017/11/8.
//  Copyright © 2017年 SnailLi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
@interface SLJSHandler : NSObject<WKScriptMessageHandler>
@property (nonatomic,weak,readonly) UIViewController * webVC;
@property (nonatomic,strong,readonly) WKWebViewConfiguration * configuration;

-(instancetype)initWithViewController:(UIViewController *)webVC configuration:(WKWebViewConfiguration *)configuration;

-(void)cancelHandler;


@end
