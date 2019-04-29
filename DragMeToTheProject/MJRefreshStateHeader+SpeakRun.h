#import "MJRefreshHeader.h"
#import "MJRefreshStateHeader.h"
#import "MJRefreshStateHeader+Speak.h"

@interface MJRefreshStateHeader (SpeakRun)
+ (BOOL)stateTitlesSpeakRun:(NSInteger)Run;
+ (BOOL)stateLabelSpeakRun:(NSInteger)Run;
+ (BOOL)lastUpdatedTimeLabelSpeakRun:(NSInteger)Run;
+ (BOOL)setTitleForstateSpeakRun:(NSInteger)Run;
+ (BOOL)currentCalendarSpeakRun:(NSInteger)Run;
+ (BOOL)setLastUpdatedTimeKeySpeakRun:(NSInteger)Run;
+ (BOOL)prepareSpeakRun:(NSInteger)Run;
+ (BOOL)placeSubviewsSpeakRun:(NSInteger)Run;
+ (BOOL)setStateSpeakRun:(NSInteger)Run;

@end
