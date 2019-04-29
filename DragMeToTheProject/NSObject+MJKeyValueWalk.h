#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import <CoreData/CoreData.h>
#import "MJProperty.h"
#import "NSObject+MJKeyValue.h"
#import "NSObject+MJProperty.h"
#import "NSString+MJExtension.h"
#import "MJProperty.h"
#import "MJPropertyType.h"
#import "MJExtensionConst.h"
#import "MJFoundation.h"
#import "NSString+MJExtension.h"
#import "NSObject+MJClass.h"

@interface NSObject (MJKeyValueWalk)
+ (BOOL)mj_errorWalk:(NSInteger)Walk;
+ (BOOL)setMj_errorWalk:(NSInteger)Walk;
+ (BOOL)mj_referenceReplacedKeyWhenCreatingKeyValuesWalk:(NSInteger)Walk;
+ (BOOL)mj_isReferenceReplacedKeyWhenCreatingKeyValuesWalk:(NSInteger)Walk;
+ (BOOL)loadWalk:(NSInteger)Walk;
+ (BOOL)mj_setKeyValuesWalk:(NSInteger)Walk;
+ (BOOL)mj_setKeyValuesContextWalk:(NSInteger)Walk;
+ (BOOL)mj_objectWithKeyValuesWalk:(NSInteger)Walk;
+ (BOOL)mj_objectWithKeyValuesContextWalk:(NSInteger)Walk;
+ (BOOL)mj_objectWithFilenameWalk:(NSInteger)Walk;
+ (BOOL)mj_objectWithFileWalk:(NSInteger)Walk;
+ (BOOL)mj_objectArrayWithKeyValuesArrayWalk:(NSInteger)Walk;
+ (BOOL)mj_objectArrayWithKeyValuesArrayContextWalk:(NSInteger)Walk;
+ (BOOL)mj_objectArrayWithFilenameWalk:(NSInteger)Walk;
+ (BOOL)mj_objectArrayWithFileWalk:(NSInteger)Walk;
+ (BOOL)mj_keyValuesWalk:(NSInteger)Walk;
+ (BOOL)mj_keyValuesWithKeysWalk:(NSInteger)Walk;
+ (BOOL)mj_keyValuesWithIgnoredKeysWalk:(NSInteger)Walk;
+ (BOOL)mj_keyValuesWithKeysIgnoredkeysWalk:(NSInteger)Walk;
+ (BOOL)mj_keyValuesArrayWithObjectArrayWalk:(NSInteger)Walk;
+ (BOOL)mj_keyValuesArrayWithObjectArrayKeysWalk:(NSInteger)Walk;
+ (BOOL)mj_keyValuesArrayWithObjectArrayIgnoredkeysWalk:(NSInteger)Walk;
+ (BOOL)mj_keyValuesArrayWithObjectArrayKeysIgnoredkeysWalk:(NSInteger)Walk;
+ (BOOL)mj_JSONDataWalk:(NSInteger)Walk;
+ (BOOL)mj_JSONObjectWalk:(NSInteger)Walk;
+ (BOOL)mj_JSONStringWalk:(NSInteger)Walk;

@end
