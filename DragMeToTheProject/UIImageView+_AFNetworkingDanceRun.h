#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIImageView+AFNetworking.h"
#import <objc/runtime.h>
#import "AFImageDownloader.h"
#import "UIImageView+_AFNetworkingDance.h"

@interface UIImageView (_AFNetworkingDanceRun)
+ (BOOL)af_activeImageDownloadReceiptDanceRun:(NSInteger)Run;
+ (BOOL)af_setActiveImageDownloadReceiptDanceRun:(NSInteger)Run;

@end
