//
//  YGSetAdInterstitialAdapter.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/4.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YGSetAdSDK/YGSetAdBaseAdapter.h>
#import <YGSetAdSDK/YGSetAdAdapterDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 插屏广告适配器代理
@protocol YGSetAdInterstitialAdapterDelegate <YGSetAdAdapterDelegate>

@optional

/**
 广告数据加载完成
 
 @param param   初始化参数
 */
- (void)interstitialDidLoadForParam:(YGSetAdAdapterParameter *)param;
/**
 广告数据加载失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)interstitialForParam:(YGSetAdAdapterParameter *)param didLoadFail:(nullable NSError *)error;
/**
 广告渲染失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)interstitialForParam:(YGSetAdAdapterParameter *)param didRenderFail:(nullable NSError *)error;
/**
 插屏广告展示回调
 
 @param param   初始化参数
 */
- (void)interstitialDidShowForParam:(YGSetAdAdapterParameter *)param;
/**
 广告被点击回调
 
 @param param   初始化参数
 */
- (void)interstitialDidClickForParam:(YGSetAdAdapterParameter *)param;

/**
 广告关闭回调
 
 @param param   初始化参数
 */
- (void)interstitialDidCloseForParam:(YGSetAdAdapterParameter *)param;

@end

/// 插屏广告适配器协议
@protocol YGSetAdInterstitialAdapter <YGSetAdBaseAdapter>

/**
 初始化插屏广告适配器
 
 @param param           参数对象
 @param delegate    回调代理
 */
- (id<YGSetAdInterstitialAdapter>)initWithParam:(YGSetAdAdapterParameter *)param
                             rootViewController:(UIViewController *)viewController
                                       delegate:(id<YGSetAdInterstitialAdapterDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
