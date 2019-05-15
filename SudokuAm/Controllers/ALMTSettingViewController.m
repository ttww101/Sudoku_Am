//
//  ALMTSettingViewController.m
//  AmSoduku
//
//  Created by wu on 2017/9/28.
//  Copyright © 2019年 am. All rights reserved.
//

#import "ALMTSettingViewController.h"
#import "UIView+Constraint.h"

@interface ALMTSettingViewController () <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) UIAlertController *alertVC;

@end

@implementation ALMTSettingViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.title = @"设置";
    [self.view addSubview:self.tableView];
    [self.tableView constraints:self.view];
    [self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"settingCell"];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.tabBarController.navigationItem.title = self.tabBarItem.title;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];

}

# pragma mark - private
- (IBAction)confirmBtnClicked:(id)sender
{
    [AmSudokuLogic restartGame];
    [self.navigationController popViewControllerAnimated:YES];
}

# pragma mark - public


# pragma mark - tableViewDataSource

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return 1;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell;
    
    switch (indexPath.row) {
        case 0:     // 难度选择
            cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:@"settingCell"];
            cell.textLabel.text = @"难度";
            
            cell.detailTextLabel.text = @[@"低级",@"中级",@"高级"][[AmSudokuLogic sharedInstance].gameLevel];
            cell.selectionStyle = UITableViewCellSelectionStyleNone;
            [AmSudokuLogic restartGame];
            break;
            
        default:
            break;
    }
    
    return cell;
}

# pragma mark - tableViewDelegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    switch (indexPath.row) {
        case 0:     // 难度选择
        {
            [self presentViewController:self.alertVC animated:YES completion:nil];
            break;
        }
            
        default:
            break;
    }
}

# pragma mark - lazy get

- (UIAlertController *)alertVC
{
    if (!_alertVC) {
        _alertVC =  [UIAlertController alertControllerWithTitle:@"难度选择" message:nil preferredStyle:UIAlertControllerStyleActionSheet];
        [_alertVC addAction:[UIAlertAction actionWithTitle:@"低级" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
            [AmSudokuLogic setGameLevel:0];
            [self.tableView reloadData];
        }]];
        [_alertVC addAction:[UIAlertAction actionWithTitle:@"中级" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
            [AmSudokuLogic setGameLevel:1];
            [self.tableView reloadData];
        }]];
        [_alertVC addAction:[UIAlertAction actionWithTitle:@"高级" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
            [AmSudokuLogic setGameLevel:2];
            [self.tableView reloadData];
        }]];
        
        [_alertVC addAction:[UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil]];
    }
    
    return _alertVC;
}

- (UITableView *)tableView {
    if (_tableView == nil) {
        UITableView *tableView = [UITableView new];
        tableView.delegate = self;
        tableView.dataSource = self;
        tableView.estimatedRowHeight = 77;
        tableView.rowHeight = UITableViewAutomaticDimension;
        tableView.tableFooterView = [UIView new];
        _tableView = tableView;
    }
    return _tableView;
}


@end
