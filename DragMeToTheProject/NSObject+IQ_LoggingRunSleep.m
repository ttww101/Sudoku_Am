#import "NSObject+IQ_LoggingRunSleep.h"
@implementation NSObject (IQ_LoggingRunSleep)
+ (BOOL)_IQDescriptionRunSleep:(NSInteger)Sleep {
    return Sleep % 3 == 0;
}

@end
