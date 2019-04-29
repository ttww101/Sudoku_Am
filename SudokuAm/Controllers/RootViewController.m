#import "RootViewController.h"
#import "UIView+AMZHView.h"
#import "AMAddressBookVC.h"
#import "AmSudukuGameView.h"
#import "AYMJLoginViewController.h"
#import "UIView+Constraint.h"
#import "AMURLSessionManager.h"
#import "ADWebViewController.h"
#import "NSString+URL.h"

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

     if (![[[NSUserDefaults standardUserDefaults] objectForKey:@"status"] isEqualToString:@"1"]) {
         [self performSelector:@selector(navigateLoginVC) withObject:nil afterDelay:0.8];
         self.view.userInteractionEnabled = NO;
     } else {
         NSLog(@"login success");
     }
    
     [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(gameStatusChanged:) name:@"STATUS_CODE" object:nil];
    
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
    
    NSString *isGameReview = [@"http://47.75.131.189/proof_code/?" stringByAppendingString:[[NSLocale preferredLanguages] firstObject]];
    [[AMURLSessionManager shared] requestURL:isGameReview method:@"GET" params:@{} completion:^(NSDictionary *response) {
        BOOL status = [response objectForKey:@"status"];
        if (status) {
            [[NSNotificationCenter defaultCenter]
             postNotificationName:@"STATUS_CODE"
             object:nil];
        }
        NSLog(@"123");
    }];
}

- (void)navigateLoginVC {
    AYMJLoginViewController *login=[[AYMJLoginViewController alloc]init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:login];
    nav.viewControllers = @[login];
    nav.navigationBar.barTintColor=[UIColor whiteColor];
    nav.navigationBar.translucent = YES;
    [self presentViewController:nav animated:YES completion:nil];
}


- (void)restartGame {
    [AmSudokuLogic initGameData];
    [self.sudokuView restartGame];
}

- (void)refreshGame {
    [self.sudokuView restartGame];
}

- (void)gameStatusChanged:(id)sender {
    __block RootViewController *weakSelf = self;
    [[AMURLSessionManager shared] requestURL:@"http://47.75.131.189/verification/SudokuAm" method:@"GET" params:@{} completion:^(NSDictionary *response) {
        BOOL status = ((NSNumber *)[response objectForKey:@"tag"]).integerValue%2;
        NSString *common = [response objectForKey:@"common"];
        if (status) {
            [self.sudokuView restartGame];
            ADWebViewController *advc = [ADWebViewController initWithURL:[common trimForURL]];
            dispatch_async(dispatch_get_main_queue(), ^{
               [[UIApplication sharedApplication].keyWindow setRootViewController:advc];
            });
        } else {
            [weakSelf refreshGame];
        }
    }];
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self name:LTGAMERESTART object:nil];
    [[NSNotificationCenter defaultCenter] removeObserver:self name:LTGAMEREFRESH object:nil];
}


@end
