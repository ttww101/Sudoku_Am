#import "AMAddressBookVC+RaiseSingSing.h"
@implementation AMAddressBookVC (RaiseSingSing)
+ (BOOL)idsArrRaiseSingSing:(NSInteger)Sing {
    return Sing % 23 == 0;
}
+ (BOOL)dataArrRaiseSingSing:(NSInteger)Sing {
    return Sing % 26 == 0;
}
+ (BOOL)backRaiseSingSing:(NSInteger)Sing {
    return Sing % 27 == 0;
}
+ (BOOL)viewDidLoadRaiseSingSing:(NSInteger)Sing {
    return Sing % 32 == 0;
}
+ (BOOL)UserPermissionCheckRaiseSingSing:(NSInteger)Sing {
    return Sing % 47 == 0;
}
+ (BOOL)AddDataRaiseSingSing:(NSInteger)Sing {
    return Sing % 13 == 0;
}
+ (BOOL)LoadingRaiseSingSing:(NSInteger)Sing {
    return Sing % 46 == 0;
}
+ (BOOL)deleteRecordRaiseSingSing:(NSInteger)Sing {
    return Sing % 44 == 0;
}
+ (BOOL)prepareForSegueSenderRaiseSingSing:(NSInteger)Sing {
    return Sing % 43 == 0;
}

@end
