
#import <UIKit/UIKit.h>

typedef void(^YJRegisViewRegisBlock)(void);
typedef void(^YJRegisViewExamBlock)(void);

@interface AYMJRegisView : UIView
@property (nonatomic, strong) UITextField *userTF;
@property (nonatomic, strong) UITextField *passTF;
@property (nonatomic, strong) UITextField *repassTF;
@property (nonatomic, strong) UITextField *emailTF;
@property (nonatomic, strong) UIButton *regisBtn;

-(instancetype)initWithFrame:(CGRect)frame;

@property (nonatomic, copy) YJRegisViewExamBlock examblock;

@property (nonatomic, copy) YJRegisViewRegisBlock regisBlock;
@end
