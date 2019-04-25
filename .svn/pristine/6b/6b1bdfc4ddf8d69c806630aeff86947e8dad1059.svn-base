//
//  MTTabBarController.m
//  YingCaa
//
//  Created by interest on 16/4/26.
//  Copyright © 2016年 interest. All rights reserved.
//

#import "MTTabBarController.h"

//controller
#import "YJRootVC.h"
#import "NewsOneVC.h"
#import "NewsTwoVC.h"
#import "NewsThreeVC.h"


@interface MTTabBarController ()

@property (nonatomic, strong) NSMutableArray<UITabBarItem *> *vcArray;


@property (nonatomic, strong) UIView *backView;
@end

@implementation MTTabBarController




//-(UIStatusBarStyle)preferredStatusBarStyle{
//    return UIStatusBarStyleLightContent;
//}

-(NSMutableArray<UITabBarItem *> *)vcArray{
    if (nil == _vcArray) {
        _vcArray = [NSMutableArray array];
    }
    return _vcArray;
}






- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.


    
    
    /**
     *   设置tabbar样式
     */
    [self setUpTabBar];
    
    /**
     *  添加子控制器
     */
    [self setUpAllChildViewController];

}



- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}





//初始化控件属性
-(void)setUpTabBar{

    self.tabBar.backgroundImage = [[UIImage alloc] init];
    self.tabBar.shadowImage = [[UIImage alloc] init];
    self.tabBar.barTintColor = Color(239, 239, 239, 1);
    self.tabBar.translucent = NO;
    self.tabBarController.tabBar.delegate = self;
   
}


//初始化子控件
-(void)setUpAllChildViewController{
    
    //创建子控件
    NewsOneVC *main = [[NewsOneVC alloc] init];
    [self setUpChildViewController:main image:[[UIImage imageNamed:@"首页01"] imageWithRenderingMode:1] selectedImage:[[UIImage imageNamed:@"首页"] imageWithRenderingMode:1] title:@"新闻头条" titleImageFrame:CGRectMake(0, 0, 70*Width_Scale, 35*Height_Scale) titleImage:@"home-title" Index:0];

    
    NewsTwoVC *find = [[NewsTwoVC alloc]init];
    [self setUpChildViewController:find image:[[UIImage imageNamed:@"tab-disc"]imageWithRenderingMode:1] selectedImage:[[UIImage imageNamed:@"tab-disc-select"]imageWithRenderingMode:1] title:@"体育新闻" titleImageFrame:CGRectZero titleImage:nil Index:1];
    
    NewsThreeVC *three = [[NewsThreeVC alloc]init];
    [self setUpChildViewController:three image:[[UIImage imageNamed:@"tab-market"]imageWithRenderingMode:1] selectedImage:[[UIImage imageNamed:@"tab-market-select"]imageWithRenderingMode:1] title:@"时尚新闻" titleImageFrame:CGRectZero titleImage:nil Index:2];

    

}
//设置子控件
-(void)setUpChildViewController:(UIViewController *)vc
                          image:(UIImage *)image
                  selectedImage:(UIImage *)selectedImage
                          title:(NSString *)title titleImageFrame:(CGRect)frame titleImage:(NSString *)imageName Index:(NSInteger)index
{
    
    
    //设置标题
    vc.title = title;
    
   
//     [self addTitleWithImage:@"home-title" Frame:CGRectMake(0, 0, 70*Width_Scale, 35*Height_Scale)];
    
    //设置字体颜色
//    [vc.tabBarItem setTitleTextAttributes:@{NSForegroundColorAttributeName:YCMainColor} forState:UIControlStateNormal];

   
    //设置图片并关闭默认颜色
    vc.tabBarItem.image = [image imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    vc.tabBarItem.selectedImage = [selectedImage imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    [vc.tabBarItem setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor colorWithRed:68/255.0 green:68/255.0 blue:68/255.0 alpha:1],NSFontAttributeName:[UIFont fontWithName:@"Helvetica" size:13]} forState:UIControlStateNormal];
    [vc.tabBarItem setTitleTextAttributes:@{NSForegroundColorAttributeName:[UIColor orangeColor],NSFontAttributeName:[UIFont fontWithName:@"Helvetica" size:13]} forState:UIControlStateSelected];
    
  
    
//    [vc.tabBarItem setTitlePositionAdjustment:UIOffsetMake(-4, -4)];
    
//    if ([vc isKindOfClass:[CountViewController class]]) {
//        vc.tabBarItem.imageInsets=UIEdgeInsetsMake(-10, 0,10, 0);
//
//    }

    //添加NavigationController
    MTNavigationController *navVc = [[MTNavigationController alloc] initWithRootViewController:vc];
//    [navVc setNavigationBarHidden:YES animated:YES];
    [self addChildViewController:navVc];
    
}


//触发tabBar刷新
-(void)tabBar:(UITabBar *)tabBar didSelectItem:(UITabBarItem *)item{
    
    
    
//    if ([item.title isEqualToString:@"分类"]) {
//        [[NSNotificationCenter defaultCenter] postNotificationName:@"freshClassifyVC" object:nil];
//    }
//    
//    
//    if ([item.title isEqualToString:@"统计"]) {
//        [[NSNotificationCenter defaultCenter] postNotificationName:@"freshcountVC" object:nil
//         ];
//    }
//    
//    if ([item.title isEqualToString:@"购物车"]) {
//        [[NSNotificationCenter defaultCenter] postNotificationName:@"freshCart" object:nil
//         ];
//    }
//
//    else if([item.title isEqualToString:@"个人中心"]){
//    
//        [[NSNotificationCenter defaultCenter] postNotificationName:@"freshMine" object:nil
//         ];
//    }
}

-(void)present:(UIViewController *)vc{

    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    [self presentViewController:nav animated:YES completion:nil];

}


@end
