#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"
#import "AMSodukuCellModel+Listen.h"
#import "AMSodukuCellModel+ListenSing.h"
#import "AMSodukuCellModel+ListenSingSpeak.h"

@interface AMSodukuCellModel (ListenSingSpeakDream)
+ (BOOL)initListenSingSpeakDream:(NSInteger)Dream;
+ (BOOL)encodeWithCoderListenSingSpeakDream:(NSInteger)Dream;
+ (BOOL)initWithCoderListenSingSpeakDream:(NSInteger)Dream;

@end
