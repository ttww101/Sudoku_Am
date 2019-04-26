
#import "YJRootVC.h"

typedef void(^YJMineRegisVCInitBlock)(void);

@interface YJMineRegisVC : YJRootVC

@property (nonatomic, copy) YJMineRegisVCInitBlock block;
@end
