//
//  XJRLoginRegisterView.h
//  DSBuDeJie
//
//  Created by 邢京荣 on 16/7/4.
//  Copyright © 2016年 邢京荣. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XJRLoginRegisterView : UIView

@property (nonatomic, assign) BOOL isLogin;
+ (instancetype)loginView;
+ (instancetype)registerView;

@end
