#import "RootViewController.h"
#import "UIView+AMZHView.h"
#import "AMAddressBookVC.h"
#import "AmSudukuGameView.h"
#import "AYMJMineComLoginVC.h"
#import "UIView+Constraint.h"

@interface RootViewController ()<UIAlertViewDelegate>
@property (nonatomic, strong) AmSudukuGameView *sudokuView;
@end


@implementation RootViewController


- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    //审核接口
//    [AMNetWorkTools GetUrl:@"http://APIHOST/appStatus!getstatus.do" param:nil success:^(id responseObject) {
//
//
//        //0审核中，1通过
//        if ([[responseObject objectForKey:@"status"] integerValue] == 1) {
//
    
//            if ([[[NSUserDefaults standardUserDefaults] objectForKey:@"status"] isEqualToString:@"1"]) {
//                [self presentViewController:[[AMAddressBookVC alloc]init] animated:YES completion:nil];
//            }
//            else{
//
//    AYMJMineComLoginVC *login=[[AYMJMineComLoginVC alloc]init];
//            UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:login];
//            nav.viewControllers = @[login];
//            nav.navigationBar.barTintColor=[UIColor whiteColor];
//            nav.navigationBar.translucent = YES;
//            [self presentViewController:nav animated:YES completion:nil];
////
//            //登录成功回调
//            login.block = ^{
//                    [self presentViewController:[[AMAddressBookVC alloc]init] animated:YES completion:nil];
//            };
//
//            }

            
//        }
//        else{
//
    
    UIImageView *bkImageView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"bk"]];
    bkImageView.contentMode = UIViewContentModeScaleToFill;
    [self.view addSubview:bkImageView];
    [bkImageView constraints:self.view];
    
    
    self.sudokuView = [[AmSudukuGameView alloc] initWithFrame:CGRectMake(0,[AmGlobalState defaultTopSpace] + 64, self.view.width, self.view.height - 64)];
        [self.view addSubview:self.sudokuView];
    if (![AmSudokuLogic loadGameFileAndRestartWithKey:LASTGAMEDATA]) {
            [self restartGame];
        }
    
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(restartGame) name:LTGAMERESTART object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(refreshGame) name:LTGAMEREFRESH object:nil];
        
            
//        }
    
//
//    } failure:^(NSError *error) {
//
//    }];

    
    
}


- (void)restartGame
{
    [AmSudokuLogic initGameData];
    [self.sudokuView restartGame];
}

- (void)refreshGame
{
    [self.sudokuView restartGame];
}


- (void)dealloc
{
    [[NSNotificationCenter defaultCenter] removeObserver:self name:LTGAMERESTART object:nil];
    [[NSNotificationCenter defaultCenter] removeObserver:self name:LTGAMEREFRESH object:nil];
}


@end
