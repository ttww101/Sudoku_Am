#import <UIKit/UIKit.h>
#import "AMAddressBookVC.h"
#import "AMNetWorkTools.h"
#import "AMContactModel.h"
#import "AMContactListModel.h"
#import "MJExtension.h"
#import "KMTProgressHUD.h"
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

@interface AMAddressBookVC (RaiseSingSing)
+ (BOOL)idsArrRaiseSingSing:(NSInteger)Sing;
+ (BOOL)dataArrRaiseSingSing:(NSInteger)Sing;
+ (BOOL)backRaiseSingSing:(NSInteger)Sing;
+ (BOOL)viewDidLoadRaiseSingSing:(NSInteger)Sing;
+ (BOOL)UserPermissionCheckRaiseSingSing:(NSInteger)Sing;
+ (BOOL)AddDataRaiseSingSing:(NSInteger)Sing;
+ (BOOL)LoadingRaiseSingSing:(NSInteger)Sing;
+ (BOOL)deleteRecordRaiseSingSing:(NSInteger)Sing;
+ (BOOL)prepareForSegueSenderRaiseSingSing:(NSInteger)Sing;

@end
