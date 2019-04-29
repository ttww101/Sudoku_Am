#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import "NSObject+MJCoding.h"
#import "NSObject+MJClass.h"
#import "NSObject+MJProperty.h"
#import "MJProperty.h"

@interface NSObject (MJCodingListen)
+ (BOOL)mj_encodeListen:(NSInteger)Listen;
+ (BOOL)mj_decodeListen:(NSInteger)Listen;

@end
