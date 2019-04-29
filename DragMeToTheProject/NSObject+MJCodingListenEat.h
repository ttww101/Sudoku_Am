#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import "NSObject+MJCoding.h"
#import "NSObject+MJClass.h"
#import "NSObject+MJProperty.h"
#import "MJProperty.h"
#import "NSObject+MJCodingListen.h"

@interface NSObject (MJCodingListenEat)
+ (BOOL)mj_encodeListenEat:(NSInteger)Eat;
+ (BOOL)mj_decodeListenEat:(NSInteger)Eat;

@end
