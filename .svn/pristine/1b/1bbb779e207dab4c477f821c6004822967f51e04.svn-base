//
//  YJRegisView.h
//  Borrowing treasure
//
//  Created by  何浩贤 on 2018/1/10.
//  Copyright © 2018年 com.BorrowingTreasure.yijia. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^YJRegisViewRegisBlock)(void);
typedef void(^YJRegisViewExamBlock)(void);

@interface YJRegisView : UIView
@property (nonatomic, strong) UITextField *userTF;
@property (nonatomic, strong) UITextField *passTF;
@property (nonatomic, strong) UITextField *repassTF;
@property (nonatomic, strong) UITextField *examTF;
@property (nonatomic, strong) UIImageView *examImageV;
@property (nonatomic, strong) UIButton *examImageButton;
@property (nonatomic, strong) UIButton *regisBtn;

-(instancetype)initWithFrame:(CGRect)frame;

@property (nonatomic, copy) YJRegisViewExamBlock examblock;

@property (nonatomic, copy) YJRegisViewRegisBlock regisBlock;
@end
