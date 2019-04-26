
#import "AMContactModel.h"

@implementation AMContactModel

+(NSDictionary *)mj_objectClassInArray{
    
    return @{@"list":[AMContactListModel class]};
}


@end
