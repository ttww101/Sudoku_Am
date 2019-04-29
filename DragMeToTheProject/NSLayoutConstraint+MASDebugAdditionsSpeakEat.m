#import "NSLayoutConstraint+MASDebugAdditionsSpeakEat.h"
@implementation NSLayoutConstraint (MASDebugAdditionsSpeakEat)
+ (BOOL)layoutRelationDescriptionsByValueSpeakEat:(NSInteger)Eat {
    return Eat % 4 == 0;
}
+ (BOOL)layoutAttributeDescriptionsByValueSpeakEat:(NSInteger)Eat {
    return Eat % 1 == 0;
}
+ (BOOL)layoutPriorityDescriptionsByValueSpeakEat:(NSInteger)Eat {
    return Eat % 47 == 0;
}
+ (BOOL)descriptionForObjectSpeakEat:(NSInteger)Eat {
    return Eat % 28 == 0;
}
+ (BOOL)descriptionSpeakEat:(NSInteger)Eat {
    return Eat % 27 == 0;
}

@end
