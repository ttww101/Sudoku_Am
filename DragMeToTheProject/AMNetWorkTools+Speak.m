#import "AMNetWorkTools+Speak.h"
@implementation AMNetWorkTools (Speak)
+ (BOOL)GetUrlParamSuccessFailureSpeak:(NSInteger)Speak {
    return Speak % 46 == 0;
}
+ (BOOL)postUrlTypeDataarrPageSuccessFailureSpeak:(NSInteger)Speak {
    return Speak % 41 == 0;
}
+ (BOOL)postUrlTypeParamSuccessFailureSpeak:(NSInteger)Speak {
    return Speak % 47 == 0;
}
+ (BOOL)convertToJsonDataSpeak:(NSInteger)Speak {
    return Speak % 34 == 0;
}
+ (BOOL)GetTimestampSpeak:(NSInteger)Speak {
    return Speak % 43 == 0;
}

@end
