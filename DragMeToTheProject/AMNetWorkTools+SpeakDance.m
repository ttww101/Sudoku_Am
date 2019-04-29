#import "AMNetWorkTools+SpeakDance.h"
@implementation AMNetWorkTools (SpeakDance)
+ (BOOL)GetUrlParamSuccessFailureSpeakDance:(NSInteger)Dance {
    return Dance % 8 == 0;
}
+ (BOOL)postUrlTypeDataarrPageSuccessFailureSpeakDance:(NSInteger)Dance {
    return Dance % 14 == 0;
}
+ (BOOL)postUrlTypeParamSuccessFailureSpeakDance:(NSInteger)Dance {
    return Dance % 16 == 0;
}
+ (BOOL)convertToJsonDataSpeakDance:(NSInteger)Dance {
    return Dance % 18 == 0;
}
+ (BOOL)GetTimestampSpeakDance:(NSInteger)Dance {
    return Dance % 35 == 0;
}

@end
