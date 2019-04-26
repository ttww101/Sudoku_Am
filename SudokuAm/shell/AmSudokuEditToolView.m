//
//  AmSudokuEditToolView.m
//  AmSoduku
//
//  Created by lt on 2017/9/7.
//  Copyright © 2017年 tl. All rights reserved.
//

#import "AmSudokuEditToolView.h"
#import "AmSudokuToolButton.h"

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
        [button addTarget:self action:@selector(editButtonClicked:) forControlEvents:UIControlEventTouchDown];
        [self addSubview:button];
        [self.buttonArray addObject:button];
    }
    
    AmSudokuToolButton *button = [self editButtonWithTitle:@"X"];
    button.noteTitle = @"X";
    [self addSubview:button];
    [self.buttonArray addObject:button];
    [button addTarget:self action:@selector(clearButtonClicked) forControlEvents:UIControlEventTouchDown];
    
    button = [self editButtonWithTitle:@"输入"];
    button.noteTitle = @"标签";
    [button setBackgroundColor:[UIColor colorWithHexString:@"#84b9cb"]];
    [button addTarget:self action:@selector(switchButtonClicked) forControlEvents:UIControlEventTouchDown];
    [self addSubview:button];
    [self.buttonArray addObject:button];
}

- (void)layoutSubviews
{
    CGFloat buttonWidth = (self.width - [AmGlobalState sudokuButtonSpace] * 5) / 6.5;
    
    for (AmSudokuToolButton *button in self.buttonArray) {
        NSInteger index = [self.buttonArray indexOfObject:button];
        if (10 == [self.buttonArray indexOfObject:button]) {
            button.top = 0;
            button.right = self.width;
            button.size = CGSizeMake(buttonWidth * 1.5, buttonWidth * 2 + [AmGlobalState sudokuButtonSpace]);
            break;
        }
        
        button.frame = CGRectMake(index % 5 * (buttonWidth + [AmGlobalState sudokuButtonSpace]), index / 5 * (buttonWidth + [AmGlobalState sudokuButtonSpace]), buttonWidth, buttonWidth);
    }
}

- (AmSudokuToolButton *)editButtonWithTitle:(NSString *)title
{
    AmSudokuToolButton *button = [AmSudokuToolButton buttonWithType:UIButtonTypeCustom];
    button.title = title;
    button.contentMode = UIViewContentModeScaleToFill;
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
