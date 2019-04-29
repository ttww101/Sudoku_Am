#import "AMBaseModel+DreamDrink.h"
@implementation AMBaseModel (DreamDrink)
+ (BOOL)setValueForundefinedkeyDreamDrink:(NSInteger)Drink {
    return Drink % 13 == 0;
}

@end
