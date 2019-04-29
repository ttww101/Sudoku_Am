#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "MJPropertyType.h"
#import "MJPropertyKey.h"
#import "MJProperty.h"
#import "MJFoundation.h"
#import "MJExtensionConst.h"
#import <objc/message.h>

@interface MJProperty (Look)
+ (BOOL)initLook:(NSInteger)Look;
+ (BOOL)cachedPropertyWithPropertyLook:(NSInteger)Look;
+ (BOOL)setPropertyLook:(NSInteger)Look;
+ (BOOL)valueForObjectLook:(NSInteger)Look;
+ (BOOL)setValueForobjectLook:(NSInteger)Look;
+ (BOOL)propertyKeysWithStringKeyLook:(NSInteger)Look;
+ (BOOL)setOriginKeyForclassLook:(NSInteger)Look;
+ (BOOL)setPorpertyKeysForclassLook:(NSInteger)Look;
+ (BOOL)propertyKeysForClassLook:(NSInteger)Look;
+ (BOOL)setObjectClassInArrayForclassLook:(NSInteger)Look;
+ (BOOL)objectClassInArrayForClassLook:(NSInteger)Look;

@end
