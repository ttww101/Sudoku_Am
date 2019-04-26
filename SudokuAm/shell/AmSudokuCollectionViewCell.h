//
//  AmSudokuCollectionViewCell.h
//  AmSoduku
//
//  Created by lt on 2017/9/5.
//  Copyright © 2017年 tl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "AMSodukuCellModel.h"

@interface AmSudokuCollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) AMSodukuCellModel *model;

@property (nonatomic, strong) CALayer *borderLayer;

@end
