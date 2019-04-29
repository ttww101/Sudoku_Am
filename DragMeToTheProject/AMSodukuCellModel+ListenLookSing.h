#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"
#import "AMSodukuCellModel+Listen.h"
#import "AMSodukuCellModel+ListenLook.h"

@interface AMSodukuCellModel (ListenLookSing)
+ (BOOL)initListenLookSing:(NSInteger)Sing;
+ (BOOL)encodeWithCoderListenLookSing:(NSInteger)Sing;
+ (BOOL)initWithCoderListenLookSing:(NSInteger)Sing;

@end
