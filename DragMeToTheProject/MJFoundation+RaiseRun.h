#import <Foundation/Foundation.h>
#import "MJFoundation.h"
#import "MJExtensionConst.h"
#import <CoreData/CoreData.h>
#import "MJFoundation+Raise.h"

@interface MJFoundation (RaiseRun)
+ (BOOL)foundationClassesRaiseRun:(NSInteger)Run;
+ (BOOL)isClassFromFoundationRaiseRun:(NSInteger)Run;

@end
