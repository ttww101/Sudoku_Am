#import "MASUtilities.h"
#import "NSLayoutConstraint+MASDebugAdditions.h"
#import "MASConstraint.h"
#import "MASLayoutConstraint.h"
#import "NSLayoutConstraint+MASDebugAdditionsSpeak.h"

@interface NSLayoutConstraint (MASDebugAdditionsSpeakEat)
+ (BOOL)layoutRelationDescriptionsByValueSpeakEat:(NSInteger)Eat;
+ (BOOL)layoutAttributeDescriptionsByValueSpeakEat:(NSInteger)Eat;
+ (BOOL)layoutPriorityDescriptionsByValueSpeakEat:(NSInteger)Eat;
+ (BOOL)descriptionForObjectSpeakEat:(NSInteger)Eat;
+ (BOOL)descriptionSpeakEat:(NSInteger)Eat;

@end
