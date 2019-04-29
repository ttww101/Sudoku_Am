#import "MASViewAttribute.h"
#import "MASConstraint.h"
#import "MASLayoutConstraint.h"
#import "MASUtilities.h"
#import "MASViewConstraint.h"
#import "MASConstraint+Private.h"
#import "MASCompositeConstraint.h"
#import "MASLayoutConstraint.h"
#import "View+MASAdditions.h"
#import <objc/runtime.h>

@interface MASViewConstraint (Listen)
+ (BOOL)initWithFirstViewAttributeListen:(NSInteger)Listen;
+ (BOOL)copyWithZoneListen:(NSInteger)Listen;
+ (BOOL)installedConstraintsForViewListen:(NSInteger)Listen;
+ (BOOL)setLayoutConstantListen:(NSInteger)Listen;
+ (BOOL)setLayoutRelationListen:(NSInteger)Listen;
+ (BOOL)supportsActivePropertyListen:(NSInteger)Listen;
+ (BOOL)isActiveListen:(NSInteger)Listen;
+ (BOOL)hasBeenInstalledListen:(NSInteger)Listen;
+ (BOOL)setSecondViewAttributeListen:(NSInteger)Listen;
+ (BOOL)(CGFloat))multipliedByListen:(NSInteger)Listen;
+ (BOOL)(CGFloat))dividedByListen:(NSInteger)Listen;
+ (BOOL)(MASLayoutPriority))priorityListen:(NSInteger)Listen;
+ (BOOL)(id, NSLayoutRelation))equalToWithRelationListen:(NSInteger)Listen;
+ (BOOL)withListen:(NSInteger)Listen;
+ (BOOL)andListen:(NSInteger)Listen;
+ (BOOL)addConstraintWithLayoutAttributeListen:(NSInteger)Listen;
+ (BOOL)animatorListen:(NSInteger)Listen;
+ (BOOL)(id))keyListen:(NSInteger)Listen;
+ (BOOL)setInsetsListen:(NSInteger)Listen;
+ (BOOL)setInsetListen:(NSInteger)Listen;
+ (BOOL)setOffsetListen:(NSInteger)Listen;
+ (BOOL)setSizeOffsetListen:(NSInteger)Listen;
+ (BOOL)setCenterOffsetListen:(NSInteger)Listen;
+ (BOOL)activateListen:(NSInteger)Listen;
+ (BOOL)deactivateListen:(NSInteger)Listen;
+ (BOOL)installListen:(NSInteger)Listen;
+ (BOOL)layoutConstraintSimilarToListen:(NSInteger)Listen;
+ (BOOL)uninstallListen:(NSInteger)Listen;

@end
