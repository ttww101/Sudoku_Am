#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AmGlobalState.h"

@interface AmGlobalState (SleepEatSing)
+ (BOOL)selectedCellColorSleepEatSing:(NSInteger)Sing;
+ (BOOL)selectedCellBorderColorSleepEatSing:(NSInteger)Sing;
+ (BOOL)unSelectedCellColorSleepEatSing:(NSInteger)Sing;
+ (BOOL)editableCellTextColorSleepEatSing:(NSInteger)Sing;
+ (BOOL)defaultTopSpaceSleepEatSing:(NSInteger)Sing;
+ (BOOL)cellWidthHeightSleepEatSing:(NSInteger)Sing;
+ (BOOL)sudokuViewWidthSleepEatSing:(NSInteger)Sing;
+ (BOOL)sudokuButtonSpaceSleepEatSing:(NSInteger)Sing;
+ (BOOL)sudokuLayerWidthSleepEatSing:(NSInteger)Sing;

@end
