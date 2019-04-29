#import <Foundation/Foundation.h>
#import "NSObject+MJClass.h"
#import "NSObject+MJCoding.h"
#import "NSObject+MJKeyValue.h"
#import "MJFoundation.h"
#import <objc/runtime.h>
#import "NSObject+MJClassDream.h"

@interface NSObject (MJClassDreamRaise)
+ (BOOL)loadDreamRaise:(NSInteger)Raise;
+ (BOOL)dictForKeyDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_enumerateClassesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_enumerateAllClassesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_setupIgnoredPropertyNamesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_totalIgnoredPropertyNamesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_setupIgnoredCodingPropertyNamesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_totalIgnoredCodingPropertyNamesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_setupAllowedPropertyNamesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_totalAllowedPropertyNamesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_setupAllowedCodingPropertyNamesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_totalAllowedCodingPropertyNamesDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_setupBlockReturnValueKeyDreamRaise:(NSInteger)Raise;
+ (BOOL)mj_totalObjectsWithSelectorKeyDreamRaise:(NSInteger)Raise;

@end
