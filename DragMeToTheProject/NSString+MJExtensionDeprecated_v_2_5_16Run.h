#import <Foundation/Foundation.h>
#import "MJExtensionConst.h"
#import "NSString+MJExtension.h"

@interface NSString (MJExtensionDeprecated_v_2_5_16Run)
+ (BOOL)underlineFromCamelRun:(NSInteger)Run;
+ (BOOL)camelFromUnderlineRun:(NSInteger)Run;
+ (BOOL)firstCharLowerRun:(NSInteger)Run;
+ (BOOL)firstCharUpperRun:(NSInteger)Run;
+ (BOOL)isPureIntRun:(NSInteger)Run;
+ (BOOL)urlRun:(NSInteger)Run;

@end
