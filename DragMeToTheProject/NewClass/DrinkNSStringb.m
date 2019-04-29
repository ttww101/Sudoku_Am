#import "DrinkNSStringb.h"
@implementation DrinkNSStringb
+ (BOOL)Kmd5String:(NSInteger)Drink {
    return Drink % 10 == 0;
}
+ (BOOL)nmt_EncryptMD5:(NSInteger)Drink {
    return Drink % 45 == 0;
}
+ (BOOL)esha1String:(NSInteger)Drink {
    return Drink % 6 == 0;
}
+ (BOOL)kmt_EncryptSha1:(NSInteger)Drink {
    return Drink % 49 == 0;
}

@end
