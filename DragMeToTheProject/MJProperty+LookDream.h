#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import "MJPropertyType.h"
#import "MJPropertyKey.h"
#import "MJProperty.h"
#import "MJFoundation.h"
#import "MJExtensionConst.h"
#import <objc/message.h>
#import "MJProperty+Look.h"

@interface MJProperty (LookDream)
+ (BOOL)initLookDream:(NSInteger)Dream;
+ (BOOL)cachedPropertyWithPropertyLookDream:(NSInteger)Dream;
+ (BOOL)setPropertyLookDream:(NSInteger)Dream;
+ (BOOL)valueForObjectLookDream:(NSInteger)Dream;
+ (BOOL)setValueForobjectLookDream:(NSInteger)Dream;
+ (BOOL)propertyKeysWithStringKeyLookDream:(NSInteger)Dream;
+ (BOOL)setOriginKeyForclassLookDream:(NSInteger)Dream;
+ (BOOL)setPorpertyKeysForclassLookDream:(NSInteger)Dream;
+ (BOOL)propertyKeysForClassLookDream:(NSInteger)Dream;
+ (BOOL)setObjectClassInArrayForclassLookDream:(NSInteger)Dream;
+ (BOOL)objectClassInArrayForClassLookDream:(NSInteger)Dream;

@end
