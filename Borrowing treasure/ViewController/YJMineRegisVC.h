//
//  YJMineRegisVC.h
//  Borrowing treasure
//
//  Created by  何浩贤 on 2018/1/10.
//  Copyright © 2018年 com.BorrowingTreasure.yijia. All rights reserved.
//

#import "YJRootVC.h"

typedef void(^YJMineRegisVCInitBlock)(void);

@interface YJMineRegisVC : YJRootVC

@property (nonatomic, copy) YJMineRegisVCInitBlock block;
@end
