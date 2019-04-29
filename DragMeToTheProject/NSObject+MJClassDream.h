#import <Foundation/Foundation.h>
#import "NSObject+MJClass.h"
#import "NSObject+MJCoding.h"
#import "NSObject+MJKeyValue.h"
#import "MJFoundation.h"
#import <objc/runtime.h>

@interface NSObject (MJClassDream)
+ (BOOL)loadDream:(NSInteger)Dream;
+ (BOOL)dictForKeyDream:(NSInteger)Dream;
+ (BOOL)mj_enumerateClassesDream:(NSInteger)Dream;
+ (BOOL)mj_enumerateAllClassesDream:(NSInteger)Dream;
+ (BOOL)mj_setupIgnoredPropertyNamesDream:(NSInteger)Dream;
+ (BOOL)mj_totalIgnoredPropertyNamesDream:(NSInteger)Dream;
+ (BOOL)mj_setupIgnoredCodingPropertyNamesDream:(NSInteger)Dream;
+ (BOOL)mj_totalIgnoredCodingPropertyNamesDream:(NSInteger)Dream;
+ (BOOL)mj_setupAllowedPropertyNamesDream:(NSInteger)Dream;
+ (BOOL)mj_totalAllowedPropertyNamesDream:(NSInteger)Dream;
+ (BOOL)mj_setupAllowedCodingPropertyNamesDream:(NSInteger)Dream;
+ (BOOL)mj_totalAllowedCodingPropertyNamesDream:(NSInteger)Dream;
+ (BOOL)mj_setupBlockReturnValueKeyDream:(NSInteger)Dream;
+ (BOOL)mj_totalObjectsWithSelectorKeyDream:(NSInteger)Dream;

@end
