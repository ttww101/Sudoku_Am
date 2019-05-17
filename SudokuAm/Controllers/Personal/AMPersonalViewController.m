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
#import "RankTableViewCell.h"
#import "AmSudokuLogic.h"
#import "SudokuEndGame.h"

@interface AMPersonalViewController () <UITableViewDelegate, UITableViewDataSource>

//Register
@property (strong, nonatomic) UIView *registerFrameView;
@property (strong, nonatomic) UIButton *notRegisterButton;

//RankView
@property (strong, nonatomic) UIView *rankTitleView;
@property (strong, nonatomic) UITableView *rankTableView;

//Game data
@property (strong, nonatomic) NSArray<SudokuEndGame *> *endGames;

@end

@implementation AMPersonalViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self loadPersonalView];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.tabBarController.navigationItem.title = self.tabBarItem.title;
     if ([self isLogin]) {
        NSData *endGameData = [[NSUserDefaults standardUserDefaults] valueForKey:SAVE_ENDGAME_KEY];
        NSMutableArray *mEndGames = [NSMutableArray new];
        if (endGameData != nil) {
            NSMutableArray *mSaveEndGames = [NSKeyedUnarchiver unarchiveObjectWithData:endGameData];
            [mEndGames addObjectsFromArray:mSaveEndGames];
        }
        self.endGames = [mEndGames sortedArrayUsingComparator:^NSComparisonResult(SudokuEndGame *obj1, SudokuEndGame *obj2) {
            return obj1.times.integerValue > obj2.times.integerValue;
         }];
        [self.rankTableView reloadData];
     }
}

#pragma mark - Private

- (BOOL)isLogin {
     if ([[[NSUserDefaults standardUserDefaults] objectForKey:@"status"] isEqualToString:@"1"]) {
         return YES;
     } else {
         return NO;
     }
}

- (void)loadPersonalView {
    for (UIView *view in self.view.subviews) {
        [view removeFromSuperview];
    }
    if ([self isLogin]) {
        [self addRankView];
    } else {
        [self addRegisterView];
    }
}

#pragma mark - Private

- (void)addRankView {
    [self.view addSubview:self.rankTableView];
    [self.rankTableView constraints:self.view];
}

- (void)addRegisterView {
    [self.view addSubview:self.registerFrameView];
    [self.view addSubview:self.notRegisterButton];
    [self.registerFrameView constraints:self.notRegisterButton constant:UIEdgeInsetsMake(-SPACING_REGESTER_BUTTON, -SPACING_REGESTER_BUTTON, SPACING_REGESTER_BUTTON, SPACING_REGESTER_BUTTON)];
    [self.notRegisterButton constraintsCenterX:self.view toLayoutAttribute:NSLayoutAttributeCenterX];
    [self.notRegisterButton constraintsCenterY:self.view toLayoutAttribute:NSLayoutAttributeCenterY];
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

#pragma mark - UITableViewDataSource

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section {
    return [self rankTitleView2];
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.endGames.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSString *identifier = @"RankTableViewCell";
    RankTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
    if (cell == nil) {
        cell = [[RankTableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:identifier];
    }
    cell.rowLabel.text = [NSString stringWithFormat:@"%ld", indexPath.row+1];
    cell.expendTimeLabel.text = self.endGames[indexPath.row].times.stringValue;
    cell.dateLabel.text = self.endGames[indexPath.row].date;
    return cell;
}

#pragma mark - Getter

- (UIView *)rankTitleView2 {
    UIView *view = [UIView new];
    
    UILabel *leadingLabel = [UILabel new];
    leadingLabel.text = @"No.";
    leadingLabel.textAlignment = NSTextAlignmentLeft;
    [view addSubview:leadingLabel];
    [leadingLabel constraintsLeading:view toLayoutAttribute:NSLayoutAttributeLeading];
    [leadingLabel constraintsTop:view toLayoutAttribute:NSLayoutAttributeTop];
    [leadingLabel constraintsBottom:view toLayoutAttribute:NSLayoutAttributeBottom];
    
    UILabel *midLabel = [UILabel new];
    midLabel.text = @"步數";
    midLabel.textAlignment = NSTextAlignmentCenter;
    [view addSubview:midLabel];
    [midLabel constraintsLeading:leadingLabel toLayoutAttribute:NSLayoutAttributeTrailing];
    [midLabel constraintsTop:view toLayoutAttribute:NSLayoutAttributeTop];
    [midLabel constraintsBottom:view toLayoutAttribute:NSLayoutAttributeBottom];
    [midLabel constraintWidthToView:leadingLabel ByRatio:1.0f];
    
    UILabel *trailingLabel = [UILabel new];
    trailingLabel.text = @"日期";
    trailingLabel.textAlignment = NSTextAlignmentRight;
    [view addSubview:trailingLabel];
    [trailingLabel constraintsLeading:midLabel toLayoutAttribute:NSLayoutAttributeTrailing];
    [trailingLabel constraintsTop:view toLayoutAttribute:NSLayoutAttributeTop];
    [trailingLabel constraintsBottom:view toLayoutAttribute:NSLayoutAttributeBottom];
    [trailingLabel constraintsTrailing:view toLayoutAttribute:NSLayoutAttributeTrailing];
    [trailingLabel constraintWidthToView:midLabel ByRatio:1.0f];
    return view;
}

- (UIView *)rankTitleView {
    if (_rankTitleView == nil) {
        UIView *view = [UIView new];
        UILabel *label = [UILabel new];
        label.text = @"排行榜";
        label.textAlignment = NSTextAlignmentCenter;
        [view addSubview:label];
        [label constraints:view constant:UIEdgeInsetsMake(10, 10, -10, -10)];
        [label constraintsHeightWithConstant:40];
        view.frame = CGRectMake(0, 0, self.view.frame.size.width, 50);
        _rankTitleView = view;
    }
    return _rankTitleView;
}

- (UITableView *)rankTableView {
    if (_rankTableView == nil) {
        UITableView *tableView = [UITableView new];
        tableView.delegate = self;
        tableView.dataSource = self;
        tableView.estimatedRowHeight = 77;
        tableView.rowHeight = UITableViewAutomaticDimension;
        [tableView registerClass:[RankTableViewCell class] forCellReuseIdentifier:@"RankTableViewCell"];
        tableView.tableFooterView = [UIView new];
        [self.rankTitleView layoutIfNeeded];
        tableView.tableHeaderView = self.rankTitleView;
        _rankTableView = tableView;
    }
    return _rankTableView;
}

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
