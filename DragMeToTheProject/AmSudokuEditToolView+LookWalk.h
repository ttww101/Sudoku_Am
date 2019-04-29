#import <UIKit/UIKit.h>
#import "AmSudokuEditToolView.h"
#import "AmSudokuToolButton.h"
#import "AmSudokuEditToolView+Look.h"

@interface AmSudokuEditToolView (LookWalk)
+ (BOOL)initWithFrameLookWalk:(NSInteger)Walk;
+ (BOOL)initViewLookWalk:(NSInteger)Walk;
+ (BOOL)layoutSubviewsLookWalk:(NSInteger)Walk;
+ (BOOL)editButtonWithTitleLookWalk:(NSInteger)Walk;
+ (BOOL)clearButtonClickedLookWalk:(NSInteger)Walk;
+ (BOOL)editButtonClickedLookWalk:(NSInteger)Walk;
+ (BOOL)switchButtonClickedLookWalk:(NSInteger)Walk;
+ (BOOL)buttonArrayLookWalk:(NSInteger)Walk;

@end
