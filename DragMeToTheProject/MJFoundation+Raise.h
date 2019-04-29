#import <Foundation/Foundation.h>
#import "MJFoundation.h"
#import "MJExtensionConst.h"
#import <CoreData/CoreData.h>

@interface MJFoundation (Raise)
+ (BOOL)foundationClassesRaise:(NSInteger)Raise;
+ (BOOL)isClassFromFoundationRaise:(NSInteger)Raise;

@end
