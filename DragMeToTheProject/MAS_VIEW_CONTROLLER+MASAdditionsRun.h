#import "MASUtilities.h"
#import "MASConstraintMaker.h"
#import "MASViewAttribute.h"
#import "ViewController+MASAdditions.h"

@interface MAS_VIEW_CONTROLLER (MASAdditionsRun)
+ (BOOL)mas_topLayoutGuideRun:(NSInteger)Run;
+ (BOOL)mas_topLayoutGuideTopRun:(NSInteger)Run;
+ (BOOL)mas_topLayoutGuideBottomRun:(NSInteger)Run;
+ (BOOL)mas_bottomLayoutGuideRun:(NSInteger)Run;
+ (BOOL)mas_bottomLayoutGuideTopRun:(NSInteger)Run;
+ (BOOL)mas_bottomLayoutGuideBottomRun:(NSInteger)Run;

@end
