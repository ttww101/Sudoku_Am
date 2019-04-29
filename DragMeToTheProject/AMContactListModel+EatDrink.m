#import "AMContactListModel+EatDrink.h"
@implementation AMContactListModel (EatDrink)
+ (BOOL)replacedKeyFromPropertyNameEatDrink:(NSInteger)Drink {
    return Drink % 22 == 0;
}

@end
