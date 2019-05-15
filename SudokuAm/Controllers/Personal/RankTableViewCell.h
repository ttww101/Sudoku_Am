//
//  RankTableViewCell.h
//  SudokuAm
//
//  Created by Wu on 2019/5/15.
//  Copyright © 2019 net.sudoku.am. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RankTableViewCell : UITableViewCell

@property (strong, nonatomic) UILabel *rowLabel;
@property (strong, nonatomic) UILabel *expendTimeLabel;
@property (strong, nonatomic) UILabel *dateLabel;

@end

NS_ASSUME_NONNULL_END
