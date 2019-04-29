#import <UIKit/UIKit.h>
#import "NewsOneModel.h"
#import "NewsOneCell.h"

@interface NewsOneCell (Sing)
+ (BOOL)setModelSing:(NSInteger)Sing;
+ (BOOL)initWithStyleReuseidentifierSing:(NSInteger)Sing;
+ (BOOL)awakeFromNibSing:(NSInteger)Sing;
+ (BOOL)setSelectedAnimatedSing:(NSInteger)Sing;

@end
