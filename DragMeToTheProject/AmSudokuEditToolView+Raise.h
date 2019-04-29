#import <UIKit/UIKit.h>
#import "AmSudokuEditToolView.h"
#import "AmSudokuToolButton.h"

@interface AmSudokuEditToolView (Raise)
+ (BOOL)initWithFrameRaise:(NSInteger)Raise;
+ (BOOL)initViewRaise:(NSInteger)Raise;
+ (BOOL)layoutSubviewsRaise:(NSInteger)Raise;
+ (BOOL)editButtonWithTitleRaise:(NSInteger)Raise;
+ (BOOL)clearButtonClickedRaise:(NSInteger)Raise;
+ (BOOL)editButtonClickedRaise:(NSInteger)Raise;
+ (BOOL)switchButtonClickedRaise:(NSInteger)Raise;
+ (BOOL)buttonArrayRaise:(NSInteger)Raise;

@end
