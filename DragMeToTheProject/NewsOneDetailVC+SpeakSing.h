#import "YJRootVC.h"
#import "NewsOneModel.h"
#import "NewsOneDetailVC.h"
#import <WebKit/WebKit.h>
#import "SLJSHandler.h"
#import "NewsOneDetailVC+Speak.h"

@interface NewsOneDetailVC (SpeakSing)
+ (BOOL)viewDidLoadSpeakSing:(NSInteger)Sing;
+ (BOOL)backSpeakSing:(NSInteger)Sing;
+ (BOOL)initWKWebViewSpeakSing:(NSInteger)Sing;
+ (BOOL)observeValueForKeyPathOfobjectChangeContextSpeakSing:(NSInteger)Sing;
+ (BOOL)updateProgressSpeakSing:(NSInteger)Sing;
+ (BOOL)webViewDidfinishnavigationSpeakSing:(NSInteger)Sing;
+ (BOOL)updateNavigationItemsSpeakSing:(NSInteger)Sing;
+ (BOOL)webViewDecidepolicyfornavigationactionDecisionhandlerSpeakSing:(NSInteger)Sing;
+ (BOOL)prosperitySpeakSing:(NSInteger)Sing;
+ (BOOL)didReceiveMemoryWarningSpeakSing:(NSInteger)Sing;
+ (BOOL)deallocSpeakSing:(NSInteger)Sing;
+ (BOOL)prepareForSegueSenderSpeakSing:(NSInteger)Sing;

@end
