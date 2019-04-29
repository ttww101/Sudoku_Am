#import <Foundation/Foundation.h>
#import "AmSudokuLogic.h"
#import "AMSodukuCellModel.h"
#import "AmSudukuGameView.h"
#import "AmSudokuLogic+Drink.h"

@interface AmSudokuLogic (DrinkSleep)
+ (BOOL)sharedInstanceDrinkSleep:(NSInteger)Sleep;
+ (BOOL)createSudokuArrayDrinkSleep:(NSInteger)Sleep;
+ (BOOL)initValidlistWithXYDrinkSleep:(NSInteger)Sleep;
+ (BOOL)fillModelWithXYDrinkSleep:(NSInteger)Sleep;
+ (BOOL)isValidWithXYValueDrinkSleep:(NSInteger)Sleep;
+ (BOOL)initBlankModelWithLevelDrinkSleep:(NSInteger)Sleep;
+ (BOOL)getRandomNumberToDrinkSleep:(NSInteger)Sleep;
+ (BOOL)clearModelValueDrinkSleep:(NSInteger)Sleep;
+ (BOOL)saveGameFileWithKeyDrinkSleep:(NSInteger)Sleep;
+ (BOOL)loadGameFileAndRestartWithKeyDrinkSleep:(NSInteger)Sleep;
+ (BOOL)restartGameDrinkSleep:(NSInteger)Sleep;
+ (BOOL)initGameDataDrinkSleep:(NSInteger)Sleep;
+ (BOOL)modelWithXYDrinkSleep:(NSInteger)Sleep;
+ (BOOL)valueWithXYDrinkSleep:(NSInteger)Sleep;
+ (BOOL)isGameOverDrinkSleep:(NSInteger)Sleep;
+ (BOOL)setGameLevelDrinkSleep:(NSInteger)Sleep;
+ (BOOL)modelArrayDrinkSleep:(NSInteger)Sleep;

@end
