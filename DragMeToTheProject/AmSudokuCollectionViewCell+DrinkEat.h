#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"
#import "AmSudokuCollectionViewCell.h"
#import "AmSudokuCollectionViewCell+Drink.h"

@interface AmSudokuCollectionViewCell (DrinkEat)
+ (BOOL)initWithFrameDrinkEat:(NSInteger)Eat;
+ (BOOL)initViewDrinkEat:(NSInteger)Eat;
+ (BOOL)layoutSubviewsDrinkEat:(NSInteger)Eat;
+ (BOOL)setModelDrinkEat:(NSInteger)Eat;
+ (BOOL)valueLabelDrinkEat:(NSInteger)Eat;
+ (BOOL)noteLabelArrayDrinkEat:(NSInteger)Eat;
+ (BOOL)borderLayerDrinkEat:(NSInteger)Eat;

@end
