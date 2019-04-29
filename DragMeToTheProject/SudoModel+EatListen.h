#import <Foundation/Foundation.h>
#import "SudoModel.h"
#import <math.h>
#import "SudoModel+Eat.h"

@interface SudoModel (EatListen)
+ (BOOL)isSatisfyWithDataArrWithindexAndtitleWithblockEatListen:(NSInteger)Listen;
+ (BOOL)arrayWithDataArrAndindexarrEatListen:(NSInteger)Listen;
+ (BOOL)arrayWithHorizontalWithIndexAnddataarrEatListen:(NSInteger)Listen;
+ (BOOL)arrayWithVerticalWithIndexAnddataarrEatListen:(NSInteger)Listen;
+ (BOOL)arrayWithCellArrWithIndexAnddataarrEatListen:(NSInteger)Listen;
+ (BOOL)divideWithDagtaArrEatListen:(NSInteger)Listen;
+ (BOOL)generateRandomSudoEatListen:(NSInteger)Listen;
+ (BOOL)titleWithArrContentEatListen:(NSInteger)Listen;
+ (BOOL)changeTitleWithArrAndtitleEatListen:(NSInteger)Listen;

@end
