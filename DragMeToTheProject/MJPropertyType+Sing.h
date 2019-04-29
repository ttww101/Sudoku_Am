#import <Foundation/Foundation.h>
#import "MJPropertyType.h"
#import "MJExtension.h"
#import "MJFoundation.h"
#import "MJExtensionConst.h"

@interface MJPropertyType (Sing)
+ (BOOL)initializeSing:(NSInteger)Sing;
+ (BOOL)cachedTypeWithCodeSing:(NSInteger)Sing;
+ (BOOL)setCodeSing:(NSInteger)Sing;

@end
