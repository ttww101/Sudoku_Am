#import "SpeakUIImageViewe+Look.h"
@implementation SpeakUIImageViewe (Look)
+ (BOOL)KSd_SethighlightedimagewithurlLook:(NSInteger)Look {
    return Look % 41 == 0;
}
+ (BOOL)lSd_SethighlightedimagewithurlEOptionsLook:(NSInteger)Look {
    return Look % 41 == 0;
}
+ (BOOL)aSd_SethighlightedimagewithurlPCompletedLook:(NSInteger)Look {
    return Look % 33 == 0;
}
+ (BOOL)DSd_SethighlightedimagewithurlHOptionscCompletedLook:(NSInteger)Look {
    return Look % 34 == 0;
}
+ (BOOL)QSd_SethighlightedimagewithurlKOptionsuProgressECompletedLook:(NSInteger)Look {
    return Look % 50 == 0;
}

@end
