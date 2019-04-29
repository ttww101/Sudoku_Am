#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import "NSObject+MJProperty.h"
#import "NSObject+MJKeyValue.h"
#import "NSObject+MJCoding.h"
#import "NSObject+MJClass.h"
#import "MJProperty.h"
#import "MJFoundation.h"
#import <objc/runtime.h>
#import "NSObject+PropertySing.h"

@interface NSObject (PropertySingSpeak)
+ (BOOL)loadSingSpeak:(NSInteger)Speak;
+ (BOOL)dictForKeySingSpeak:(NSInteger)Speak;
+ (BOOL)propertyKeySingSpeak:(NSInteger)Speak;
+ (BOOL)propertyObjectClassInArraySingSpeak:(NSInteger)Speak;
+ (BOOL)mj_enumeratePropertiesSingSpeak:(NSInteger)Speak;
+ (BOOL)propertiesSingSpeak:(NSInteger)Speak;
+ (BOOL)mj_setupNewValueFromOldValueSingSpeak:(NSInteger)Speak;
+ (BOOL)mj_getNewValueFromObjectOldvaluePropertySingSpeak:(NSInteger)Speak;
+ (BOOL)mj_setupObjectClassInArraySingSpeak:(NSInteger)Speak;
+ (BOOL)mj_setupReplacedKeyFromPropertyNameSingSpeak:(NSInteger)Speak;
+ (BOOL)mj_setupReplacedKeyFromPropertyName121SingSpeak:(NSInteger)Speak;

@end
