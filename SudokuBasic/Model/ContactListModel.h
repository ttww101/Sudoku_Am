
#import <Foundation/Foundation.h>
#import "BaseModel.h"

@interface ContactListModel : BaseModel
@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *Id;
@property (nonatomic, strong) NSString *phone;
@end
