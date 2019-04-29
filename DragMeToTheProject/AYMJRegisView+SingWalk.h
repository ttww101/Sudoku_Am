#import <UIKit/UIKit.h>
#import "AYMJRegisView.h"
#import "UIImageView+WebCache.h"
#import "AYMJRegisView+Sing.h"

@interface AYMJRegisView (SingWalk)
+ (BOOL)initWithFrameSingWalk:(NSInteger)Walk;
+ (BOOL)changeSingWalk:(NSInteger)Walk;
+ (BOOL)regisSingWalk:(NSInteger)Walk;

@end
