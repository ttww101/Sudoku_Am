
#import <UIKit/UIKit.h>

@interface AYMJRootVC : UIViewController <UITableViewDelegate,UITableViewDataSource>

@property (nonatomic, assign) CGFloat SecondHeight;

@property (nonatomic, strong) UITableView  *tableView;
-(void)addTitleWithTitle:(NSString *) title;
@end
