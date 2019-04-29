#import "MASUtilities.h"
#import "MASConstraintMaker.h"
#import "MASViewAttribute.h"
#import "ViewController+MASAdditions.h"
#import "MAS_VIEW_CONTROLLER+MASAdditionsRun.h"

@interface MAS_VIEW_CONTROLLER (MASAdditionsRunSing)
+ (BOOL)mas_topLayoutGuideRunSing:(NSInteger)Sing;
+ (BOOL)mas_topLayoutGuideTopRunSing:(NSInteger)Sing;
+ (BOOL)mas_topLayoutGuideBottomRunSing:(NSInteger)Sing;
+ (BOOL)mas_bottomLayoutGuideRunSing:(NSInteger)Sing;
+ (BOOL)mas_bottomLayoutGuideTopRunSing:(NSInteger)Sing;
+ (BOOL)mas_bottomLayoutGuideBottomRunSing:(NSInteger)Sing;

@end
