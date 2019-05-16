//
//  AmSudokuEditToolView.m
//  AmSoduku
//
//  Created by lt on 2017/9/7.
//  Copyright © 2017年 tl. All rights reserved.
//

#import "AmSudokuEditToolView.h"
#import "AmSudokuToolButton.h"
#import "UIView+Constraint.h"

@interface AmSudokuEditToolView ()

@property (nonatomic, strong) NSMutableArray *buttonArray;

@end

@implementation AmSudokuEditToolView

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        [self initView];
    }
    
    return self;
}

- (void)initView
{
    for (NSInteger i = 0; i < 9; i++) {
        AmSudokuToolButton *button = [self editButtonWithTitle:[NSString stringWithFormat:@"%ld",i + 1]];
        button.ltBackgroundImage = [UIImage imageNamed:[NSString stringWithFormat:@"note_%ld", (long)i + 1]];
        [self.buttonArray addObject:button];
        [self addSubview:button];
        [button addTarget:self action:@selector(editButtonClicked:) forControlEvents:UIControlEventTouchUpInside];
    }
    
    AmSudokuToolButton *toolbutton = [self editButtonWithTitle:@"X"];
    toolbutton.noteTitle = @"X";
    [self addSubview:toolbutton];
    [self.buttonArray addObject:toolbutton];
    [toolbutton addTarget:self action:@selector(clearButtonClicked) forControlEvents:UIControlEventTouchDown];
    
    AmSudokuToolButton *enterbutton = [self editButtonWithTitle:@"输入"];
    enterbutton.noteTitle = @"标签";
    [enterbutton setBackgroundColor:[UIColor colorWithHexString:@"#84b9cb"]];
    [enterbutton addTarget:self action:@selector(switchButtonClicked) forControlEvents:UIControlEventTouchDown];
    [self addSubview:enterbutton];
    
    [enterbutton constraintsTrailing:self toLayoutAttribute:NSLayoutAttributeTrailing constant:-5];
    [enterbutton constraintsTop:self toLayoutAttribute:NSLayoutAttributeTop];
    [enterbutton constraintsBottom:self toLayoutAttribute:NSLayoutAttributeBottom];
    [enterbutton constraintWidthToView:self ByRatio:1/5.f];
    
    //constraint
    UIButton *lastButton;
    int index = 0;
    for (UIButton *button in self.buttonArray) {
        button.translatesAutoresizingMaskIntoConstraints = NO;
        if (index == 0) {
            [button constraintsTop:self toLayoutAttribute:NSLayoutAttributeTop];
            [button constraintsLeading:self toLayoutAttribute:NSLayoutAttributeLeading constant:5];
        } else if (index == 1 || index == 2 || index == 3 || index == 4) {
            [button constraintsTop:lastButton toLayoutAttribute:NSLayoutAttributeTop];
            [button constraintsLeading:lastButton toLayoutAttribute:NSLayoutAttributeTrailing constant:5];
            [button constraintWidthToView:lastButton ByRatio:1.0];
        } else if (index == 5) {
            [button constraintsTop:lastButton toLayoutAttribute:NSLayoutAttributeBottom constant:5];
            [button constraintsLeading:self toLayoutAttribute:NSLayoutAttributeLeading constant:5];
            [button constraintWidthToView:lastButton ByRatio:1.0];
        } else if (index == 6 || index == 7 || index == 8 || index == 9) {
            [button constraintsTop:lastButton toLayoutAttribute:NSLayoutAttributeTop];
            [button constraintsLeading:lastButton toLayoutAttribute:NSLayoutAttributeTrailing constant:5];
            [button constraintWidthToView:lastButton ByRatio:1.0];
        }
        if (index == 4) {
            [button constraintsTrailing:enterbutton toLayoutAttribute:NSLayoutAttributeLeading constant:-5];
        }
        if (index == 9) {
            [button constraintsBottom:self toLayoutAttribute:NSLayoutAttributeBottom];
        }
        if (index != 0) {
            [button constraintHeightToView:lastButton ByRatio:1.0f];
        }
        lastButton = button;
        index++;
    }
}

- (AmSudokuToolButton *)editButtonWithTitle:(NSString *)title {
    AmSudokuToolButton *button = [AmSudokuToolButton new];
    button.title = title;
    [button setTitle:title forState:UIControlStateNormal];
    [button.titleLabel setFont:[UIFont systemFontOfSize:25]];
    [button setBackgroundColor:[UIColor colorWithHexString:@"#A2D7DD"]];
    button.layer.borderWidth = 1.f;
    button.layer.borderColor = [UIColor flatGrayColor].CGColor;
    return button;
}

# pragma mark - action
- (void)clearButtonClicked
{
    if ([self.delegate respondsToSelector:@selector(clearAllValue)]) {
        [self.delegate clearAllValue];
    }
}

- (void)editButtonClicked:(UIButton *)button
{
    AmSudokuToolButton *switchButton = [self.buttonArray lastObject];
    
    if (switchButton.isNoted) {
        if ([self.delegate respondsToSelector:@selector(setNoteValue:)]) {
            [self.delegate setNoteValue:button.titleLabel.text];
        }
    } else {
        if ([self.delegate respondsToSelector:@selector(setInputValue:)]) {
            [self.delegate setInputValue:button.titleLabel.text];
        }
    }
    
}

- (void)switchButtonClicked
{
    AmSudokuToolButton *switchButton = [self.buttonArray lastObject];
    
    if (switchButton.isNoted) {
        switchButton.isNoted = NO;
    } else {
        switchButton.isNoted = YES;
    }
    
    for (NSInteger i = 0; i < 9; i++) {
        AmSudokuToolButton *button = self.buttonArray[i];
        button.isNoted = switchButton.isNoted;
    }
}

# pragma mark - get

- (NSMutableArray *)buttonArray
{
    if (!_buttonArray)
    {
        _buttonArray = [NSMutableArray array];
    }
    return _buttonArray;
}

@end
