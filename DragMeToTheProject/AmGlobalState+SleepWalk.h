#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AmGlobalState.h"

@interface AmGlobalState (SleepWalk)
+ (BOOL)selectedCellColorSleepWalk:(NSInteger)Walk;
+ (BOOL)selectedCellBorderColorSleepWalk:(NSInteger)Walk;
+ (BOOL)unSelectedCellColorSleepWalk:(NSInteger)Walk;
+ (BOOL)editableCellTextColorSleepWalk:(NSInteger)Walk;
+ (BOOL)defaultTopSpaceSleepWalk:(NSInteger)Walk;
+ (BOOL)cellWidthHeightSleepWalk:(NSInteger)Walk;
+ (BOOL)sudokuViewWidthSleepWalk:(NSInteger)Walk;
+ (BOOL)sudokuButtonSpaceSleepWalk:(NSInteger)Walk;
+ (BOOL)sudokuLayerWidthSleepWalk:(NSInteger)Walk;

@end
