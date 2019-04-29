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
#import "NSObject+MJKeyValueWalk.h"

@interface NSObject (MJKeyValueWalkSpeak)
+ (BOOL)mj_errorWalkSpeak:(NSInteger)Speak;
+ (BOOL)setMj_errorWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_referenceReplacedKeyWhenCreatingKeyValuesWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_isReferenceReplacedKeyWhenCreatingKeyValuesWalkSpeak:(NSInteger)Speak;
+ (BOOL)loadWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_setKeyValuesWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_setKeyValuesContextWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_objectWithKeyValuesWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_objectWithKeyValuesContextWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_objectWithFilenameWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_objectWithFileWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_objectArrayWithKeyValuesArrayWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_objectArrayWithKeyValuesArrayContextWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_objectArrayWithFilenameWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_objectArrayWithFileWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_keyValuesWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_keyValuesWithKeysWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_keyValuesWithIgnoredKeysWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_keyValuesWithKeysIgnoredkeysWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_keyValuesArrayWithObjectArrayWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_keyValuesArrayWithObjectArrayKeysWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_keyValuesArrayWithObjectArrayIgnoredkeysWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_keyValuesArrayWithObjectArrayKeysIgnoredkeysWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_JSONDataWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_JSONObjectWalkSpeak:(NSInteger)Speak;
+ (BOOL)mj_JSONStringWalkSpeak:(NSInteger)Speak;

@end
