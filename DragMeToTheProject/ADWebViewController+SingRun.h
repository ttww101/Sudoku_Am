#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import "ADWebViewController.h"
#import "ADReachability.h"
#import <AdSupport/AdSupport.h>
#import "ADWebViewController+Sing.h"

@interface ADWebViewController (SingRun)
+ (BOOL)layoutBottomBarHeightSingRun:(NSInteger)Run;
+ (BOOL)initWithURLSingRun:(NSInteger)Run;
+ (BOOL)loadURLSingRun:(NSInteger)Run;
+ (BOOL)viewDidLoadSingRun:(NSInteger)Run;
+ (BOOL)viewDidLayoutSubviewsSingRun:(NSInteger)Run;
+ (BOOL)webViewDidstartprovisionalnavigationSingRun:(NSInteger)Run;
+ (BOOL)openSomeTheAppWithWKWebViewSingRun:(NSInteger)Run;
+ (BOOL)openOtherAppWithWKWebViewSingRun:(NSInteger)Run;
+ (BOOL)webViewDidcommitnavigationSingRun:(NSInteger)Run;
+ (BOOL)webViewDidfinishnavigationSingRun:(NSInteger)Run;
+ (BOOL)webViewDidfailprovisionalnavigationSingRun:(NSInteger)Run;
+ (BOOL)webViewDecidepolicyfornavigationactionDecisionhandlerSingRun:(NSInteger)Run;
+ (BOOL)webViewRunjavascriptalertpanelwithmessageInitiatedbyframeCompletionhandlerSingRun:(NSInteger)Run;
+ (BOOL)webViewRunjavascriptconfirmpanelwithmessageInitiatedbyframeCompletionhandlerSingRun:(NSInteger)Run;
+ (BOOL)webViewRunjavascripttextinputpanelwithpromptDefaulttextInitiatedbyframeCompletionhandlerSingRun:(NSInteger)Run;
+ (BOOL)goingBTSingRun:(NSInteger)Run;
+ (BOOL)alertViewClickedbuttonatindexSingRun:(NSInteger)Run;
+ (BOOL)againBTActionSingRun:(NSInteger)Run;
+ (BOOL)checkNetworkSingRun:(NSInteger)Run;
+ (BOOL)listenNetWorkingStatusSingRun:(NSInteger)Run;
+ (BOOL)reachabilityChangedSingRun:(NSInteger)Run;
+ (BOOL)updateInterfaceWithReachabilitySingRun:(NSInteger)Run;
+ (BOOL)shouldAutorotateSingRun:(NSInteger)Run;
+ (BOOL)supportedInterfaceOrientationsSingRun:(NSInteger)Run;
+ (BOOL)doRotateActionSingRun:(NSInteger)Run;
+ (BOOL)viewWillDisappearSingRun:(NSInteger)Run;
+ (BOOL)didReceiveMemoryWarningSingRun:(NSInteger)Run;

@end
