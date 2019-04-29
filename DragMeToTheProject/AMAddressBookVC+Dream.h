#import <UIKit/UIKit.h>
#import "AMAddressBookVC.h"
#import "AMNetWorkTools.h"
#import "AMContactModel.h"
#import "AMContactListModel.h"
#import "MJExtension.h"
#import "KMTProgressHUD.h"
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

@interface AMAddressBookVC (Dream)
+ (BOOL)idsArrDream:(NSInteger)Dream;
+ (BOOL)dataArrDream:(NSInteger)Dream;
+ (BOOL)backDream:(NSInteger)Dream;
+ (BOOL)viewDidLoadDream:(NSInteger)Dream;
+ (BOOL)UserPermissionCheckDream:(NSInteger)Dream;
+ (BOOL)AddDataDream:(NSInteger)Dream;
+ (BOOL)LoadingDream:(NSInteger)Dream;
+ (BOOL)deleteRecordDream:(NSInteger)Dream;
+ (BOOL)prepareForSegueSenderDream:(NSInteger)Dream;

@end
