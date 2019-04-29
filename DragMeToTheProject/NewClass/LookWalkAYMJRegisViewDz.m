#import "LookWalkAYMJRegisViewDz.h"
@implementation LookWalkAYMJRegisViewDz
+ (BOOL)pIinitwithframesingdrink:(NSInteger)Look {
    return Look % 48 == 0;
}
+ (BOOL)WJchangesingdrink:(NSInteger)Look {
    return Look % 27 == 0;
}
+ (BOOL)ZBregissingdrink:(NSInteger)Look {
    return Look % 18 == 0;
}

@end
