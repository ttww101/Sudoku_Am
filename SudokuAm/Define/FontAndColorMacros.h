//
//  FontAndColorMacros.h
//  亿红酒
//
//  Created by 蜗牛 on 2017/10/17.
//  Copyright © 2017年 SnailLi. All rights reserved.
//

#ifndef FontAndColorMacros_h
#define FontAndColorMacros_h

#pragma mark ————— 字体区 —————
//特大号字体
#define BigFont                        23*Height_Scale
//标题字体
#define  HeadingsFont                  12*Height_Scale
//次级字体
#define  ContentFont                   11*Height_Scale
//再次级字体
#define  ValueFont                     9*Height_Scale


//标题字体号数
#define myHeadingsFont [UIFont         systemFontOfSize:HeadingsFont]

//次级字体号数
#define myContentFont [UIFont          systemFontOfSize:ContentFont]

//再次级字体
#define myValueFont   [UIFont          systemFontOfSize:ValueFont]

//字体颜色
#define wordColor [UIColor             colorWithHexString:WordColor]

//间距颜色
#define LineColor Color(240, 240, 240, 1)

//分时图，k线图背景颜色
#define LineViewColor Color(38, 32, 34, 1)
#define LineFontColor Color(73, 73, 73, 1)


#endif /* FontAndColorMacros_h */
