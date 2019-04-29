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
#import "MASViewConstraint+Listen.h"

@interface MASViewConstraint (ListenDance)
+ (BOOL)initWithFirstViewAttributeListenDance:(NSInteger)Dance;
+ (BOOL)copyWithZoneListenDance:(NSInteger)Dance;
+ (BOOL)installedConstraintsForViewListenDance:(NSInteger)Dance;
+ (BOOL)setLayoutConstantListenDance:(NSInteger)Dance;
+ (BOOL)setLayoutRelationListenDance:(NSInteger)Dance;
+ (BOOL)supportsActivePropertyListenDance:(NSInteger)Dance;
+ (BOOL)isActiveListenDance:(NSInteger)Dance;
+ (BOOL)hasBeenInstalledListenDance:(NSInteger)Dance;
+ (BOOL)setSecondViewAttributeListenDance:(NSInteger)Dance;
+ (BOOL)multipliedByListenDance:(NSInteger)Dance;
+ (BOOL)dividedByListenDance:(NSInteger)Dance;
+ (BOOL)priorityListenDance:(NSInteger)Dance;
+ (BOOL)equalToWithRelationListenDance:(NSInteger)Dance;
+ (BOOL)withListenDance:(NSInteger)Dance;
+ (BOOL)andListenDance:(NSInteger)Dance;
+ (BOOL)addConstraintWithLayoutAttributeListenDance:(NSInteger)Dance;
+ (BOOL)animatorListenDance:(NSInteger)Dance;
+ (BOOL)keyListenDance:(NSInteger)Dance;
+ (BOOL)setInsetsListenDance:(NSInteger)Dance;
+ (BOOL)setInsetListenDance:(NSInteger)Dance;
+ (BOOL)setOffsetListenDance:(NSInteger)Dance;
+ (BOOL)setSizeOffsetListenDance:(NSInteger)Dance;
+ (BOOL)setCenterOffsetListenDance:(NSInteger)Dance;
+ (BOOL)activateListenDance:(NSInteger)Dance;
+ (BOOL)deactivateListenDance:(NSInteger)Dance;
+ (BOOL)installListenDance:(NSInteger)Dance;
+ (BOOL)layoutConstraintSimilarToListenDance:(NSInteger)Dance;
+ (BOOL)uninstallListenDance:(NSInteger)Dance;

@end
