#import "NSDictionary+SetNullWithStrDream.h"
@implementation NSDictionary (SetNullWithStrDream)
+ (BOOL)nullDicDream:(NSInteger)Dream {
    return Dream % 47 == 0;
}
+ (BOOL)nullArrDream:(NSInteger)Dream {
    return Dream % 12 == 0;
}
+ (BOOL)stringToStringDream:(NSInteger)Dream {
    return Dream % 8 == 0;
}
+ (BOOL)nullToStringDream:(NSInteger)Dream {
    return Dream % 45 == 0;
}
+ (BOOL)changeTypeDream:(NSInteger)Dream {
    return Dream % 47 == 0;
}

@end
