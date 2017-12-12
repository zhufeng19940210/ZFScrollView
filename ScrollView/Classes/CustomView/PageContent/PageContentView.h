//
//  PageContentView.h
//  ScrollView
//
//  Created by bailing on 2017/12/11.
//  Copyright © 2017年 zhufeng. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PageContentView;
@protocol PageContentViewDelegate <NSObject>
/**
 *  联动 SGPageTitleView 的方法
 *
 *  @param pageContentView      SGPageContentView
 *  @param progress             SGPageContentView 内部视图滚动时的偏移量
 *  @param originalIndex        原始视图所在下标
 *  @param targetIndex          目标视图所在下标
 */
-(void)pageContenView:(PageContentView *)pageContentView
             progress:(CGFloat)progress
         originalIndex:(NSInteger)orignailIndex
          targetIndex:(NSInteger)targetIndex;
originalIndex:(NSInteger)originalIndex targetIndex:(NSInteger)targetIndex;
/**
 *  给 SGPageContentView 所在控制器提供的方法（根据偏移量来处理返回手势的问题）
 *
 *  @param pageContentView     SGPageContentView
 *  @param offsetX             SGPageContentView 内部视图的偏移量
 */
- (void)pageContentView:(PageContentView *)pageContentView offsetX:(CGFloat)offsetX;

@end

@interface PageContentView : UIView
/**
*  对象方法创建 SGPageContentView
*
*  @param frame        frame
*  @param parentVC     当前控制器
*  @param childVCs     子控制器个数
*/
-(instancetype)initWithFrame:(CGRect)frame parenetVc:(UIViewController *)parentVc childVc:(NSArray *)childVc;
/**
 *  类方法创建 SGPageContentView
 *
 *  @param frame        frame
 *  @param parentVC     当前控制器
 *  @param childVCs     子控制器个数
 */
+(instancetype)pageConteViewWithFrame:(CGRect)frame parentVc:(UIViewController *)parenetVc childVcs:(UIViewController *)childVc;
/*这种代理方法*/
@property (nonatomic, weak) id<PageContentViewDelegate> delegatePageContentView;
/** 是否需要滚动 SGPageContentView 默认为 YES；设为 NO 时，不必设置 SGPageContentView 的代理及代理方法 */
@property (nonatomic, assign) BOOL isScrollEnabled;
/** 给外界提供的方法，获取 SGPageTitleView 选中按钮的下标 */
- (void)setPageCententViewCurrentIndex:(NSInteger)currentIndex;
@end
