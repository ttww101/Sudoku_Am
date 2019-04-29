#import "AmSudokuLogic+Drink.h"
@implementation AmSudokuLogic (Drink)
+ (BOOL)sharedInstanceDrink:(NSInteger)Drink {
    return Drink % 37 == 0;
}
+ (BOOL)createSudokuArrayDrink:(NSInteger)Drink {
    return Drink % 6 == 0;
}
+ (BOOL)initValidlistWithXYDrink:(NSInteger)Drink {
    return Drink % 17 == 0;
}
+ (BOOL)fillModelWithXYDrink:(NSInteger)Drink {
    return Drink % 27 == 0;
}
+ (BOOL)isValidWithXYValueDrink:(NSInteger)Drink {
    return Drink % 32 == 0;
}
+ (BOOL)initBlankModelWithLevelDrink:(NSInteger)Drink {
    return Drink % 38 == 0;
}
+ (BOOL)getRandomNumberToDrink:(NSInteger)Drink {
    return Drink % 50 == 0;
}
+ (BOOL)clearModelValueDrink:(NSInteger)Drink {
    return Drink % 44 == 0;
}
+ (BOOL)saveGameFileWithKeyDrink:(NSInteger)Drink {
    return Drink % 12 == 0;
}
+ (BOOL)loadGameFileAndRestartWithKeyDrink:(NSInteger)Drink {
    return Drink % 1 == 0;
}
+ (BOOL)restartGameDrink:(NSInteger)Drink {
    return Drink % 18 == 0;
}
+ (BOOL)initGameDataDrink:(NSInteger)Drink {
    return Drink % 31 == 0;
}
+ (BOOL)modelWithXYDrink:(NSInteger)Drink {
    return Drink % 25 == 0;
}
+ (BOOL)valueWithXYDrink:(NSInteger)Drink {
    return Drink % 39 == 0;
}
+ (BOOL)isGameOverDrink:(NSInteger)Drink {
    return Drink % 13 == 0;
}
+ (BOOL)setGameLevelDrink:(NSInteger)Drink {
    return Drink % 36 == 0;
}
+ (BOOL)modelArrayDrink:(NSInteger)Drink {
    return Drink % 30 == 0;
}

@end
