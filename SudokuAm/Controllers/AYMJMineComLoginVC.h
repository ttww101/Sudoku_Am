//
//  AYMJMineComLoginVC.h
//  意料之外
//
//  Created by  何浩贤 on 2017/8/22.
//  Copyright © 2017年 com.UNEXPECTED.yijia. All rights reserved.
//

#import "AYMJRootVC.h"

typedef void(^YJMineComLoginVCInitBlock)(void);

@interface AYMJMineComLoginVC : AYMJRootVC

@property (nonatomic, copy) YJMineComLoginVCInitBlock block;
@end
