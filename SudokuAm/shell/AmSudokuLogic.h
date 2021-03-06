//
//  AmSudokuLogic.h
//  AmSoduku
//
//  Created by lt on 2017/9/6.
//  Copyright © 2017年 tl. All rights reserved.
//

#import <Foundation/Foundation.h>

#define GAMELEVEL @"gameLevel"
#define SAVE_TIMES_KEY @"game_times_key"
#define SAVE_ENDGAME_KEY @"game_endgame_key"

@class AMSodukuCellModel, SudokuEndGame;

@interface AmSudokuLogic : NSObject

@property (nonatomic, assign) NSInteger gameLevel;          /**< 游戏等级 低 中 高 对应 0 1 2  默认低 */

+ (instancetype)sharedInstance;

+ (AMSodukuCellModel *)modelWithX:(NSInteger)x y:(NSInteger)y;

+ (NSString *)valueWithX:(NSInteger)x y:(NSInteger)y;

+ (void)restartGame;

+ (void)saveGameFileWithKey:(NSString *)key;

+ (BOOL)loadGameFileAndRestartWithKey:(NSString *)key;

+ (void)initGameData;

+ (BOOL)isGameOver;

+ (void)setGameLevel:(NSInteger)level;

+ (void)saveTimes:(NSUInteger)times;

@property (nonatomic, assign) NSUInteger times;

+ (void)saveEndGame:(SudokuEndGame *)endGame;

@end
