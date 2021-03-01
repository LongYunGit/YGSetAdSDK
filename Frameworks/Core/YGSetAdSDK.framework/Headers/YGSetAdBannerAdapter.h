//
//  YGSetAdBannerAdapter.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/4.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YGSetAdSDK/YGSetAdBaseAdapter.h>
#import <YGSetAdSDK/YGSetAdAdapterDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 横幅Banner广告适配器代理
@protocol YGSetAdBannerAdapterDelegate <YGSetAdAdapterDelegate>

@optional

/**
 广告数据加载完成
 
 @param param   初始化参数
 */
- (void)bannerDidLoadForParam:(YGSetAdAdapterParameter *)param;
/**
 广告数据加载失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)bannerForParam:(YGSetAdAdapterParameter *)param didLoadFail:(nullable NSError *)error;
/**
 广告渲染失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)bannerForParam:(YGSetAdAdapterParameter *)param didRenderFail:(nullable NSError *)error;
/**
 广告展示回调
 
 @param param   初始化参数
 */
- (void)bannerDidShowForParam:(YGSetAdAdapterParameter *)param;
/**
 广告被点击回调
 
 @param param   初始化参数
 */
- (void)bannerDidClickForParam:(YGSetAdAdapterParameter *)param;

/**
 广告关闭回调
 
 @param param   初始化参数
 */
- (void)bannerDidCloseForParam:(YGSetAdAdapterParameter *)param;

@end


/// 横幅Banner广告适配器协议
@protocol YGSetAdBannerAdapter <YGSetAdBaseAdapter>

/// 横幅Banner广告视图
@property (nonatomic, readonly) UIView *bannerView;

/**
 初始化横幅Banner广告适配器
 
 @param param           参数对象
 @param delegate    回调代理
 */
- (id<YGSetAdBannerAdapter>)initWithParam:(YGSetAdAdapterParameter *)param
                       rootViewController:(UIViewController *)viewController
                                 delegate:(id<YGSetAdBannerAdapterDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
