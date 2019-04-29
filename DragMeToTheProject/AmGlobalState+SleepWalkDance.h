#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AmGlobalState.h"
#import "AmGlobalState+SleepWalk.h"

@interface AmGlobalState (SleepWalkDance)
+ (BOOL)selectedCellColorSleepWalkDance:(NSInteger)Dance;
+ (BOOL)selectedCellBorderColorSleepWalkDance:(NSInteger)Dance;
+ (BOOL)unSelectedCellColorSleepWalkDance:(NSInteger)Dance;
+ (BOOL)editableCellTextColorSleepWalkDance:(NSInteger)Dance;
+ (BOOL)defaultTopSpaceSleepWalkDance:(NSInteger)Dance;
+ (BOOL)cellWidthHeightSleepWalkDance:(NSInteger)Dance;
+ (BOOL)sudokuViewWidthSleepWalkDance:(NSInteger)Dance;
+ (BOOL)sudokuButtonSpaceSleepWalkDance:(NSInteger)Dance;
+ (BOOL)sudokuLayerWidthSleepWalkDance:(NSInteger)Dance;

@end
