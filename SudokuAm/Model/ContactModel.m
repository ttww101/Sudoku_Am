
#import "ContactModel.h"

@implementation ContactModel

+(NSDictionary *)mj_objectClassInArray{
    
    return @{@"list":[ContactListModel class]};
}


@end
