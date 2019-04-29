#import <UIKit/UIKit.h>
#import "AmSudokuEditToolView.h"
#import "AmSudokuToolButton.h"
#import "AmSudokuEditToolView+Look.h"
#import "AmSudokuEditToolView+LookWalk.h"

@interface AmSudokuEditToolView (LookWalkRaise)
+ (BOOL)initWithFrameLookWalkRaise:(NSInteger)Raise;
+ (BOOL)initViewLookWalkRaise:(NSInteger)Raise;
+ (BOOL)layoutSubviewsLookWalkRaise:(NSInteger)Raise;
+ (BOOL)editButtonWithTitleLookWalkRaise:(NSInteger)Raise;
+ (BOOL)clearButtonClickedLookWalkRaise:(NSInteger)Raise;
+ (BOOL)editButtonClickedLookWalkRaise:(NSInteger)Raise;
+ (BOOL)switchButtonClickedLookWalkRaise:(NSInteger)Raise;
+ (BOOL)buttonArrayLookWalkRaise:(NSInteger)Raise;

@end
