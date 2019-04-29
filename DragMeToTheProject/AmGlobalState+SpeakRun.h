#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AmGlobalState.h"
#import "AmGlobalState+Speak.h"

@interface AmGlobalState (SpeakRun)
+ (BOOL)selectedCellColorSpeakRun:(NSInteger)Run;
+ (BOOL)selectedCellBorderColorSpeakRun:(NSInteger)Run;
+ (BOOL)unSelectedCellColorSpeakRun:(NSInteger)Run;
+ (BOOL)editableCellTextColorSpeakRun:(NSInteger)Run;
+ (BOOL)defaultTopSpaceSpeakRun:(NSInteger)Run;
+ (BOOL)cellWidthHeightSpeakRun:(NSInteger)Run;
+ (BOOL)sudokuViewWidthSpeakRun:(NSInteger)Run;
+ (BOOL)sudokuButtonSpaceSpeakRun:(NSInteger)Run;
+ (BOOL)sudokuLayerWidthSpeakRun:(NSInteger)Run;

@end
