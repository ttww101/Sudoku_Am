
#import "AYMJRootVC.h"

typedef void(^YJMineRegisVCInitBlock)(void);

@interface AYMJMineRegisVC : AYMJRootVC

@property (nonatomic, copy) YJMineRegisVCInitBlock block;
@end
