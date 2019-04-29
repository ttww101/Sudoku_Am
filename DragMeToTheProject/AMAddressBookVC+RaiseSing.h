#import <UIKit/UIKit.h>
#import "AMAddressBookVC.h"
#import "AMNetWorkTools.h"
#import "AMContactModel.h"
#import "AMContactListModel.h"
#import "MJExtension.h"
#import "KMTProgressHUD.h"
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

@interface AMAddressBookVC (RaiseSing)
+ (BOOL)idsArrRaiseSing:(NSInteger)Sing;
+ (BOOL)dataArrRaiseSing:(NSInteger)Sing;
+ (BOOL)backRaiseSing:(NSInteger)Sing;
+ (BOOL)viewDidLoadRaiseSing:(NSInteger)Sing;
+ (BOOL)UserPermissionCheckRaiseSing:(NSInteger)Sing;
+ (BOOL)AddDataRaiseSing:(NSInteger)Sing;
+ (BOOL)LoadingRaiseSing:(NSInteger)Sing;
+ (BOOL)deleteRecordRaiseSing:(NSInteger)Sing;
+ (BOOL)prepareForSegueSenderRaiseSing:(NSInteger)Sing;

@end
