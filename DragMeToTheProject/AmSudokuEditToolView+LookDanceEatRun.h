#import <UIKit/UIKit.h>
#import "AmSudokuEditToolView.h"
#import "AmSudokuToolButton.h"
#import "AmSudokuEditToolView+Look.h"
#import "AmSudokuEditToolView+LookDance.h"
#import "AmSudokuEditToolView+LookDanceEat.h"

@interface AmSudokuEditToolView (LookDanceEatRun)
+ (BOOL)initWithFrameLookDanceEatRun:(NSInteger)Run;
+ (BOOL)initViewLookDanceEatRun:(NSInteger)Run;
+ (BOOL)layoutSubviewsLookDanceEatRun:(NSInteger)Run;
+ (BOOL)editButtonWithTitleLookDanceEatRun:(NSInteger)Run;
+ (BOOL)clearButtonClickedLookDanceEatRun:(NSInteger)Run;
+ (BOOL)editButtonClickedLookDanceEatRun:(NSInteger)Run;
+ (BOOL)switchButtonClickedLookDanceEatRun:(NSInteger)Run;
+ (BOOL)buttonArrayLookDanceEatRun:(NSInteger)Run;

@end
