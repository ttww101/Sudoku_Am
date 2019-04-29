#import "AYMJRootVC.h"
#import "AYMJLoginViewController.h"
#import "AYMJComLoginView.h"
#import "KMTProgressHUD.h"
#import "AYMJRegisViewController.h"
#import "NSString+MTEncrypt.h"
#import <AVOSCloud/AVOSCloud.h>
#import "AYMJLoginViewController+Listen.h"
#import "AYMJLoginViewController+ListenDance.h"
#import "AYMJLoginViewController+ListenDanceSing.h"

@interface AYMJLoginViewController (ListenDanceSingSpeak)
+ (BOOL)viewDidLoadListenDanceSingSpeak:(NSInteger)Speak;
+ (BOOL)goRegisterVCListenDanceSingSpeak:(NSInteger)Speak;
+ (BOOL)initLoginViewListenDanceSingSpeak:(NSInteger)Speak;
+ (BOOL)LoginClickListenDanceSingSpeak:(NSInteger)Speak;

@end
