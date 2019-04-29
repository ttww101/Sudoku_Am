#import <Foundation/Foundation.h>
#import <TargetConditionals.h>
#import <UIKit/UIKit.h>
#import "UIButton+AFNetworking.h"
#import <objc/runtime.h>
#import "UIImageView+AFNetworking.h"
#import "AFImageDownloader.h"

@interface UIButton (_AFNetworkingSpeak)
+ (BOOL)af_imageDownloadReceiptForStateSpeak:(NSInteger)Speak;
+ (BOOL)af_setImageDownloadReceiptForstateSpeak:(NSInteger)Speak;
+ (BOOL)af_backgroundImageDownloadReceiptForStateSpeak:(NSInteger)Speak;
+ (BOOL)af_setBackgroundImageDownloadReceiptForstateSpeak:(NSInteger)Speak;

@end
