//
//  RCMBarChartView.h
//  RenaultCarMaintenance
//
//  Created by apple on 15/7/7.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>


/*
 
 柱形图视图类
 @yuegang.wang
 
 */

@interface RCMBarChartView : UIView

@property(nonatomic,strong)NSArray *dataSource;
@property(nonatomic,assign)long maxValue;
@property(nonatomic,assign)CGFloat yLineUnitHeight;//y轴上两个刻度线之间的物理间隔高度（这个跟坐标系创建的时候 相关的，这里是60）
@property(nonatomic,assign)long yLineNumber;//y轴上有多少条刻度区间（注意此处不是刻度线）


/*
 刷新数据
 yuegang.wang
 */
-(void)reloadData;

@end
