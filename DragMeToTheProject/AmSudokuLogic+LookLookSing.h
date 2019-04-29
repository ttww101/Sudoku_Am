#import <Foundation/Foundation.h>
#import "AmSudokuLogic.h"
#import "AMSodukuCellModel.h"
#import "AmSudukuGameView.h"
#import "AmSudokuLogic+Look.h"
#import "AmSudokuLogic+LookLook.h"

@interface AmSudokuLogic (LookLookSing)
+ (BOOL)sharedInstanceLookLookSing:(NSInteger)Sing;
+ (BOOL)createSudokuArrayLookLookSing:(NSInteger)Sing;
+ (BOOL)initValidlistWithXYLookLookSing:(NSInteger)Sing;
+ (BOOL)fillModelWithXYLookLookSing:(NSInteger)Sing;
+ (BOOL)isValidWithXYValueLookLookSing:(NSInteger)Sing;
+ (BOOL)initBlankModelWithLevelLookLookSing:(NSInteger)Sing;
+ (BOOL)getRandomNumberToLookLookSing:(NSInteger)Sing;
+ (BOOL)clearModelValueLookLookSing:(NSInteger)Sing;
+ (BOOL)saveGameFileWithKeyLookLookSing:(NSInteger)Sing;
+ (BOOL)loadGameFileAndRestartWithKeyLookLookSing:(NSInteger)Sing;
+ (BOOL)restartGameLookLookSing:(NSInteger)Sing;
+ (BOOL)initGameDataLookLookSing:(NSInteger)Sing;
+ (BOOL)modelWithXYLookLookSing:(NSInteger)Sing;
+ (BOOL)valueWithXYLookLookSing:(NSInteger)Sing;
+ (BOOL)isGameOverLookLookSing:(NSInteger)Sing;
+ (BOOL)setGameLevelLookLookSing:(NSInteger)Sing;
+ (BOOL)modelArrayLookLookSing:(NSInteger)Sing;

@end
