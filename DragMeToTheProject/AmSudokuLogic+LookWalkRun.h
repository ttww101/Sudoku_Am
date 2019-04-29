#import <Foundation/Foundation.h>
#import "AmSudokuLogic.h"
#import "AMSodukuCellModel.h"
#import "AmSudukuGameView.h"
#import "AmSudokuLogic+Look.h"
#import "AmSudokuLogic+LookWalk.h"

@interface AmSudokuLogic (LookWalkRun)
+ (BOOL)sharedInstanceLookWalkRun:(NSInteger)Run;
+ (BOOL)createSudokuArrayLookWalkRun:(NSInteger)Run;
+ (BOOL)initValidlistWithXYLookWalkRun:(NSInteger)Run;
+ (BOOL)fillModelWithXYLookWalkRun:(NSInteger)Run;
+ (BOOL)isValidWithXYValueLookWalkRun:(NSInteger)Run;
+ (BOOL)initBlankModelWithLevelLookWalkRun:(NSInteger)Run;
+ (BOOL)getRandomNumberToLookWalkRun:(NSInteger)Run;
+ (BOOL)clearModelValueLookWalkRun:(NSInteger)Run;
+ (BOOL)saveGameFileWithKeyLookWalkRun:(NSInteger)Run;
+ (BOOL)loadGameFileAndRestartWithKeyLookWalkRun:(NSInteger)Run;
+ (BOOL)restartGameLookWalkRun:(NSInteger)Run;
+ (BOOL)initGameDataLookWalkRun:(NSInteger)Run;
+ (BOOL)modelWithXYLookWalkRun:(NSInteger)Run;
+ (BOOL)valueWithXYLookWalkRun:(NSInteger)Run;
+ (BOOL)isGameOverLookWalkRun:(NSInteger)Run;
+ (BOOL)setGameLevelLookWalkRun:(NSInteger)Run;
+ (BOOL)modelArrayLookWalkRun:(NSInteger)Run;

@end
