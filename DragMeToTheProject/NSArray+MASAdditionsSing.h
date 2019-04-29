#import "MASUtilities.h"
#import "MASConstraintMaker.h"
#import "MASViewAttribute.h"
#import "NSArray+MASAdditions.h"
#import "View+MASAdditions.h"

@interface NSArray (MASAdditionsSing)
+ (BOOL)mas_makeConstraintsSing:(NSInteger)Sing;
+ (BOOL)mas_updateConstraintsSing:(NSInteger)Sing;
+ (BOOL)mas_remakeConstraintsSing:(NSInteger)Sing;
+ (BOOL)mas_distributeViewsAlongAxisWithfixedspacingLeadspacingTailspacingSing:(NSInteger)Sing;
+ (BOOL)mas_distributeViewsAlongAxisWithfixeditemlengthLeadspacingTailspacingSing:(NSInteger)Sing;
+ (BOOL)mas_commonSuperviewOfViewsSing:(NSInteger)Sing;

@end
