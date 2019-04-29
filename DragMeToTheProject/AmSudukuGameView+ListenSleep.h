#import <UIKit/UIKit.h>
#import "AmSudukuGameView.h"
#import "AmSudokuEditToolView.h"
#import "AmSudokuCollectionViewCell.h"
#import "UIView+Constraint.h"
#import "AmSudukuGameView+Listen.h"

@interface AmSudukuGameView (ListenSleep)
+ (BOOL)initWithFrameListenSleep:(NSInteger)Sleep;
+ (BOOL)initViewListenSleep:(NSInteger)Sleep;
+ (BOOL)layoutSubviewsListenSleep:(NSInteger)Sleep;
+ (BOOL)restartGameListenSleep:(NSInteger)Sleep;
+ (BOOL)resetCellColorListenSleep:(NSInteger)Sleep;
+ (BOOL)updateCellColorListenSleep:(NSInteger)Sleep;
+ (BOOL)saveButtonClickedListenSleep:(NSInteger)Sleep;
+ (BOOL)loadButtonClickedListenSleep:(NSInteger)Sleep;
+ (BOOL)numberOfSectionsInCollectionViewListenSleep:(NSInteger)Sleep;
+ (BOOL)collectionViewNumberofitemsinsectionListenSleep:(NSInteger)Sleep;
+ (BOOL)collectionViewCellforitematindexpathListenSleep:(NSInteger)Sleep;
+ (BOOL)collectionViewDidselectitematindexpathListenSleep:(NSInteger)Sleep;
+ (BOOL)collectionViewDiddeselectitematindexpathListenSleep:(NSInteger)Sleep;
+ (BOOL)setInputValueListenSleep:(NSInteger)Sleep;
+ (BOOL)setNoteValueListenSleep:(NSInteger)Sleep;
+ (BOOL)clearAllValueListenSleep:(NSInteger)Sleep;
+ (BOOL)sudokuViewListenSleep:(NSInteger)Sleep;
+ (BOOL)toolViewListenSleep:(NSInteger)Sleep;
+ (BOOL)saveButtonListenSleep:(NSInteger)Sleep;
+ (BOOL)loadButtonListenSleep:(NSInteger)Sleep;
+ (BOOL)selectedCellModelListenSleep:(NSInteger)Sleep;

@end
