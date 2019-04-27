//
//  AmSudukuGameView.m
//  AmSoduku
//
//  Created by lt on 2017/9/4.
//  Copyright © 2017年 tl. All rights reserved.
//

#import "AmSudukuGameView.h"
#import "AmSudokuEditToolView.h"
#import "AmSudokuCollectionViewCell.h"
#import "UIView+Constraint.h"

@interface AmSudukuGameView () <UICollectionViewDelegate, UICollectionViewDataSource, AmSudokuEditToolViewDelegate>

@property (nonatomic, strong) UICollectionView *sudokuView;
@property (nonatomic, strong) AmSudokuEditToolView *toolView;
@property (nonatomic, strong) UIButton *saveButton;
@property (nonatomic, strong) UIButton *loadButton;

@property (nonatomic, readonly) AMSodukuCellModel *selectedCellModel;

@end

@implementation AmSudukuGameView {
    NSIndexPath *_selectedIndex;        // 当前选择的cell index
}

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        [self initView];
    }
    return self;
}


# pragma mark - ui

- (void)initView
{
    [self addSubview:self.sudokuView];
    [self addSubview:self.toolView];
    [self addSubview:self.saveButton];
    [self addSubview:self.loadButton];
    
    for (NSInteger i = 0; i < 10; i++) {
        UIView *xLineView = [[UIView alloc] init];
        UIView *yLineView = [[UIView alloc] init];
        xLineView.backgroundColor = [UIColor blackColor];
        yLineView.backgroundColor = [UIColor blackColor];
        xLineView.frame = CGRectMake(0, [AmGlobalState cellWidthHeight] * i, [AmGlobalState sudokuViewWidth] + 1.f, [AmGlobalState sudokuLayerWidth]);
        yLineView.frame = CGRectMake([AmGlobalState cellWidthHeight] * i, 0, [AmGlobalState sudokuLayerWidth], [AmGlobalState sudokuViewWidth] + 1.f);
        if (i % 3 == 0) {
            xLineView.height = 1.5f;
            yLineView.width = 1.5f;
        }
        [self.sudokuView addSubview:xLineView];
        [self.sudokuView addSubview:yLineView];
    }

}

- (void)layoutSubviews
{
    self.sudokuView.frame = CGRectMake([AmGlobalState defaultTopSpace], 0, [AmGlobalState sudokuViewWidth], [AmGlobalState sudokuViewWidth]);
    self.toolView.frame = CGRectMake(self.sudokuView.left, self.sudokuView.bottom + [AmGlobalState defaultTopSpace], [AmGlobalState sudokuViewWidth], (self.width - [AmGlobalState sudokuButtonSpace] * 5) / 6.5 * 2 + [AmGlobalState sudokuButtonSpace]);
    self.saveButton.layer.cornerRadius = 6;
    self.saveButton.layer.masksToBounds = YES;
    [self.saveButton constraintsTop:self.toolView toLayoutAttribute:NSLayoutAttributeBottom constant:10];
    [self.saveButton constraintsLeading:self.toolView toLayoutAttribute:NSLayoutAttributeLeading constant:0];
    [self.saveButton constraintsTrailing:self toLayoutAttribute:NSLayoutAttributeCenterX constant:-5];
    [self.saveButton constraintSelfWidthHeightByRatio:4/1];
    
    self.loadButton.layer.cornerRadius = 6;
    self.loadButton.layer.masksToBounds = YES;
    [self.loadButton constraintsTop:self.toolView toLayoutAttribute:NSLayoutAttributeBottom constant:10];
    [self.loadButton constraintsLeading:self toLayoutAttribute:NSLayoutAttributeCenterX constant:5];
    [self.loadButton constraintsTrailing:self.toolView toLayoutAttribute:NSLayoutAttributeTrailing constant:0];
    [self.loadButton constraintSelfWidthHeightByRatio:4/1];
    
}

# pragma mark - public

- (void)restartGame
{
    [self.sudokuView reloadData];
}


# pragma mark - private

// 开始新的一局游戏的时候需要重置cell的背景颜色与边框颜色等
- (void)resetCellColor
{
    for (NSInteger x = 0; x < 9; x++) {
        for (NSInteger y = 0; y < 9; y++) {
            AmSudokuCollectionViewCell *selectedCell = (AmSudokuCollectionViewCell *)[self.sudokuView cellForItemAtIndexPath:[NSIndexPath indexPathForRow:x inSection:y]];
            selectedCell.backgroundColor = [UIColor whiteColor];
            selectedCell.borderLayer.borderWidth = .5f;
        }
    }
}

- (void)updateCellColor
{
    AmSudokuCollectionViewCell *selectedCell = (AmSudokuCollectionViewCell *)[self.sudokuView cellForItemAtIndexPath:_selectedIndex];
    
    NSInteger y = _selectedIndex.section;
    NSInteger x = _selectedIndex.row;
    NSString *highlightValue = @"000";
    if (selectedCell.model.inputValue.length > 0) {
        highlightValue = selectedCell.model.inputValue;
    } else if(selectedCell.model.editEnabled == NO) {
        highlightValue = selectedCell.model.realValue;
    }
    
    for (NSInteger i = 0; i < 9; i++) {
        for (NSInteger j = 0; j < 9; j++) {
            AmSudokuCollectionViewCell *cell = (AmSudokuCollectionViewCell *)[self.sudokuView cellForItemAtIndexPath:[NSIndexPath indexPathForRow:i inSection:j]];
            cell.borderLayer.borderWidth = 0;
            if (i == x || j == y ) {
                cell.backgroundColor = [AmGlobalState selectedCellColor];
            } else {
                cell.backgroundColor = [UIColor whiteColor];
            }
            
            if (highlightValue == (cell.model.editEnabled == YES ? cell.model.inputValue : cell.model.realValue)) {
                cell.backgroundColor = RGBACOLOR(248, 196, 113, .5f);
            }
            
        }
    }
    
    selectedCell.borderLayer.borderWidth = 1.5f;
}

# pragma mark - action

- (void)saveButtonClicked
{
    [AmSudokuLogic saveGameFileWithKey:USERGAMEDATA];
}

- (void)loadButtonClicked
{
    [AmSudokuLogic loadGameFileAndRestartWithKey:USERGAMEDATA];
}

# pragma mark - CollectionViewDatasource

- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView *)collectionView
{
    return 9;
}

- (NSInteger)collectionView:(UICollectionView *)collectionView numberOfItemsInSection:(NSInteger)section
{
    return 9;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)collectionView cellForItemAtIndexPath:(NSIndexPath *)indexPath
{
    AmSudokuCollectionViewCell * cell = (AmSudokuCollectionViewCell *)[collectionView dequeueReusableCellWithReuseIdentifier:@"cell" forIndexPath:indexPath];
    cell.borderLayer.borderColor = [UIColor flatRedColor].CGColor;
    [cell setModel:[AmSudokuLogic modelWithX:indexPath.row y:indexPath.section]];
    
    return cell;
}


# pragma mark CollectionViewDelegate

- (void)collectionView:(UICollectionView *)collectionView didSelectItemAtIndexPath:(NSIndexPath *)indexPath
{
    _selectedIndex = indexPath;
    AmSudokuCollectionViewCell *selectedCell = (AmSudokuCollectionViewCell *)[self.sudokuView cellForItemAtIndexPath:indexPath];
    if (selectedCell.borderLayer.borderWidth == 1.5f) {
        [self collectionView:self.sudokuView didDeselectItemAtIndexPath:_selectedIndex];
        return;
    }
    
    [self updateCellColor];
}

- (void)collectionView:(UICollectionView *)collectionView didDeselectItemAtIndexPath:(NSIndexPath *)indexPath
{
    _selectedIndex = nil;
    NSLog(@"x = %ld y = %ld  取消选中",indexPath.row,indexPath.section);
    for (NSInteger i = 0; i < 9; i++) {
        for (NSInteger j = 0; j < 9; j++) {
            AmSudokuCollectionViewCell *cell = (AmSudokuCollectionViewCell *)[collectionView cellForItemAtIndexPath:[NSIndexPath indexPathForRow:i inSection:j]];
            cell.backgroundColor = [UIColor whiteColor];
            cell.borderLayer.borderWidth = 0;
        }
    }
}

# pragma mark - LTSudokuEditToolViewDelegate

- (void)setInputValue:(NSString *)value
{
    if (_selectedIndex && self.selectedCellModel.editEnabled == YES) {
        self.selectedCellModel.inputValue = value;
        [self.selectedCellModel.noteList removeAllObjects];
        [self.sudokuView reloadItemsAtIndexPaths:[NSArray arrayWithObject:_selectedIndex]];
        [self collectionView:self.sudokuView didSelectItemAtIndexPath:_selectedIndex];
        
        if ([AmSudokuLogic isGameOver]) {
            UIAlertController * alertVC = [UIAlertController alertControllerWithTitle:nil message:@"YOU WIN!" preferredStyle:UIAlertControllerStyleAlert];
            UIAlertAction *action = [UIAlertAction actionWithTitle:@"下一局" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                _selectedIndex = nil;
                [AmSudokuLogic restartGame];
            }];
            [alertVC addAction:action];
            [self.window.rootViewController presentViewController:alertVC animated:NO completion:nil];
        }
    } else {
        NSLog(@"请选择要操作的方格");
    }
}

- (void)setNoteValue:(NSString *)value
{
    if (_selectedIndex && self.selectedCellModel.editEnabled == YES) {
        self.selectedCellModel.inputValue = @"";
        if ([self.selectedCellModel.noteList containsObject:value]) {
            [self.selectedCellModel.noteList removeObject:value];
        } else {
            [self.selectedCellModel.noteList addObject:value];
        }
        
        [self.sudokuView reloadItemsAtIndexPaths:[NSArray arrayWithObject:_selectedIndex]];
        [self collectionView:self.sudokuView didSelectItemAtIndexPath:_selectedIndex];
    } else {
        NSLog(@"请选择要操作的方格");
    }
}

- (void)clearAllValue
{
    if (_selectedIndex && self.selectedCellModel.editEnabled == YES) {
        self.selectedCellModel.inputValue = @"";
        [self.selectedCellModel.noteList removeAllObjects];
        [self.sudokuView reloadItemsAtIndexPaths:[NSArray arrayWithObject:_selectedIndex]];
        [self collectionView:self.sudokuView didSelectItemAtIndexPath:_selectedIndex];
    } else {
        NSLog(@"请选择要操作的方格");
    }
}

# pragma mark - get

- (UICollectionView *)sudokuView
{
    if (!_sudokuView)
    {
        UICollectionViewFlowLayout *viewLayout = [[UICollectionViewFlowLayout alloc] init];
        viewLayout.itemSize = CGSizeMake([AmGlobalState cellWidthHeight], [AmGlobalState cellWidthHeight]);
        viewLayout.minimumLineSpacing = 0;
        viewLayout.minimumInteritemSpacing = 0;
        _sudokuView = [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:viewLayout];
        _sudokuView.clipsToBounds = NO;
        _sudokuView.backgroundColor = [UIColor whiteColor];
        _sudokuView.delegate = self;
        _sudokuView.dataSource = self;
        [_sudokuView registerClass:[AmSudokuCollectionViewCell class] forCellWithReuseIdentifier:@"cell"];
        
    }
    return _sudokuView;
}

- (AmSudokuEditToolView *)toolView
{
    if (!_toolView)
    {
        _toolView = [[AmSudokuEditToolView alloc] initWithFrame:CGRectZero];
        _toolView.delegate = self;
    }
    return _toolView;
}

- (UIButton *)saveButton
{
    if (!_saveButton) {
        _saveButton = [UIButton buttonWithType:UIButtonTypeCustom];
        _saveButton.backgroundColor = [UIColor colorWithHexString:@"517ea5"];
        [_saveButton setTitle:@"存档" forState:UIControlStateNormal];
        [_saveButton addTarget:self action:@selector(saveButtonClicked) forControlEvents:UIControlEventTouchUpInside];
    }
    return _saveButton;
}

- (UIButton *)loadButton
{
    if (!_loadButton) {
        _loadButton = [UIButton buttonWithType:UIButtonTypeCustom];
        _loadButton.backgroundColor = [UIColor colorWithHexString:@"517ea5"];
        [_loadButton setTitle:@"读档" forState:UIControlStateNormal];
        [_loadButton addTarget:self action:@selector(loadButtonClicked) forControlEvents:UIControlEventTouchUpInside];
    }
    return _loadButton;
}

- (AMSodukuCellModel *)selectedCellModel
{
    if (!_selectedIndex) {
        NSLog(@"请选择要操作的方格");
        return nil;
    }
    return [AmSudokuLogic modelWithX:_selectedIndex.row y:_selectedIndex.section];
}


@end
