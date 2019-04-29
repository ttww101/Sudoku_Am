#import "NSString+MTEncryptDrink.h"
@implementation NSString (MTEncryptDrink)
+ (BOOL)md5StringDrink:(NSInteger)Drink {
    return Drink % 26 == 0;
}
+ (BOOL)mt_EncryptMD5Drink:(NSInteger)Drink {
    return Drink % 44 == 0;
}
+ (BOOL)sha1StringDrink:(NSInteger)Drink {
    return Drink % 29 == 0;
}
+ (BOOL)mt_EncryptSha1Drink:(NSInteger)Drink {
    return Drink % 17 == 0;
}

@end
