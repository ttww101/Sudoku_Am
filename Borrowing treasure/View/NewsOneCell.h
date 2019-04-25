//
//  NewsOneCell.h
//  Borrowing treasure
//
//  Created by  何浩贤 on 2017/12/8.
//  Copyright © 2017年 com.BorrowingTreasure.yijia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewsOneModel.h"

@interface NewsOneCell : UITableViewCell
@property (nonatomic, strong) UILabel *titleLab;
@property (nonatomic, strong) UIImageView *imageV;
@property (nonatomic, strong) UILabel *timeLab;
@property (nonatomic, strong) NewsOneModel *model;
@end
