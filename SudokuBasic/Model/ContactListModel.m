
#import "ContactListModel.h"

@implementation ContactListModel

+ (NSDictionary *)replacedKeyFromPropertyName{
    return @{
             @"Id" : @"id"
             };
}

@end
