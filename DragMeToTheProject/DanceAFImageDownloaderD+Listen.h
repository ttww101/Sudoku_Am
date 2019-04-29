#import <Foundation/Foundation.h>
#import "DanceAFImageDownloaderD.h"

@interface DanceAFImageDownloaderD (Listen)
+ (BOOL)pdefaultURLCacheListen:(NSInteger)Listen;
+ (BOOL)adefaultURLSessionConfigurationListen:(NSInteger)Listen;
+ (BOOL)iinitListen:(NSInteger)Listen;
+ (BOOL)kInitwithsessionmanagerxDownloadprioritizationzMaximumactivedownloadsRImagecacheListen:(NSInteger)Listen;
+ (BOOL)sdefaultInstanceListen:(NSInteger)Listen;
+ (BOOL)zDownloadimageforurlrequestZSuccessGFailureListen:(NSInteger)Listen;
+ (BOOL)BDownloadimageforurlrequestsWithreceiptidSSuccessMFailureListen:(NSInteger)Listen;
+ (BOOL)YCanceltaskforimagedownloadreceiptListen:(NSInteger)Listen;
+ (BOOL)ASafelyremovemergedtaskwithurlidentifierListen:(NSInteger)Listen;
+ (BOOL)aRemovemergedtaskwithurlidentifierListen:(NSInteger)Listen;
+ (BOOL)YsafelyDecrementActiveTaskCountListen:(NSInteger)Listen;
+ (BOOL)UsafelyStartNextTaskIfNecessaryListen:(NSInteger)Listen;
+ (BOOL)hStartmergedtaskListen:(NSInteger)Listen;
+ (BOOL)vEnqueuemergedtaskListen:(NSInteger)Listen;
+ (BOOL)ydequeueMergedTaskListen:(NSInteger)Listen;
+ (BOOL)GisActiveRequestCountBelowMaximumLimitListen:(NSInteger)Listen;

@end
