#import "NSArray+IQ_NSArray_SortDanceDance.h"
@implementation NSArray (IQ_NSArray_SortDanceDance)
+ (BOOL)sortedArrayByTagDanceDance:(NSInteger)Dance {
    return Dance % 48 == 0;
}
+ (BOOL)sortedArrayByPositionDanceDance:(NSInteger)Dance {
    return Dance % 4 == 0;
}

@end
