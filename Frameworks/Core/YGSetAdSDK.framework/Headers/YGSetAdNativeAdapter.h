//
//  YGSetAdNativeAdapter.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/8.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YGSetAdSDK/YGSetAdBaseAdapter.h>
#import <YGSetAdSDK/YGSetAdAdapterDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YGSetAdNativeAdapterDelegate <YGSetAdAdapterDelegate>

@optional

/**
 广告数据加载完成
 
 @param param   初始化参数
 */
- (void)nativeDidLoadForParam:(YGSetAdAdapterParameter *)param;
/**
 广告数据加载失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)nativeForParam:(YGSetAdAdapterParameter *)param didLoadFail:(nullable NSError *)error;
/**
 广告渲染失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)nativeForParam:(YGSetAdAdapterParameter *)param didRenderFail:(nullable NSError *)error;
/**
 广告视图初始化渲染完成回调（在这里获取nativeAdView进行展示）
 
 @param param   初始化参数
 */
- (void)nativeDidSuccessToLoadForParam:(YGSetAdAdapterParameter *)param;
/**
 广告被点击回调
 
 @param param   初始化参数
 */
- (void)nativeDidClickForParam:(YGSetAdAdapterParameter *)param;

/**
 广告关闭回调
 
 @param param   初始化参数
 */
- (void)nativeDidCloseForParam:(YGSetAdAdapterParameter *)param;


@end

@protocol YGSetAdNativeAdapter <YGSetAdBaseAdapter>

/// Native信息流广告视图
@property (nonatomic, readonly, nullable) UIView *nativeAdView;

/**
 初始化插屏广告适配器
 
 @param param           参数对象
 @param delegate    回调代理
 */
- (id<YGSetAdNativeAdapter>)initWithParam:(YGSetAdAdapterParameter *)param
                       rootViewController:(UIViewController *)viewController
                                 delegate:(id<YGSetAdNativeAdapterDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
