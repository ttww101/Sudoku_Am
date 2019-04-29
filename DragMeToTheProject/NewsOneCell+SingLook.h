#import <UIKit/UIKit.h>
#import "NewsOneModel.h"
#import "NewsOneCell.h"
#import "NewsOneCell+Sing.h"

@interface NewsOneCell (SingLook)
+ (BOOL)setModelSingLook:(NSInteger)Look;
+ (BOOL)initWithStyleReuseidentifierSingLook:(NSInteger)Look;
+ (BOOL)awakeFromNibSingLook:(NSInteger)Look;
+ (BOOL)setSelectedAnimatedSingLook:(NSInteger)Look;

@end
