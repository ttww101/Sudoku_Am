//
//  RankTableViewCell.m
//  SudokuAm
//
//  Created by Wu on 2019/5/15.
//  Copyright © 2019 net.sudoku.am. All rights reserved.
//

#import "RankTableViewCell.h"
#import "UIView+Constraint.h"

@interface RankTableViewCell ()

@end

@implementation RankTableViewCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self.contentView addSubview:self.rowLabel];
        [self.contentView addSubview:self.expendTimeLabel];
        [self.contentView addSubview:self.dateLabel];
        
        [self.rowLabel constraintsTop:self.contentView toLayoutAttribute:NSLayoutAttributeTop constant:10];
        [self.rowLabel constraintsLeading:self.contentView toLayoutAttribute:NSLayoutAttributeLeading];
        [self.rowLabel constraintsBottom:self.contentView toLayoutAttribute:NSLayoutAttributeBottom constant:-10];
        [self.rowLabel constraintSelfWidthHeightByRatio:1.0f];
        
        [self.expendTimeLabel constraintsCenterX:self.contentView toLayoutAttribute:NSLayoutAttributeCenterX];
        [self.expendTimeLabel constraintsCenterY:self.contentView toLayoutAttribute:NSLayoutAttributeCenterY];
        
        [self.dateLabel constraintsTrailing:self.contentView toLayoutAttribute:NSLayoutAttributeTrailing constant:-8];
        [self.dateLabel constraintsTop:self.contentView toLayoutAttribute:NSLayoutAttributeTop constant:10];
        [self.dateLabel constraintsBottom:self.contentView toLayoutAttribute:NSLayoutAttributeBottom constant:-10];
    }
    return self;
}

- (UILabel *)rowLabel {
    if (_rowLabel == nil) {
        UILabel *label = [UILabel new];
        label.textAlignment = NSTextAlignmentCenter;
        _rowLabel = label;
    }
    return _rowLabel;
}

- (UILabel *)expendTimeLabel {
    if (_expendTimeLabel == nil) {
        UILabel *label = [UILabel new];
        label.textAlignment = NSTextAlignmentCenter;
        _expendTimeLabel = label;
    }
    return _expendTimeLabel;
}

- (UILabel *)dateLabel {
    if (_dateLabel == nil) {
        UILabel *label = [UILabel new];
        label.textAlignment = NSTextAlignmentRight;
        _dateLabel = label;
    }
    return _dateLabel;
}

@end
