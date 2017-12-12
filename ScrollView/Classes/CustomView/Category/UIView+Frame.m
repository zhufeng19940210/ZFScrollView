//
//  UIView+Frame.m
//  ScrollView
//
//  Created by bailing on 2017/12/11.
//  Copyright © 2017年 zhufeng. All rights reserved.
//
#import "UIView+Frame.h"
@implementation UIView (Frame)
-(void)setZf_x:(CGFloat)zf_x{
    CGRect frame = self.frame;
    frame.origin.x = zf_x;
    self.frame = frame;
}
-(CGFloat)zf_x{
    return self.frame.origin.x;
}
-(void)setZf_y:(CGFloat)zf_y{
    CGRect frame = self.frame;
    frame.origin.y = zf_y;
    self.frame = frame;
}
-(CGFloat)zf_y{
    return self.frame.origin.y;
}
-(void)setZf_width:(CGFloat)zf_width{
    CGRect frame = self.frame;
    frame.size.width = zf_width;
    self.frame = frame;
}
-(CGFloat)zf_width{
    return self.frame.size.width;
}
-(void)setZf_height:(CGFloat)zf_height{
    CGRect frame = self.frame;
    frame.size.height = zf_height;
    self.frame = frame;
}
-(CGFloat)zf_height{
    return self.frame.size.height;
}
-(void)setZf_centerx:(CGFloat)zf_centerx{
    CGPoint center = self.center;
    center.x = zf_centerx;
    self.center = center;
}
-(CGFloat)zf_centerx{
    return self.center.x;
}
-(void)setZf_centery:(CGFloat)zf_centery{
    CGPoint center = self.center;
    center.y = zf_centery;
    self.center = center;
}
-(CGFloat)zf_centery{
    return self.center.y;
}
-(void)setZf_orgin:(CGPoint)zf_orgin{
    CGRect frame = self.frame;
    frame.origin = zf_orgin;
    self.frame = frame;
}
-(CGPoint)zf_orgin{
    return self.frame.origin;
}
-(void)setZf_size:(CGSize)zf_size{
    CGRect frame = self.frame;
    frame.size = zf_size;
    self.frame = frame;
}
-(CGSize)zf_size{
    return self.frame.size;
}
/*从xib中加载视图*/
+(instancetype)zf_loadViewFromWithXib{
    return [[NSBundle mainBundle]loadNibNamed:NSStringFromClass(self) owner:nil options:nil].lastObject;
}
@end
