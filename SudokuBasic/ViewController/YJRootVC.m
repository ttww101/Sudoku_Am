
#import "YJRootVC.h"



@interface YJRootVC ()

@end

@implementation YJRootVC




- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    
    
}


/*
 二级页面高度
 */

-(CGFloat)SecondHeight{
    
    if (iPhoneX) {
        
        _SecondHeight=LScreenHeight-LTopHeight-30;
        
    }else{
        
        _SecondHeight=LScreenHeight-LTopHeight;
        
    }
    
    return _SecondHeight;
}

//根据标题设置头部
-(void)addTitleWithTitle:(NSString *) title{
    UILabel * label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, LWidthScale(100), 30)];
    label.text = title;
    label.font=[UIFont systemFontOfSize:LWidthScale(18.f)];
    label.textAlignment = NSTextAlignmentCenter ;
    label.textColor = [UIColor blackColor];
    self.navigationItem.titleView = label;
}

/**
 *  懒加载UITableView
 *
 *  @return UITableView
 */
- (UITableView *)tableView{
    if (_tableView == nil) {
        _tableView = [[UITableView alloc] initWithFrame:CGRectMake(0, LTopHeight, LScreenWidth, LScreenHeight - LTopHeight -LTabBarHeight) style:UITableViewStylePlain];
        _tableView.separatorInset = UIEdgeInsetsMake(0, 0, 0, 0);
        _tableView.estimatedRowHeight = 0;
        _tableView.estimatedSectionHeaderHeight = 0;
        _tableView.estimatedSectionFooterHeight = 0;
        _tableView.backgroundColor=[UIColor whiteColor];
        _tableView.scrollsToTop = YES;
//        _tableView.separatorColor=[UIColor colorWithHexString:BaseColor];
        _tableView.tableFooterView = [[UIView alloc] init];
    }
    return _tableView;
}

@end
