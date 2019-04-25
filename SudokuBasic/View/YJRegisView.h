
#import <UIKit/UIKit.h>

typedef void(^YJRegisViewRegisBlock)(void);
typedef void(^YJRegisViewExamBlock)(void);

@interface YJRegisView : UIView
@property (nonatomic, strong) UITextField *userTF;
@property (nonatomic, strong) UITextField *passTF;
@property (nonatomic, strong) UITextField *repassTF;
@property (nonatomic, strong) UITextField *examTF;
@property (nonatomic, strong) UIImageView *examImageV;
@property (nonatomic, strong) UIButton *examImageButton;
@property (nonatomic, strong) UIButton *regisBtn;

-(instancetype)initWithFrame:(CGRect)frame;

@property (nonatomic, copy) YJRegisViewExamBlock examblock;

@property (nonatomic, copy) YJRegisViewRegisBlock regisBlock;
@end
