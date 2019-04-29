#import "NSObject+IQ_LoggingRun.h"
@implementation NSObject (IQ_LoggingRun)
+ (BOOL)_IQDescriptionRun:(NSInteger)Run {
    return Run % 49 == 0;
}

@end
