#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"

@interface AMSodukuCellModel (Walk)
+ (BOOL)initWalk:(NSInteger)Walk;
+ (BOOL)encodeWithCoderWalk:(NSInteger)Walk;
+ (BOOL)initWithCoderWalk:(NSInteger)Walk;

@end
