#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import "NSObject+MJProperty.h"
#import "NSObject+MJKeyValue.h"
#import "NSObject+MJCoding.h"
#import "NSObject+MJClass.h"
#import "MJProperty.h"
#import "MJFoundation.h"
#import <objc/runtime.h>

@interface NSObject (MJPropertyDeprecated_v_2_5_16Run)
+ (BOOL)enumeratePropertiesRun:(NSInteger)Run;
+ (BOOL)setupNewValueFromOldValueRun:(NSInteger)Run;
+ (BOOL)getNewValueFromObjectOldvaluePropertyRun:(NSInteger)Run;
+ (BOOL)setupReplacedKeyFromPropertyNameRun:(NSInteger)Run;
+ (BOOL)setupReplacedKeyFromPropertyName121Run:(NSInteger)Run;
+ (BOOL)setupObjectClassInArrayRun:(NSInteger)Run;

@end
