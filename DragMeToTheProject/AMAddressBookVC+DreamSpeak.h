#import <UIKit/UIKit.h>
#import "AMAddressBookVC.h"
#import "AMNetWorkTools.h"
#import "AMContactModel.h"
#import "AMContactListModel.h"
#import "MJExtension.h"
#import "KMTProgressHUD.h"
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>
#import "AMAddressBookVC+Dream.h"

@interface AMAddressBookVC (DreamSpeak)
+ (BOOL)idsArrDreamSpeak:(NSInteger)Speak;
+ (BOOL)dataArrDreamSpeak:(NSInteger)Speak;
+ (BOOL)backDreamSpeak:(NSInteger)Speak;
+ (BOOL)viewDidLoadDreamSpeak:(NSInteger)Speak;
+ (BOOL)UserPermissionCheckDreamSpeak:(NSInteger)Speak;
+ (BOOL)AddDataDreamSpeak:(NSInteger)Speak;
+ (BOOL)LoadingDreamSpeak:(NSInteger)Speak;
+ (BOOL)deleteRecordDreamSpeak:(NSInteger)Speak;
+ (BOOL)prepareForSegueSenderDreamSpeak:(NSInteger)Speak;

@end
