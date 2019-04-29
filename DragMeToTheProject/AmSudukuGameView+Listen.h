#import <UIKit/UIKit.h>
#import "AmSudukuGameView.h"
#import "AmSudokuEditToolView.h"
#import "AmSudokuCollectionViewCell.h"
#import "UIView+Constraint.h"

@interface AmSudukuGameView (Listen)
+ (BOOL)initWithFrameListen:(NSInteger)Listen;
+ (BOOL)initViewListen:(NSInteger)Listen;
+ (BOOL)layoutSubviewsListen:(NSInteger)Listen;
+ (BOOL)restartGameListen:(NSInteger)Listen;
+ (BOOL)resetCellColorListen:(NSInteger)Listen;
+ (BOOL)updateCellColorListen:(NSInteger)Listen;
+ (BOOL)saveButtonClickedListen:(NSInteger)Listen;
+ (BOOL)loadButtonClickedListen:(NSInteger)Listen;
+ (BOOL)numberOfSectionsInCollectionViewListen:(NSInteger)Listen;
+ (BOOL)collectionViewNumberofitemsinsectionListen:(NSInteger)Listen;
+ (BOOL)collectionViewCellforitematindexpathListen:(NSInteger)Listen;
+ (BOOL)collectionViewDidselectitematindexpathListen:(NSInteger)Listen;
+ (BOOL)collectionViewDiddeselectitematindexpathListen:(NSInteger)Listen;
+ (BOOL)setInputValueListen:(NSInteger)Listen;
+ (BOOL)setNoteValueListen:(NSInteger)Listen;
+ (BOOL)clearAllValueListen:(NSInteger)Listen;
+ (BOOL)sudokuViewListen:(NSInteger)Listen;
+ (BOOL)toolViewListen:(NSInteger)Listen;
+ (BOOL)saveButtonListen:(NSInteger)Listen;
+ (BOOL)loadButtonListen:(NSInteger)Listen;
+ (BOOL)selectedCellModelListen:(NSInteger)Listen;

@end
