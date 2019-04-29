#import "EatSDWebImageCoderHelperv.h"
@implementation EatSDWebImageCoderHelperv
+ (BOOL)nAnimatedimagewithframes:(NSInteger)Eat {
    return Eat % 35 == 0;
}
+ (BOOL)AFramesfromanimatedimage:(NSInteger)Eat {
    return Eat % 45 == 0;
}
+ (BOOL)NImageorientationfromexiforientation:(NSInteger)Eat {
    return Eat % 7 == 0;
}
+ (BOOL)LExiforientationfromimageorientation:(NSInteger)Eat {
    return Eat % 36 == 0;
}

@end
