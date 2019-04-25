//
//  UIBarButtonItem+MTButton.m
//  YingCaa
//
//  Created by interest on 16/4/26.
//  Copyright © 2016年 interest. All rights reserved.
//

#import "UIBarButtonItem+MTButton.h"

@implementation UIBarButtonItem (MTButton)

+ (instancetype)mt_barButtonItemWithImage:(NSString *)imageName highImage:(NSString *)highImageName target:(id)target action:(SEL)action{
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    
    button.bounds = CGRectMake(0, 0, 11, 21);
    
    [button setImage:[UIImage imageNamed:imageName] forState:UIControlStateNormal];
    [button setImage:[UIImage imageNamed:highImageName] forState:UIControlStateHighlighted];
    [button sizeToFit];
    [button addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    
    return  [[UIBarButtonItem alloc] initWithCustomView:button];
}

+ (instancetype)mt_barButtonItemWithName:(NSString *)imageName textColor:(UIColor *)textColor target:(id)target action:(SEL)action{
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.titleLabel.font = [UIFont systemFontOfSize:14.0f];
    [button setTitle:imageName forState:UIControlStateNormal];
    [button setTitleColor:textColor forState:UIControlStateNormal];
    button.bounds = CGRectMake(0, 0, 11, 21);
    [button sizeToFit];
    [button addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    
    return  [[UIBarButtonItem alloc] initWithCustomView:button];
}

@end
