#import "MJRefreshBackStateFooter.h"
#import "MJRefreshBackNormalFooter.h"
#import "NSBundle+MJRefresh.h"
#import "MJRefreshBackNormalFooter+Speak.h"

@interface MJRefreshBackNormalFooter (SpeakDance)
+ (BOOL)arrowViewSpeakDance:(NSInteger)Dance;
+ (BOOL)loadingViewSpeakDance:(NSInteger)Dance;
+ (BOOL)setActivityIndicatorViewStyleSpeakDance:(NSInteger)Dance;
+ (BOOL)prepareSpeakDance:(NSInteger)Dance;
+ (BOOL)placeSubviewsSpeakDance:(NSInteger)Dance;
+ (BOOL)setStateSpeakDance:(NSInteger)Dance;

@end
