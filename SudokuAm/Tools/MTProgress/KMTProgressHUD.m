//
//  KMTProgressHUD.m
//  onemoney
//
//  Created by Maktub on 16/3/6.
//  Copyright © 2016年 Maktub-小明. All rights reserved.
//

#import "KMTProgressHUD.h"
#import "MBProgressHUD.h"

//#import "UIView+MTGetVc.h"



@implementation KMTProgressHUD

+ (BOOL)mt_showHUDAddedTo:(UIView *)view animated:(BOOL)animated message:(NSString *)message{
    if (nil != view) {
        MBProgressHUD *hud = [[MBProgressHUD alloc] initWithView:view];
        if (message) {
            hud.label.font = [UIFont systemFontOfSize:14.0f];
            hud.label.text = message;
        }
        hud.removeFromSuperViewOnHide = YES;
        [view addSubview:hud];
        [hud showAnimated:animated];
        return YES;
    }
    return NO;
}

+ (BOOL)mt_hideHUDForView:(UIView *)view animated:(BOOL)animated {
    if (nil != view) {
        MBProgressHUD *hud = [MBProgressHUD HUDForView:view];
        if (nil != hud) {
            hud.removeFromSuperViewOnHide = YES;
            [hud hideAnimated:animated];
            return YES;
        }
    }
    return NO;
}

+ (BOOL)withMessage:(NSString *)message animated:(BOOL)animated View:(UIView *)view{

    return [self mt_showMessage:message animated:animated View:view complete:nil];
}

+ (BOOL)mt_showMessage:(NSString *)message animated:(BOOL)animated View:(UIView *)view complete:(void(^)(void))block{
    
    if (message) {
        MBProgressHUD *hud = [[MBProgressHUD alloc] initWithView:view];
        hud.label.font = [UIFont systemFontOfSize:14.0f];
        hud.label.text = message;
        hud.mode = MBProgressHUDModeText;
        hud.removeFromSuperViewOnHide = YES;
        [view addSubview:hud];
        [hud showAnimated:animated];
        dispatch_time_t popTime = dispatch_time(DISPATCH_TIME_NOW, 1 * NSEC_PER_SEC);
        dispatch_after(popTime, dispatch_get_main_queue(), ^(void){
            [hud hideAnimated:YES];
            if (nil != block) {
                block();
            }
        });
        return YES;
    }
    return NO;
}














@end
