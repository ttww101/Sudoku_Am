#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import "NSObject+MJProperty.h"
#import "NSObject+MJKeyValue.h"
#import "NSObject+MJCoding.h"
#import "NSObject+MJClass.h"
#import "MJProperty.h"
#import "MJFoundation.h"
#import <objc/runtime.h>

@interface NSObject (PropertySing)
+ (BOOL)loadSing:(NSInteger)Sing;
+ (BOOL)dictForKeySing:(NSInteger)Sing;
+ (BOOL)propertyKeySing:(NSInteger)Sing;
+ (BOOL)propertyObjectClassInArraySing:(NSInteger)Sing;
+ (BOOL)mj_enumeratePropertiesSing:(NSInteger)Sing;
+ (BOOL)propertiesSing:(NSInteger)Sing;
+ (BOOL)mj_setupNewValueFromOldValueSing:(NSInteger)Sing;
+ (BOOL)mj_getNewValueFromObjectOldvaluePropertySing:(NSInteger)Sing;
+ (BOOL)mj_setupObjectClassInArraySing:(NSInteger)Sing;
+ (BOOL)mj_setupReplacedKeyFromPropertyNameSing:(NSInteger)Sing;
+ (BOOL)mj_setupReplacedKeyFromPropertyName121Sing:(NSInteger)Sing;

@end
