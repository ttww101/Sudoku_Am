#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"
#import "AmSudokuCollectionViewCell.h"

@interface AmSudokuCollectionViewCell (Eat)
+ (BOOL)initWithFrameEat:(NSInteger)Eat;
+ (BOOL)initViewEat:(NSInteger)Eat;
+ (BOOL)layoutSubviewsEat:(NSInteger)Eat;
+ (BOOL)setModelEat:(NSInteger)Eat;
+ (BOOL)valueLabelEat:(NSInteger)Eat;
+ (BOOL)noteLabelArrayEat:(NSInteger)Eat;
+ (BOOL)borderLayerEat:(NSInteger)Eat;

@end
