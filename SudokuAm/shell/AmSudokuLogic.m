//
//  AmSudokuLogic.m
//  AmSoduku
//
//  Created by lt on 2017/9/6.
//  Copyright © 2017年 tl. All rights reserved.
//

#import "AmSudokuLogic.h"
#import "AMSodukuCellModel.h"
#import "AmSudukuGameView.h"
#import "SudokuEndGame.h"

@interface AmSudokuLogic ()

@property (nonatomic, strong) NSMutableArray *modelArray;

@end

@implementation AmSudokuLogic

+ (instancetype)sharedInstance
{
    static AmSudokuLogic *manager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[AmSudokuLogic alloc] init];
        manager.gameLevel = [[[NSUserDefaults standardUserDefaults] valueForKey:GAMELEVEL] integerValue];
        manager.times = 0;
    });
    return manager;
}

# pragma mark - private

- (void)createSudokuArray
{
    for (NSInteger i = 0; i < 9; i ++) {
        for (NSInteger j = 0; j < 9; j++) {
            [self initValidlistWithX:i y:j];
            
            if (![self fillModelWithX:i y:j]) {
                NSLog(@"创建数独矩阵失败");
                return;
            }
        }
    }
}

/**
 *  初始化指定坐标的可选值数组
 *
 */
- (void)initValidlistWithX:(NSInteger)x y:(NSInteger)y
{
    for (NSInteger i = 1; i <= 9; i++) {
        NSString *value = [NSString stringWithFormat:@"%ld" ,(long)i];
        if ([self isValidWithX:x y:y value:value]) {
            [[AmSudokuLogic modelWithX:x y:y].valistValueList addObject:value];
        }
    }
}

/**
 *  填充数据到对应的model
 *
 */
- (BOOL)fillModelWithX:(NSInteger)x y:(NSInteger)y
{
    AMSodukuCellModel *model = [AmSudokuLogic modelWithX:x y:y];
    
    if (model.valistValueList.count > 0) {
        NSInteger randomIndex = [self getRandomNumber:0 to:model.valistValueList.count - 1];
        model.realValue = model.valistValueList[randomIndex];
        [model.valistValueList removeObjectAtIndex:randomIndex];
    } else { // 没有可取的值 回溯
        if (x == 0 && y == 0) {
            NSLog(@"0 0 没有可取的值");
            return NO;
        }
        
        model.realValue = @"";      //回溯前重置当前的value
        if (y != 0) {
            if (![self fillModelWithX:x y:y - 1]) {
                return NO;
            }
        } else {
            if (![self fillModelWithX:x - 1 y:8]) {
                return NO;
            }
        }
        
        // 回溯之后 继续选择可选值来填充
        [self initValidlistWithX:x y:y];
        if (![self fillModelWithX:x y:y]) {
            return NO;
        }
    }
    return YES;
}

/**
 *  判断对应坐标 填入的值是否可取
 *
 *  @param x     横坐标
 *  @param y     纵坐标
 *  @param value 填入的值
 *
 *  @return 是否可取
 */
- (BOOL)isValidWithX:(NSInteger)x y:(NSInteger)y value:(NSString *)value
{
    for (NSInteger i = 0; i < 9; i++) {
        if (i != y) {
            if ([value isEqualToString:[AmSudokuLogic valueWithX:x y:i]]) {
                return NO;
            }
        }
    }
    
    for (NSInteger i = 0; i < 9; i++) {
        if (i != x) {
            if ([value isEqualToString:[AmSudokuLogic valueWithX:i y:y]]) {
                return NO;
            }
        }
    }
    
    NSInteger centerX = x / 3 * 3 + 1;
    NSInteger centerY = y / 3 * 3 + 1;
    
    for (NSInteger i = -1; i < 2; i++) {
        for (NSInteger j = -1; j < 2; j ++) {
            if ( !((centerX + i) == x && (centerY + j) == y) ) {
                if ([[AmSudokuLogic valueWithX:(centerX + i) y:(centerY + j)] isEqualToString:value]) {
                    return NO;
                }
            }
        }
    }
    
    return YES;
}

- (void)initBlankModelWithLevel:(NSInteger)level
{
    for (NSInteger i = 0; i < 9; i++) {
        for (NSInteger j = 0; j < 9; j++) {
            [AmSudokuLogic modelWithX:i y:j].editEnabled = NO;
        }
    }
    
    NSInteger x = 0;
    NSInteger y = 0;
    NSInteger loopIndex = 0;
    NSInteger totalBlankCount = 0;      /**< 当前小九宫格内允许被编辑的cell总数目 */
    NSInteger subBlankCount = 0;        /**< 当前这个小九宫格内累计确定的可编辑的cell数目 */
    
    switch (level) {
        case 0:
            totalBlankCount = 2;
            break;
        case 1:
            totalBlankCount = 5;
            break;
        case 2:
            totalBlankCount = 6;
            break;
        default:
            totalBlankCount = 2;
            break;
    }
    
    for (; loopIndex < 9; loopIndex++) {
        subBlankCount = 0;
        
        NSInteger centerX = loopIndex % 3 * 3 + 1;
        NSInteger centerY = loopIndex / 3 * 3 + 1;
        // 增加点随机性在总数基础上加上0 或者 1
        while (subBlankCount < totalBlankCount + [self getRandomNumber:0 to:1]) {
            do {
                x = centerX + [self getRandomNumber:-1 to:1];
                y = centerY + [self getRandomNumber:-1 to:1];
            } while ([AmSudokuLogic modelWithX:x y:y].editEnabled == YES);
            
            subBlankCount++;
            [AmSudokuLogic modelWithX:x y:y].editEnabled = YES;
        }
    }
}


/**
 *  获取范围内的随机数 包括边界值
 *
 *  @param from 最小值
 *  @param to   最大值
 *
 *  @return 随机值
 */
- (NSInteger)getRandomNumber:(NSInteger)from to:(NSInteger)to
{
    return from + (arc4random() % (to - from + 1));
}

/**
 *  重置所有model的输入以及note数据
 */
- (void)clearModelValue
{
    for (NSInteger i = 0; i < 9; i++) {
        for (NSInteger j = 0; j < 9; j++) {
            AMSodukuCellModel *model = self.modelArray[i][j];
            model.realValue = @"";
            model.inputValue = @"";
            [model.noteList removeAllObjects];
            [model.valistValueList removeAllObjects];
        }
    }
}

# pragma mark - public

+ (void)saveEndGame:(SudokuEndGame *)endGame {
    
    NSData *endGameData = [[NSUserDefaults standardUserDefaults] valueForKey:SAVE_ENDGAME_KEY];
    NSMutableArray *mEndGames = [NSMutableArray new];
    if (endGameData != nil) {
        NSMutableArray *mSaveEndGames = [NSKeyedUnarchiver unarchiveObjectWithData:endGameData];
        [mEndGames addObjectsFromArray:mSaveEndGames];
    }
    
    [mEndGames addObject:endGame];
    //test remove end games
//    [mEndGames removeObjectsInRange:NSMakeRange(2, 3)];
    
    NSData *data = [NSKeyedArchiver archivedDataWithRootObject:[mEndGames copy]];
    [[NSUserDefaults standardUserDefaults] setValue:data forKey:SAVE_ENDGAME_KEY];
}

// 存档
+ (void)saveGameFileWithKey:(NSString *)key
{
    NSData *data = [NSKeyedArchiver archivedDataWithRootObject:[AmSudokuLogic sharedInstance].modelArray];
    [[NSUserDefaults standardUserDefaults] setValue:data forKey:key];
    
    NSData *timesData = [NSKeyedArchiver archivedDataWithRootObject:[NSNumber numberWithUnsignedInteger:[AmSudokuLogic sharedInstance].times]];
    [[NSUserDefaults standardUserDefaults] setValue:timesData forKey:SAVE_TIMES_KEY];
}

// 读档
+ (BOOL)loadGameFileAndRestartWithKey:(NSString *)key
{
    NSData *data = [[NSUserDefaults standardUserDefaults] valueForKey:key];
    if (!data) {
        return NO;
    }
    [AmSudokuLogic sharedInstance].modelArray = [NSKeyedUnarchiver unarchiveObjectWithData:data];
    
    NSData *timesData = [[NSUserDefaults standardUserDefaults] valueForKey:SAVE_TIMES_KEY];
    [AmSudokuLogic sharedInstance].times = ((NSNumber *)[NSKeyedUnarchiver unarchiveObjectWithData:timesData]).unsignedIntegerValue;
    
    [[NSNotificationCenter defaultCenter] postNotificationName:LTGAMEREFRESH object:nil];
    return YES;
}

+ (void)restartGame
{
    [[NSNotificationCenter defaultCenter] postNotificationName:LTGAMERESTART object:nil];
}

+ (void)initGameData
{
    [[AmSudokuLogic sharedInstance] clearModelValue];
    [[AmSudokuLogic sharedInstance] createSudokuArray];
    [[AmSudokuLogic sharedInstance] initBlankModelWithLevel:[AmSudokuLogic sharedInstance].gameLevel];
    
}

+ (AMSodukuCellModel *)modelWithX:(NSInteger)x y:(NSInteger)y
{
    return [AmSudokuLogic sharedInstance].modelArray[x][y];
}

+ (NSString *)valueWithX:(NSInteger)x y:(NSInteger)y
{
    return [self modelWithX:x y:y].realValue;
}

/**
 *  游戏是否结束  结束表明胜利
 *
 *  @return YES 胜利 NO 否
 */
+ (BOOL)isGameOver
{
    for (NSInteger x = 0; x < 9; x++) {
        for (NSInteger y = 0; y < 9; y++) {
            AMSodukuCellModel *model = [AmSudokuLogic modelWithX:x y:y];
            if (model.editEnabled && ![model.inputValue isEqualToString:model.realValue]) {
                return NO;
            }
        }
    }
    NSLog(@"游戏结束 胜利！");
    return YES;
}

+ (void)setGameLevel:(NSInteger)level
{
    [AmSudokuLogic sharedInstance].gameLevel = level;
    [[NSUserDefaults standardUserDefaults] setValue:[NSNumber numberWithInteger:level] forKey:GAMELEVEL];
}

# pragma mark - get

- (NSMutableArray *)modelArray
{
    if (!_modelArray)
    {
        _modelArray = [NSMutableArray array];
        for (NSInteger i = 0; i < 9; i++) {
            _modelArray[i] = [NSMutableArray arrayWithCapacity:9];
            for (NSInteger j = 0; j < 9; j++) {
                AMSodukuCellModel *model = [[AMSodukuCellModel alloc] init];
                model.realValue = @"";
                model.x = i;
                model.y = j;
                model.editEnabled = NO;
                _modelArray[i][j] = model;
            }
        }
    }
    return _modelArray;
}

@end
