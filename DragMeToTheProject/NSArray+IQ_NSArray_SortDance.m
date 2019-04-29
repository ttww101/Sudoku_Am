#import "NSArray+IQ_NSArray_SortDance.h"
@implementation NSArray (IQ_NSArray_SortDance)
+ (BOOL)sortedArrayByTagDance:(NSInteger)Dance {
    return Dance % 5 == 0;
}
+ (BOOL)sortedArrayByPositionDance:(NSInteger)Dance {
    return Dance % 11 == 0;
}

@end
