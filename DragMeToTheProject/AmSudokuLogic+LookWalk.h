#import <Foundation/Foundation.h>
#import "AmSudokuLogic.h"
#import "AMSodukuCellModel.h"
#import "AmSudukuGameView.h"
#import "AmSudokuLogic+Look.h"

@interface AmSudokuLogic (LookWalk)
+ (BOOL)sharedInstanceLookWalk:(NSInteger)Walk;
+ (BOOL)createSudokuArrayLookWalk:(NSInteger)Walk;
+ (BOOL)initValidlistWithXYLookWalk:(NSInteger)Walk;
+ (BOOL)fillModelWithXYLookWalk:(NSInteger)Walk;
+ (BOOL)isValidWithXYValueLookWalk:(NSInteger)Walk;
+ (BOOL)initBlankModelWithLevelLookWalk:(NSInteger)Walk;
+ (BOOL)getRandomNumberToLookWalk:(NSInteger)Walk;
+ (BOOL)clearModelValueLookWalk:(NSInteger)Walk;
+ (BOOL)saveGameFileWithKeyLookWalk:(NSInteger)Walk;
+ (BOOL)loadGameFileAndRestartWithKeyLookWalk:(NSInteger)Walk;
+ (BOOL)restartGameLookWalk:(NSInteger)Walk;
+ (BOOL)initGameDataLookWalk:(NSInteger)Walk;
+ (BOOL)modelWithXYLookWalk:(NSInteger)Walk;
+ (BOOL)valueWithXYLookWalk:(NSInteger)Walk;
+ (BOOL)isGameOverLookWalk:(NSInteger)Walk;
+ (BOOL)setGameLevelLookWalk:(NSInteger)Walk;
+ (BOOL)modelArrayLookWalk:(NSInteger)Walk;

@end
