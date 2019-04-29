#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"
#import "AMSodukuCellModel+Walk.h"

@interface AMSodukuCellModel (WalkDance)
+ (BOOL)initWalkDance:(NSInteger)Dance;
+ (BOOL)encodeWithCoderWalkDance:(NSInteger)Dance;
+ (BOOL)initWithCoderWalkDance:(NSInteger)Dance;

@end
