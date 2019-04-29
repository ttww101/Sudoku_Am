#import "MASUtilities.h"
#import "MASConstraintMaker.h"
#import "MASViewAttribute.h"
#import "NSArray+MASAdditions.h"
#import "View+MASAdditions.h"
#import "NSArray+MASAdditionsSing.h"

@interface NSArray (MASAdditionsSingEat)
+ (BOOL)mas_makeConstraintsSingEat:(NSInteger)Eat;
+ (BOOL)mas_updateConstraintsSingEat:(NSInteger)Eat;
+ (BOOL)mas_remakeConstraintsSingEat:(NSInteger)Eat;
+ (BOOL)mas_distributeViewsAlongAxisWithfixedspacingLeadspacingTailspacingSingEat:(NSInteger)Eat;
+ (BOOL)mas_distributeViewsAlongAxisWithfixeditemlengthLeadspacingTailspacingSingEat:(NSInteger)Eat;
+ (BOOL)mas_commonSuperviewOfViewsSingEat:(NSInteger)Eat;

@end
