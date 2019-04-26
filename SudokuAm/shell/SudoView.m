//
//  SudoView.m
//  Sudoku
//
//  Created by CSX on 2017/4/11.
//  Copyright © 2017年 宗盛商业. All rights reserved.
//

#import "SudoView.h"
#import "SudoModel.h"
#import "ICAlarmView.h"

#define BACKEDIT @"C" //后退一步 （这里只做后退一步操作，如果需要可以使用链表，数组记录,稍后有空会添加）
#define NEW @"A" //重新开始
#define SHOWINTERVAL 2 //显示的间隔量级，可表示难易程度，值越大越不能保证唯一性。

typedef enum :NSInteger{
    BTNTags = 10,
}Tags;

@interface SudoView ()
{
    int cellWidth;
    NSString *titleStr;
    UIView *bgView;
    BOOL isEdit;
    SudoModel *sudo_deal;
}
//初始值保护数组
@property (nonatomic , strong)NSMutableArray *initlizeIndexArr;
//后退一步数组记录
@property (nonatomic , strong)NSMutableArray *oldTitleArr;
//显示数组
@property (nonatomic , strong)NSMutableArray *dataArr;

@end

@implementation SudoView

- (NSMutableArray *)initlizeIndexArr{
    if (!_initlizeIndexArr) {
        _initlizeIndexArr = [NSMutableArray array];
    }
    return _initlizeIndexArr;
}
- (NSMutableArray *)oldTitleArr{
    if (!_oldTitleArr) {
        _oldTitleArr = [NSMutableArray array];
    }
    return _oldTitleArr;
}
- (NSMutableArray *)dataArr{
    if (!_dataArr) {
        _dataArr = [NSMutableArray array];
    }
    return _dataArr;
}
- (instancetype)initWithFrame:(CGRect)frame{
    if ([super initWithFrame:frame]) {
        sudo_deal = [[SudoModel alloc]init];
        isEdit = YES;
        cellWidth = (frame.size.width-20)/9;
        [self createViewWithFrame:frame];
        [self createButtonViewWithFrame:frame];
    }
    return self;
}
- (void)createViewWithFrame:(CGRect)frame{
    bgView = [[UIView alloc]initWithFrame:CGRectMake(0, 0,frame.size.width, frame.size.width)];
    bgView.backgroundColor = [UIColor colorWithRed:206/255.0 green:206/255.0 blue:206/255.0 alpha:1];
    bgView.layer.cornerRadius = 5;
    bgView.clipsToBounds = YES;
    [self addSubview:bgView];
    for (int i = 0; i < 81; i++) {
        UIButton *myCreateButton = [UIButton buttonWithType:UIButtonTypeSystem];
        if (i%9>=3 && i%9 <6) {
            myCreateButton = [self createWithBegain:10 andIndex:i];
        }else if (i%9 >= 6){
            myCreateButton = [self createWithBegain:15 andIndex:i];
        }else{
            myCreateButton = [self createWithBegain:5 andIndex:i];
        }
        [myCreateButton setBackgroundColor:[UIColor lightGrayColor]];
        myCreateButton.titleLabel.layer.cornerRadius = 5;
        myCreateButton.tag = BTNTags+i;
        myCreateButton.titleLabel.clipsToBounds = YES;
        [myCreateButton addTarget:self action:@selector(buttonChoose:) forControlEvents:UIControlEventTouchUpInside];
        [bgView addSubview:myCreateButton];
    }
    [self getNewData];
    [self refresh];
}

- (UIButton *)createWithBegain:(int)index andIndex:(int)i{
    UIButton *myCreateButton = [[UIButton alloc]init];
    if (i/9 >= 3 && i/9 <6) {
        myCreateButton.frame = CGRectMake(index+cellWidth*(i%9), 10+cellWidth*(i/9), cellWidth-5, cellWidth-5);
    }else if (i/9 >= 6) {
        myCreateButton.frame = CGRectMake(index+cellWidth*(i%9), 15+cellWidth*(i/9), cellWidth-5, cellWidth-5);
    }else{
        myCreateButton.frame = CGRectMake(index+cellWidth*(i%9), 5+cellWidth*(i/9), cellWidth-5, cellWidth-5);
    }
    return myCreateButton;
}

- (void)buttonChoose:(UIButton *)sender{
    __weak typeof(self) weakself = self;
    if (isEdit) {
        NSMutableDictionary *tempDic = [[NSMutableDictionary alloc]init];
        [tempDic setValue:sender.currentTitle forKey:[NSString stringWithFormat:@"%ld",sender.tag-BTNTags]];
        [self.oldTitleArr addObject:tempDic];
        //判断是否需要修改字段，是否是初始元素
        if (![self.initlizeIndexArr containsObject:[NSNumber numberWithInteger:sender.tag-BTNTags]]) {
            [sender setTitle:titleStr forState:UIControlStateNormal];
            [sudo_deal isSatisfyWithDataArr:self.dataArr WithIndex:(int)(sender.tag-BTNTags) AndTitle:titleStr WithBlock:^(BOOL isSatisfy, NSArray *errIndexArr) {
                dispatch_async(dispatch_get_main_queue(), ^{
                    if (!isSatisfy) {
                        for (int i = 0; i<errIndexArr.count; i++) {
                            int ind = [errIndexArr[i] intValue];
                            UIButton *btn = [bgView viewWithTag:ind+BTNTags];
                            [btn setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
                        }
                        isEdit = NO;
                    }else{
                        [weakself.dataArr replaceObjectAtIndex:(int)(sender.tag-BTNTags) withObject:titleStr];
                        if (![weakself.dataArr containsObject:@""]) {
                            [self performSelectorOnMainThread:@selector(Success) withObject:nil waitUntilDone:nil];
                        }
                    }
                });
            }];
        }
    }
}
- (void)Success{
    ICAlarmView *alertView = [[ICAlarmView alloc]initWithAlarmWithTitle:@"Success" message:@"成功！！" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil andButtonStateIsVertica:YES andIsContentTextfield:NO];
    [alertView show];
    
}
- (void)createButtonViewWithFrame:(CGRect)frame{
    int celWidth = (frame.size.width-20)/6;
    for (int i = 0; i<11; i++) {
        UIButton *myCreateButton = [UIButton buttonWithType:UIButtonTypeSystem];
        myCreateButton.frame = CGRectMake(10+i%6*celWidth, frame.size.width+25+(i/6)*75-20,celWidth-5, 50);
        [myCreateButton setBackgroundColor:[UIColor grayColor]];
        if (i == 9) {
            [myCreateButton setTitle:NEW forState:UIControlStateNormal];
        }else if (i == 10){
            [myCreateButton setTitle:BACKEDIT forState:UIControlStateNormal];
        }else{
          [myCreateButton setTitle:[NSString stringWithFormat:@"%d",i+1] forState:UIControlStateNormal];
        }
        [myCreateButton addTarget:self action:@selector(titleChoose:) forControlEvents:UIControlEventTouchUpInside];
        [self addSubview:myCreateButton];
    }
}
- (void)titleChoose:(UIButton *)sender{
    NSString *title = sender.titleLabel.text;
    if ([title isEqualToString:BACKEDIT]) {
        isEdit = YES;
        NSMutableDictionary *tempDic = [self.oldTitleArr lastObject];
        int index = [[[tempDic allKeys] firstObject] intValue];
        NSString *lastStr = [tempDic objectForKey:[[tempDic allKeys] firstObject]];
        if (lastStr.length>0) {
            [self.dataArr replaceObjectAtIndex:index withObject:lastStr];
        }else{
            [self.dataArr replaceObjectAtIndex:index withObject:@""];
        }
        [self refresh];
        [self.oldTitleArr removeLastObject];
    }else if ([title isEqualToString:NEW]){
        [self getNewData];
        [self refresh];
    }else{
        titleStr =title;
    }
}

- (void)refresh{
    for (int i = 0; i<self.dataArr.count; i++) {
        UIButton *button = [bgView viewWithTag:BTNTags+i];
//        button.titleLabel.text = self.dataArr[i];
        [button setTitle:self.dataArr[i] forState:UIControlStateNormal];
        [button setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    }
}
- (void)getNewData{
    [self.initlizeIndexArr removeAllObjects];
    self.dataArr = [sudo_deal generateRandomSudo];
    NSLog(@">>>>>>>>>>%@",self.dataArr);
    NSInteger count = self.dataArr.count;
    for (int i = 0; i<count; i++) {
        int a = arc4random()%SHOWINTERVAL;
        if (a==1) {
            [self.initlizeIndexArr addObject:[NSNumber numberWithInt:i]];
        }else{
            [self.dataArr replaceObjectAtIndex:i withObject:@""];
        }
    }
}



/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
