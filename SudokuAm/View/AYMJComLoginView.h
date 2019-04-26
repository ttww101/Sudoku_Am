//
//  AYMJComLoginView.h
//  意料之外
//
//  Created by  何浩贤 on 2017/8/22.
//  Copyright © 2017年 com.UNEXPECTED.yijia. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AYMJComLoginViewDelegate <NSObject>

-(void)LoginClick;

@end

@interface AYMJComLoginView : UIView
@property (nonatomic, strong) UITextField *userTF;
@property (nonatomic, strong) UITextField *passTF;
@property (nonatomic, strong) UIButton *loginBtn;


@property (nonatomic, weak) id<AYMJComLoginViewDelegate> delegate;

@end
