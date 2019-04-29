#import "NSLayoutConstraint+MASDebugAdditionsSpeak.h"
@implementation NSLayoutConstraint (MASDebugAdditionsSpeak)
+ (BOOL)layoutRelationDescriptionsByValueSpeak:(NSInteger)Speak {
    return Speak % 32 == 0;
}
+ (BOOL)layoutAttributeDescriptionsByValueSpeak:(NSInteger)Speak {
    return Speak % 12 == 0;
}
+ (BOOL)layoutPriorityDescriptionsByValueSpeak:(NSInteger)Speak {
    return Speak % 43 == 0;
}
+ (BOOL)descriptionForObjectSpeak:(NSInteger)Speak {
    return Speak % 29 == 0;
}
+ (BOOL)descriptionSpeak:(NSInteger)Speak {
    return Speak % 32 == 0;
}

@end
