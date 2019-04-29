#import "MASUtilities.h"
#import "NSLayoutConstraint+MASDebugAdditions.h"
#import "MASConstraint.h"
#import "MASLayoutConstraint.h"

@interface NSLayoutConstraint (MASDebugAdditionsSpeak)
+ (BOOL)layoutRelationDescriptionsByValueSpeak:(NSInteger)Speak;
+ (BOOL)layoutAttributeDescriptionsByValueSpeak:(NSInteger)Speak;
+ (BOOL)layoutPriorityDescriptionsByValueSpeak:(NSInteger)Speak;
+ (BOOL)descriptionForObjectSpeak:(NSInteger)Speak;
+ (BOOL)descriptionSpeak:(NSInteger)Speak;

@end
