//
//  AmSudokuToolButton.m
//  AmSoduku
//
//  Created by lt on 2017/9/22.
//  Copyright © 2017年 tl. All rights reserved.
//

#import "AmSudokuToolButton.h"

@implementation AmSudokuToolButton

- (instancetype)init
{
    if (self = [super init]) {
        self.isNoted = NO;
        self.noteTitle = @"";
    }
    return self;
}


- (void)setIsNoted:(BOOL)isNoted
{
    _isNoted = isNoted;
    if (isNoted) {
        [self setTitle:self.noteTitle forState:UIControlStateNormal];
        [self setBackgroundImage:self.ltBackgroundImage forState:UIControlStateNormal];
    } else {
        [self setTitle:self.title forState:UIControlStateNormal];
        [self setBackgroundImage:nil forState:UIControlStateNormal];
    }
}

@end
