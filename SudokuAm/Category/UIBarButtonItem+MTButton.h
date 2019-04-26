//
//  UIBarButtonItem+MTButton.h
//  YingCaa
//
//  Created by interest on 16/4/26.
//  Copyright © 2016年 interest. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (MTButton)

/**
 *  创建
 *
 *  @param imageName        正常图片
 *  @param highImageName    高亮图片
 *  @param target           监听
 *  @param action           方法
 *
 *  @return                 uibarbuttonitem
 */
+ (instancetype)mt_barButtonItemWithImage:(NSString *)imageName highImage:(NSString *)highImageName target:(id)target action:(SEL)action;

+ (instancetype)mt_barButtonItemWithName:(NSString *)imageName textColor:(UIColor *)textColor target:(id)target action:(SEL)action;

@end
