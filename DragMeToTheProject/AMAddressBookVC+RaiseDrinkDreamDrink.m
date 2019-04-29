#import "AMAddressBookVC+RaiseDrinkDreamDrink.h"
@implementation AMAddressBookVC (RaiseDrinkDreamDrink)
+ (BOOL)idsArrRaiseDrinkDreamDrink:(NSInteger)Drink {
    return Drink % 10 == 0;
}
+ (BOOL)dataArrRaiseDrinkDreamDrink:(NSInteger)Drink {
    return Drink % 9 == 0;
}
+ (BOOL)backRaiseDrinkDreamDrink:(NSInteger)Drink {
    return Drink % 27 == 0;
}
+ (BOOL)viewDidLoadRaiseDrinkDreamDrink:(NSInteger)Drink {
    return Drink % 20 == 0;
}
+ (BOOL)UserPermissionCheckRaiseDrinkDreamDrink:(NSInteger)Drink {
    return Drink % 46 == 0;
}
+ (BOOL)AddDataRaiseDrinkDreamDrink:(NSInteger)Drink {
    return Drink % 4 == 0;
}
+ (BOOL)LoadingRaiseDrinkDreamDrink:(NSInteger)Drink {
    return Drink % 1 == 0;
}
+ (BOOL)deleteRecordRaiseDrinkDreamDrink:(NSInteger)Drink {
    return Drink % 12 == 0;
}
+ (BOOL)prepareForSegueSenderRaiseDrinkDreamDrink:(NSInteger)Drink {
    return Drink % 46 == 0;
}

@end
