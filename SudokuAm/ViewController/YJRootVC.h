
#import <UIKit/UIKit.h>

@interface YJRootVC : UIViewController <UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, assign) CGFloat SecondHeight;

@property (nonatomic, strong) UITableView  *tableView;
-(void)addTitleWithTitle:(NSString *) title;
@end
