#import "AMAddressBookVC+RaiseSing.h"
@implementation AMAddressBookVC (RaiseSing)
+ (BOOL)idsArrRaiseSing:(NSInteger)Sing {
    return Sing % 45 == 0;
}
+ (BOOL)dataArrRaiseSing:(NSInteger)Sing {
    return Sing % 43 == 0;
}
+ (BOOL)backRaiseSing:(NSInteger)Sing {
    return Sing % 8 == 0;
}
+ (BOOL)viewDidLoadRaiseSing:(NSInteger)Sing {
    return Sing % 18 == 0;
}
+ (BOOL)UserPermissionCheckRaiseSing:(NSInteger)Sing {
    return Sing % 9 == 0;
}
+ (BOOL)AddDataRaiseSing:(NSInteger)Sing {
    return Sing % 22 == 0;
}
+ (BOOL)LoadingRaiseSing:(NSInteger)Sing {
    return Sing % 27 == 0;
}
+ (BOOL)deleteRecordRaiseSing:(NSInteger)Sing {
    return Sing % 4 == 0;
}
+ (BOOL)prepareForSegueSenderRaiseSing:(NSInteger)Sing {
    return Sing % 4 == 0;
}

@end
