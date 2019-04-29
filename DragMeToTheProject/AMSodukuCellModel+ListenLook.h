#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"
#import "AMSodukuCellModel+Listen.h"

@interface AMSodukuCellModel (ListenLook)
+ (BOOL)initListenLook:(NSInteger)Look;
+ (BOOL)encodeWithCoderListenLook:(NSInteger)Look;
+ (BOOL)initWithCoderListenLook:(NSInteger)Look;

@end
