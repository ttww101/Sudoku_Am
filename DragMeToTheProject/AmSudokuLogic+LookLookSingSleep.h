#import <Foundation/Foundation.h>
#import "AmSudokuLogic.h"
#import "AMSodukuCellModel.h"
#import "AmSudukuGameView.h"
#import "AmSudokuLogic+Look.h"
#import "AmSudokuLogic+LookLook.h"
#import "AmSudokuLogic+LookLookSing.h"

@interface AmSudokuLogic (LookLookSingSleep)
+ (BOOL)sharedInstanceLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)createSudokuArrayLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)initValidlistWithXYLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)fillModelWithXYLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)isValidWithXYValueLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)initBlankModelWithLevelLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)getRandomNumberToLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)clearModelValueLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)saveGameFileWithKeyLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)loadGameFileAndRestartWithKeyLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)restartGameLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)initGameDataLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)modelWithXYLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)valueWithXYLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)isGameOverLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)setGameLevelLookLookSingSleep:(NSInteger)Sleep;
+ (BOOL)modelArrayLookLookSingSleep:(NSInteger)Sleep;

@end
