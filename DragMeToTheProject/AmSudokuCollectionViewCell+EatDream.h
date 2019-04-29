#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"
#import "AmSudokuCollectionViewCell.h"
#import "AmSudokuCollectionViewCell+Eat.h"

@interface AmSudokuCollectionViewCell (EatDream)
+ (BOOL)initWithFrameEatDream:(NSInteger)Dream;
+ (BOOL)initViewEatDream:(NSInteger)Dream;
+ (BOOL)layoutSubviewsEatDream:(NSInteger)Dream;
+ (BOOL)setModelEatDream:(NSInteger)Dream;
+ (BOOL)valueLabelEatDream:(NSInteger)Dream;
+ (BOOL)noteLabelArrayEatDream:(NSInteger)Dream;
+ (BOOL)borderLayerEatDream:(NSInteger)Dream;

@end
