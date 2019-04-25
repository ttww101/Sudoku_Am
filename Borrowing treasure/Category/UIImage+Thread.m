//
//  UIImage+Thread.m
//  意料之外
//
//  Created by  何浩贤 on 2017/8/23.
//  Copyright © 2017年 com.UNEXPECTED.yijia. All rights reserved.
//

#import "UIImage+Thread.h"

@implementation UIImage (Thread)
+ (UIImage *)createImageWithColor:(UIColor*) color {
    CGRect rect = CGRectMake(0.0f, 0.0f, 1.0f, 1.0f);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    UIImage *theImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return theImage;
}
@end
