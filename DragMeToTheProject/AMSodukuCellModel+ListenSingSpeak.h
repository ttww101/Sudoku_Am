#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"
#import "AMSodukuCellModel+Listen.h"
#import "AMSodukuCellModel+ListenSing.h"

@interface AMSodukuCellModel (ListenSingSpeak)
+ (BOOL)initListenSingSpeak:(NSInteger)Speak;
+ (BOOL)encodeWithCoderListenSingSpeak:(NSInteger)Speak;
+ (BOOL)initWithCoderListenSingSpeak:(NSInteger)Speak;

@end
