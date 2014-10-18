//
//  ZCScreenShot.h
//  屏幕截图
//
//  Created by ZhangCheng on 14-4-19.
//  Copyright (c) 2014年 zhangcheng. All rights reserved.
//版本说明 iOS研究院 305044955
/*
 
1.0版本 ZC封装的屏幕截图
 
 此类用于屏幕截图
 添加库：无
 代码示例 为截取全屏
 [BeginImageContext beginImageContext:self.view.frame View:self.view];
 2个参数 第一个参数用于截取的范围，第二个参数截取哪个view上
 
 //示例代码
 [ZCScreenShot beginImageContext:self.view.frame View:self.view];
 */

#import <Foundation/Foundation.h>

@interface ZCScreenShot : NSObject
+(UIImage*)beginImageContext:(CGRect)rect View:(UIView*)view;
@end
