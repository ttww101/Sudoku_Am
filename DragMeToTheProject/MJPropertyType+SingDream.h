#import <Foundation/Foundation.h>
#import "MJPropertyType.h"
#import "MJExtension.h"
#import "MJFoundation.h"
#import "MJExtensionConst.h"
#import "MJPropertyType+Sing.h"

@interface MJPropertyType (SingDream)
+ (BOOL)initializeSingDream:(NSInteger)Dream;
+ (BOOL)cachedTypeWithCodeSingDream:(NSInteger)Dream;
+ (BOOL)setCodeSingDream:(NSInteger)Dream;

@end
