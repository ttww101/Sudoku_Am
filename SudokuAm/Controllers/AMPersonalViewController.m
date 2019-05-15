//
//  AMPersonalViewController.m
//  SudokuAm
//
//  Created by Wu on 2019/5/15.
//  Copyright © 2019 net.sudoku.am. All rights reserved.
//

#define SPACING_REGESTER_BUTTON 12

#import "AMPersonalViewController.h"
#import "UIView+Constraint.h"
#import "AYMJLoginViewController.h"

@interface AMPersonalViewController ()

@property (strong, nonatomic) UIView *registerFrameView;
@property (strong, nonatomic) UIButton *notRegisterButton;

@end

@implementation AMPersonalViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self loadPersonalView];
}

#pragma mark - Private

- (void)loadPersonalView {
    for (UIView *view in self.view.subviews) {
        [view removeFromSuperview];
    }
    if ([[[NSUserDefaults standardUserDefaults] objectForKey:@"status"] isEqualToString:@"1"]) {
        
    } else {
        [self.view addSubview:self.registerFrameView];
        [self.view addSubview:self.notRegisterButton];
        [self.registerFrameView constraints:self.notRegisterButton constant:UIEdgeInsetsMake(-SPACING_REGESTER_BUTTON, -SPACING_REGESTER_BUTTON, SPACING_REGESTER_BUTTON, SPACING_REGESTER_BUTTON)];
        [self.notRegisterButton constraintsCenterX:self.view toLayoutAttribute:NSLayoutAttributeCenterX];
        [self.notRegisterButton constraintsCenterY:self.view toLayoutAttribute:NSLayoutAttributeCenterY];
    }
    
}

- (void)presentLoginVC {
    AYMJLoginViewController *login=[[AYMJLoginViewController alloc]init];
    login.dismissBlock = ^{
        [self loadPersonalView];
    };
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:login];
    nav.viewControllers = @[login];
    nav.navigationBar.barTintColor=[UIColor whiteColor];
    nav.navigationBar.translucent = YES;
    [self presentViewController:nav animated:YES completion:nil];
}

#pragma mark - Getter

- (UIView *)registerFrameView {
    if (_registerFrameView == nil) {
        UIView *view = [UIView new];
        view.layer.cornerRadius = SPACING_REGESTER_BUTTON;
        view.layer.masksToBounds = YES;
        view.layer.borderWidth = 0.5;
        view.layer.borderColor = [UIColor lightGrayColor].CGColor;
        _registerFrameView = view;
        
        UITapGestureRecognizer *tapGes = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(presentLoginVC)];
        [view addGestureRecognizer:tapGes];
    }
    return _registerFrameView;
}

- (UIButton *)notRegisterButton {
    if (_notRegisterButton == nil) {
        UIButton *button = [UIButton new];
        [button setImage:[[UIImage imageNamed:@"guess"] imageWithRenderingMode:UIImageRenderingModeAlwaysTemplate] forState:UIControlStateNormal];
        button.imageView.contentMode = UIViewContentModeScaleAspectFit;
        [button.imageView setTintColor:[UIColor lightGrayColor]];
        
        button.titleLabel.numberOfLines = 0;
        button.titleLabel.textAlignment = NSTextAlignmentCenter;
        [button setTitle:@"尚未登入/註冊\n請點擊這裡" forState:UIControlStateNormal];
        [button setTitleColor:[UIColor lightGrayColor] forState:UIControlStateNormal];
        [button addTarget:self action:@selector(presentLoginVC) forControlEvents:UIControlEventTouchUpInside];
        _notRegisterButton = button;
    }
    return _notRegisterButton;
}

@end