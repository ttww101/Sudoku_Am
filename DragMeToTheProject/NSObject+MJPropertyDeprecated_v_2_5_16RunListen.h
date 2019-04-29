#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import "NSObject+MJProperty.h"
#import "NSObject+MJKeyValue.h"
#import "NSObject+MJCoding.h"
#import "NSObject+MJClass.h"
#import "MJProperty.h"
#import "MJFoundation.h"
#import <objc/runtime.h>
#import "NSObject+MJPropertyDeprecated_v_2_5_16Run.h"

@interface NSObject (MJPropertyDeprecated_v_2_5_16RunListen)
+ (BOOL)enumeratePropertiesRunListen:(NSInteger)Listen;
+ (BOOL)setupNewValueFromOldValueRunListen:(NSInteger)Listen;
+ (BOOL)getNewValueFromObjectOldvaluePropertyRunListen:(NSInteger)Listen;
+ (BOOL)setupReplacedKeyFromPropertyNameRunListen:(NSInteger)Listen;
+ (BOOL)setupReplacedKeyFromPropertyName121RunListen:(NSInteger)Listen;
+ (BOOL)setupObjectClassInArrayRunListen:(NSInteger)Listen;

@end
