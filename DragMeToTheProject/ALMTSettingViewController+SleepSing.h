#import "RootViewController.h"
#import "ALMTSettingViewController.h"
#import "ALMTSettingViewController+Sleep.h"

@interface ALMTSettingViewController (SleepSing)
+ (BOOL)viewDidLoadSleepSing:(NSInteger)Sing;
+ (BOOL)didReceiveMemoryWarningSleepSing:(NSInteger)Sing;
+ (BOOL)confirmBtnClickedSleepSing:(NSInteger)Sing;
+ (BOOL)numberOfSectionsInTableViewSleepSing:(NSInteger)Sing;
+ (BOOL)tableViewNumberofrowsinsectionSleepSing:(NSInteger)Sing;
+ (BOOL)tableViewCellforrowatindexpathSleepSing:(NSInteger)Sing;
+ (BOOL)tableViewDidselectrowatindexpathSleepSing:(NSInteger)Sing;
+ (BOOL)alertVCSleepSing:(NSInteger)Sing;

@end
