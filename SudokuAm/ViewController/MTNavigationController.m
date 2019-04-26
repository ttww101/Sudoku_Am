//
//  MTNavigationController.m
//  YingCaa
//
//  Created by interest on 16/4/26.
//  Copyright © 2016年 interest. All rights reserved.
//

#import "MTNavigationController.h"
#import "UIBarButtonItem+MTButton.h"
#import "UIImage+Thread.h"



@interface MTNavigationController ()<
UINavigationControllerDelegate
>

// 记录push标志
@property (nonatomic, getter=isPushing) BOOL pushing;
/**
 *  用于保存协议
 */
@property(nonatomic, strong) id popDeletge;

@end

@implementation MTNavigationController




- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    _popDeletge = self.interactivePopGestureRecognizer.delegate;
    
    self.delegate = self;
    
    //设置字体
    [self.navigationBar setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor blackColor],NSFontAttributeName:[UIFont systemFontOfSize:15.0f*Height_Scale]}];
    
    self.navigationBar.barTintColor = [UIColor whiteColor];
    self.navigationBar.translucent = NO;
    [self.navigationBar setBackgroundImage:[[UIImage alloc] init] forBarPosition:UIBarPositionAny  barMetrics:UIBarMetricsDefault];
//    self.navigationBar.shadowImage = [[UIImage alloc] init];
    
    
     [self.navigationBar setShadowImage:[UIImage createImageWithColor:Color(240, 240, 240, 1)]];

    
}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}




- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated
{
    if (self.childViewControllers.count) { // 不是根控制器
        viewController.hidesBottomBarWhenPushed = YES;
        // 设置导航条的按钮
        UIBarButtonItem *popPreVc = [UIBarButtonItem mt_barButtonItemWithImage:@"back" highImage:@"back" target:self action:@selector(popToPreVc)];
        viewController.navigationItem.leftBarButtonItem = popPreVc;
    }
    
    if (self.pushing == YES) {
     
        return;
    } else {
     
        self.pushing = YES;
    }
    

    
    [super pushViewController:viewController animated:YES];
}
-(void)navigationController:(UINavigationController *)navigationController didShowViewController:(UIViewController *)viewController animated:(BOOL)animated
{
    
     self.pushing = NO;
    
    if (viewController == self.viewControllers[0]) {
        self.interactivePopGestureRecognizer.delegate = _popDeletge;
        
        
    }
    else{
        self.interactivePopGestureRecognizer.delegate = nil;
    }
}
- (void)popToPreVc
{
    [self popViewControllerAnimated:YES];
}



//用子子控制器设置标题栏颜色
-(UIStatusBarStyle)preferredStatusBarStyle{
    return UIStatusBarStyleDefault;
}



- (UIViewController *)childViewControllerForStatusBarStyle{
    return self.topViewController;
}

@end
