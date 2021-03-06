//
//  PageTitleViewConfigura.h
//  ScrollView
//
//  Created by bailing on 2017/12/11.
//  Copyright © 2017年 zhufeng. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef enum : NSUInteger {
    SGIndicatorStyleDefault,  /// 下划线样式
    SGIndicatorStyleCover,    /// 遮盖样式
} SGIndicatorStyle;
typedef enum : NSUInteger {
    SGIndicatorScrollStyleDefault,  /// 指示器位置跟随内容滚动而改变
    SGIndicatorScrollStyleHalf,     /// 内容滚动一半时指示器位置改变
    SGIndicatorScrollStyleEnd       /// 内容滚动结束时指示器位置改变
} SGIndicatorScrollStyle;
@interface PageTitleViewConfigura : NSObject
/** 类方法创建 */
+ (instancetype)pageTitleViewConfigure;
/** 按钮之间的间距，默认为 20.0f */
@property (nonatomic, assign) CGFloat spacingBetweenButtons;
/** 标题文字字号大小，默认 15 号字体 */
@property (nonatomic, strong) UIFont *titleFont;
/** 普通状态下标题按钮文字的颜色，默认为黑色 */
@property (nonatomic, strong) UIColor *titleColor;
/** 选中状态下标题按钮文字的颜色，默认为红色 */
@property (nonatomic, strong) UIColor *titleSelectedColor;
/** 指示器高度，默认为 2.0f */
@property (nonatomic, assign) CGFloat indicatorHeight;
/** 指示器颜色，默认为红色 */
@property (nonatomic, strong) UIColor *indicatorColor;
/** 指示器的额外宽度，介于按钮文字宽度与按钮宽度之间 */
@property (nonatomic, assign) CGFloat indicatorAdditionalWidth;
/** 指示器动画时间，默认为 0.1f，取值范围 0 ～ 0.3f */
@property (nonatomic, assign) CGFloat indicatorAnimationTime;
/** 指示器样式，默认为 SGIndicatorStyleDefault */
@property (nonatomic, assign) SGIndicatorStyle indicatorStyle;
/** 指示器遮盖样式下的圆角大小，默认为 0.1f */
@property (nonatomic, assign) CGFloat indicatorCornerRadius;
/** 指示器遮盖样式下的边框宽度，默认为 0.0f */
@property (nonatomic, assign) CGFloat indicatorBorderWidth;
/** 指示器遮盖样式下的边框颜色，默认为 clearColor */
@property (nonatomic, strong) UIColor *indicatorBorderColor;
/** 指示器滚动位置改变样式，默认为 SGIndicatorScrollStyleDefault */
@property (nonatomic, assign) SGIndicatorScrollStyle indicatorScrollStyle;
@end
