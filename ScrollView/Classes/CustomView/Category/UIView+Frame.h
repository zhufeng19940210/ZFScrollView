//
//  UIView+Frame.h
//  ScrollView
//
//  Created by bailing on 2017/12/11.
//  Copyright © 2017年 zhufeng. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface UIView (Frame)
@property (nonatomic,assign)CGFloat zf_x;
@property (nonatomic,assign)CGFloat zf_y;
@property (nonatomic,assign)CGFloat zf_width;
@property (nonatomic,assign)CGFloat zf_height;
@property (nonatomic,assign)CGFloat zf_centerx;
@property (nonatomic,assign)CGFloat zf_centery;
@property (nonatomic,assign)CGPoint zf_orgin;
@property (nonatomic,assign)CGSize zf_size;
/*xib加载视图*/
+(instancetype)zf_loadViewFromWithXib;
@end
