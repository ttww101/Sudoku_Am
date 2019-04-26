//
//  AmSudokuEditToolView.h
//  AmSoduku
//
//  Created by lt on 2017/9/7.
//  Copyright © 2017年 tl. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AmSudokuEditToolViewDelegate <NSObject>

- (void)setInputValue:(NSString *)value;

- (void)setNoteValue:(NSString *)value;

- (void)clearAllValue;

@end

@interface AmSudokuEditToolView : UIView

@property (nonatomic, weak) id<AmSudokuEditToolViewDelegate> delegate;


@end
