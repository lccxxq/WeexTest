//
//  ViewController.h
//  LIcaiWeex
//
//  Created by zhangshupeng on 2016/11/3.
//  Copyright © 2016年 sym. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController2 : UIViewController

- (instancetype)initWithJs:(NSString *)filePath;

@property (nonatomic, copy) NSString *filePath;


/**
 应减去的高度，默认只有导航减去64。
 */
@property (nonatomic, assign) CGFloat height;

@end

