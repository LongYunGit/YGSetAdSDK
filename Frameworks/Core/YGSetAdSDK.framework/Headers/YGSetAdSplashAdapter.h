//
//  YGSetAdSplashAdapter.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/2.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <YGSetAdSDK/YGSetAdBaseAdapter.h>
#import <YGSetAdSDK/YGSetAdAdapterDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 开屏广告回调代理
@protocol YGSetAdSplashAdapterDelegate <YGSetAdAdapterDelegate>

@optional

/**
 开屏广告数据加载完成
 
 @param param   初始化参数
 */
- (void)splashDidLoadForParam:(YGSetAdAdapterParameter *)param;
/**
 开屏广告数据加载失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)splashForParam:(YGSetAdAdapterParameter *)param didLoadFail:(nullable NSError *)error;

/**
 广告渲染失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)splashForParam:(YGSetAdAdapterParameter *)param didRenderFail:(nullable NSError *)error;

/**
 广告已展示回调
 
 @param param   初始化参数
 */
- (void)splashDidShowForParam:(YGSetAdAdapterParameter *)param;

/**
 广告被点击回调
 
 @param param   初始化参数
 */
- (void)splashDidClickForParam:(YGSetAdAdapterParameter *)param;

/**
 广告关闭回调
 
 @param param   初始化参数
 */
- (void)splashDidCloseForParam:(YGSetAdAdapterParameter *)param;

/**
 广告被跳过回调
 
 @param param   初始化参数
 */
- (void)splashDidSkipForParam:(YGSetAdAdapterParameter *)param;

@end



/// 开屏广告适配器协议
@protocol YGSetAdSplashAdapter <YGSetAdBaseAdapter>

@required

/**
 初始化并加载
 
 @param param            参数对象
 @param window          app的主窗口，用于广告的展示与点击跳转（注意：window.rootViewController必须不能为空）
 @param delegate      回调代理
 */
- (id<YGSetAdSplashAdapter>)initWithParam:(YGSetAdAdapterParameter *)param
                                keyWindow:(UIWindow *)window
                                 delegate:(id<YGSetAdSplashAdapterDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
