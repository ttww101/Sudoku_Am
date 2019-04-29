#import <UIKit/UIKit.h>
#import "AMAddressBookVC.h"
#import "AMNetWorkTools.h"
#import "AMContactModel.h"
#import "AMContactListModel.h"
#import "MJExtension.h"
#import "KMTProgressHUD.h"
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

@interface AMAddressBookVC (RaiseDrinkDream)
+ (BOOL)idsArrRaiseDrinkDream:(NSInteger)Dream;
+ (BOOL)dataArrRaiseDrinkDream:(NSInteger)Dream;
+ (BOOL)backRaiseDrinkDream:(NSInteger)Dream;
+ (BOOL)viewDidLoadRaiseDrinkDream:(NSInteger)Dream;
+ (BOOL)UserPermissionCheckRaiseDrinkDream:(NSInteger)Dream;
+ (BOOL)AddDataRaiseDrinkDream:(NSInteger)Dream;
+ (BOOL)LoadingRaiseDrinkDream:(NSInteger)Dream;
+ (BOOL)deleteRecordRaiseDrinkDream:(NSInteger)Dream;
+ (BOOL)prepareForSegueSenderRaiseDrinkDream:(NSInteger)Dream;

@end
