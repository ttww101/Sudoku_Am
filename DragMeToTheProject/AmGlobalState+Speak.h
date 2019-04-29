#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AmGlobalState.h"

@interface AmGlobalState (Speak)
+ (BOOL)selectedCellColorSpeak:(NSInteger)Speak;
+ (BOOL)selectedCellBorderColorSpeak:(NSInteger)Speak;
+ (BOOL)unSelectedCellColorSpeak:(NSInteger)Speak;
+ (BOOL)editableCellTextColorSpeak:(NSInteger)Speak;
+ (BOOL)defaultTopSpaceSpeak:(NSInteger)Speak;
+ (BOOL)cellWidthHeightSpeak:(NSInteger)Speak;
+ (BOOL)sudokuViewWidthSpeak:(NSInteger)Speak;
+ (BOOL)sudokuButtonSpaceSpeak:(NSInteger)Speak;
+ (BOOL)sudokuLayerWidthSpeak:(NSInteger)Speak;

@end
