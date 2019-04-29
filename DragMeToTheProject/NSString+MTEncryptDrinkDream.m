#import "NSString+MTEncryptDrinkDream.h"
@implementation NSString (MTEncryptDrinkDream)
+ (BOOL)md5StringDrinkDream:(NSInteger)Dream {
    return Dream % 24 == 0;
}
+ (BOOL)mt_EncryptMD5DrinkDream:(NSInteger)Dream {
    return Dream % 26 == 0;
}
+ (BOOL)sha1StringDrinkDream:(NSInteger)Dream {
    return Dream % 18 == 0;
}
+ (BOOL)mt_EncryptSha1DrinkDream:(NSInteger)Dream {
    return Dream % 7 == 0;
}

@end
