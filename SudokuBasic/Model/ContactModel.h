
#import <Foundation/Foundation.h>
#import "BaseModel.h"
#import "ContactListModel.h"

@interface ContactModel : BaseModel
@property (nonatomic, strong) NSArray *list;
@end

