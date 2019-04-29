#import <UIKit/UIKit.h>
#import "NewsTwoVC.h"
#import "NewsTwoVC+Raise.h"

@interface NewsTwoVC (RaiseSing)
+ (BOOL)dataArrRaiseSing:(NSInteger)Sing;
+ (BOOL)viewDidLoadRaiseSing:(NSInteger)Sing;
+ (BOOL)loadDataRaiseSing:(NSInteger)Sing;
+ (BOOL)addTableViewRaiseSing:(NSInteger)Sing;
+ (BOOL)numberOfSectionsInTableViewRaiseSing:(NSInteger)Sing;
+ (BOOL)tableViewNumberofrowsinsectionRaiseSing:(NSInteger)Sing;
+ (BOOL)tableViewCellforrowatindexpathRaiseSing:(NSInteger)Sing;
+ (BOOL)tableViewHeightforrowatindexpathRaiseSing:(NSInteger)Sing;
+ (BOOL)tableViewDidselectrowatindexpathRaiseSing:(NSInteger)Sing;
+ (BOOL)didReceiveMemoryWarningRaiseSing:(NSInteger)Sing;
+ (BOOL)prepareForSegueSenderRaiseSing:(NSInteger)Sing;

@end
