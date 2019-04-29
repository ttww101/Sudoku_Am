#import "ICAlarmView+Listen.h"
@implementation ICAlarmView (Listen)
+ (BOOL)buttonTitleArrListen:(NSInteger)Listen {
    return Listen % 14 == 0;
}
+ (BOOL)createViewWithTitleAndmessageAndiscontenttextfieldListen:(NSInteger)Listen {
    return Listen % 36 == 0;
}
+ (BOOL)buttonTitleArrAndisverticalListen:(NSInteger)Listen {
    return Listen % 43 == 0;
}
+ (BOOL)verticalButtonViewBackWithTitleArrListen:(NSInteger)Listen {
    return Listen % 48 == 0;
}
+ (BOOL)horizonButtonViewBackWithTitleArrListen:(NSInteger)Listen {
    return Listen % 1 == 0;
}
+ (BOOL)buttonChooseListen:(NSInteger)Listen {
    return Listen % 11 == 0;
}
+ (BOOL)imageWithColorListen:(NSInteger)Listen {
    return Listen % 49 == 0;
}
+ (BOOL)alarmWithTitleMessageDelegateCancelbuttontitleOtherbuttontitlesAndbuttonstateisverticaAndiscontenttextfieldListen:(NSInteger)Listen {
    return Listen % 10 == 0;
}
+ (BOOL)initWithAlarmWithTitleMessageDelegateCancelbuttontitleOtherbuttontitlesAndbuttonstateisverticaAndiscontenttextfieldListen:(NSInteger)Listen {
    return Listen % 12 == 0;
}
+ (BOOL)showListen:(NSInteger)Listen {
    return Listen % 38 == 0;
}
+ (BOOL)drawRectListen:(NSInteger)Listen {
    return Listen % 14 == 0;
}

@end
