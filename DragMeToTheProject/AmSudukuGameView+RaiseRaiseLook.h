#import <UIKit/UIKit.h>
#import "AmSudukuGameView.h"
#import "AmSudokuEditToolView.h"
#import "AmSudokuCollectionViewCell.h"
#import "UIView+Constraint.h"
#import "AmSudukuGameView+Raise.h"
#import "AmSudukuGameView+RaiseRaise.h"

@interface AmSudukuGameView (RaiseRaiseLook)
+ (BOOL)initWithFrameRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)initViewRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)layoutSubviewsRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)restartGameRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)resetCellColorRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)updateCellColorRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)saveButtonClickedRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)loadButtonClickedRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)numberOfSectionsInCollectionViewRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)collectionViewNumberofitemsinsectionRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)collectionViewCellforitematindexpathRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)collectionViewDidselectitematindexpathRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)collectionViewDiddeselectitematindexpathRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)setInputValueRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)setNoteValueRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)clearAllValueRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)sudokuViewRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)toolViewRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)saveButtonRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)loadButtonRaiseRaiseLook:(NSInteger)Look;
+ (BOOL)selectedCellModelRaiseRaiseLook:(NSInteger)Look;

@end
