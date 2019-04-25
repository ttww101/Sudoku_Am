//
//  NewsThreeVC.m
//  Borrowing treasure
//
//  Created by  何浩贤 on 2017/12/8.
//  Copyright © 2017年 com.BorrowingTreasure.yijia. All rights reserved.
//

#import "NewsThreeVC.h"

@interface NewsThreeVC ()
@property (nonatomic, strong) NSMutableArray *dataArr;
@end

@implementation NewsThreeVC

-(NSMutableArray *)dataArr{
    
    if (!_dataArr) {
        _dataArr = [NSMutableArray array];
    }
    return _dataArr;
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    [self loadData];
    
    [self addTableView];
    
    
}


-(void)loadData{
    
    [NetWorkTools GetUrl:@"http://v.juhe.cn/toutiao/index?type=shishang&key=9c4dc4b86f616ef69d4dde1f4a146ce4" param:nil success:^(id responseObject) {
        
        
        if ([[responseObject objectForKey:@"reason"] isEqualToString:@"成功的返回"]) {
            
            [self.dataArr removeAllObjects];
            
            NSDictionary *dic = [responseObject objectForKey:@"result"];
            
            self.dataArr = [NewsOneModel mj_objectArrayWithKeyValuesArray:[dic objectForKey:@"data"]];
            
            [self.tableView reloadData];
        }
        
        
    } failure:^(NSError *error) {
        
    }];
    
}


-(void)addTableView{
    
    self.tableView = [[UITableView alloc]initWithFrame:CGRectMake(0, 0, Screen_Width, Screen_Height) style:0];
    self.tableView.delegate = self;
    self.tableView.dataSource = self;
    [self.view addSubview:self.tableView];
    
    [self.tableView registerClass:[NewsOneCell class] forCellReuseIdentifier:@"NewsOneCell"];
}

-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    
    return 1;
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    
    return self.dataArr.count;
    
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    NewsOneCell *cell = [tableView dequeueReusableCellWithIdentifier:@"NewsOneCell"];
    if (cell == nil) {
        cell = [[NewsOneCell alloc]initWithStyle:0 reuseIdentifier:@"NewsOneCell"];
    }
    
    NewsOneModel *model = self.dataArr[indexPath.row];
    
    [cell setModel:model];
    
    return cell;
    
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    
    
    return 60*Height_Scale;
    
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    
    NewsOneDetailVC *vc = [[NewsOneDetailVC alloc]init];
    NewsOneModel *model = self.dataArr[indexPath.row];
    vc.model = model;
    [self.navigationController pushViewController:vc animated:YES];
    
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
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
