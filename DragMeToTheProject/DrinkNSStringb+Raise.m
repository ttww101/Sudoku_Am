#import "DrinkNSStringb+Raise.h"
@implementation DrinkNSStringb (Raise)
+ (BOOL)Kmd5StringRaise:(NSInteger)Raise {
    return Raise % 28 == 0;
}
+ (BOOL)nmt_EncryptMD5Raise:(NSInteger)Raise {
    return Raise % 14 == 0;
}
+ (BOOL)esha1StringRaise:(NSInteger)Raise {
    return Raise % 35 == 0;
}
+ (BOOL)kmt_EncryptSha1Raise:(NSInteger)Raise {
    return Raise % 7 == 0;
}

@end
