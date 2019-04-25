//
//  MTProgressHUD.h
//  onemoney
//
//  Created by Maktub on 16/3/6.
//  Copyright © 2016年 Maktub-小明. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MTProgressHUD : NSObject

+ (BOOL)mt_showHUDAddedTo:(UIView *)view animated:(BOOL)animated message:(NSString *)message;

+ (BOOL)mt_hideHUDForView:(UIView *)view animated:(BOOL)animated;

+ (BOOL)mt_showMessage:(NSString *)message animated:(BOOL)animated View:(UIView *)view;

+ (BOOL)mt_showMessage:(NSString *)message animated:(BOOL)animated View:(UIView *)view complete:(void(^)(void))block;



@end
