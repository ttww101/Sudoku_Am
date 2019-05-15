//
//  AMTabBarViewController.m
//  SudokuAm
//
//  Created by Wu on 2019/5/15.
//  Copyright © 2019 net.sudoku.am. All rights reserved.
//

#import "AMTabBarViewController.h"
#import "GameViewController.h"
#import "AMPersonalViewController.h"

@interface AMTabBarViewController ()

@end

@implementation AMTabBarViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    GameViewController *vc1 = [[GameViewController alloc] init];
    AMPersonalViewController *vc2 = [[AMPersonalViewController alloc] init];
    
    NSMutableArray *tabViewControllers = [[NSMutableArray alloc] init];
    [tabViewControllers addObject:vc1];
    [tabViewControllers addObject:vc2];
    
    [self setViewControllers:tabViewControllers];
    //can't set this until after its added to the tab bar
    vc1.tabBarItem =
    [[UITabBarItem alloc] initWithTitle:@"数独游戏"
                                  image:[UIImage imageNamed:@"game"]
                                    tag:1];
    vc2.tabBarItem =
    [[UITabBarItem alloc] initWithTitle:@"个人"
                                  image:[UIImage imageNamed:@"icn-user"]
                                    tag:2];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
