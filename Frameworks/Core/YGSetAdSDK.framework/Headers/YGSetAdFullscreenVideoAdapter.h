//
//  YGSetAdFullscreenVideoAdapter.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/4.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YGSetAdSDK/YGSetAdBaseAdapter.h>
#import <YGSetAdSDK/YGSetAdAdapterDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 全屏视频广告适配器代理
@protocol YGSetAdFullscreenVideoAdapterDelegate <YGSetAdAdapterDelegate>

@optional

/**
 广告数据加载完成
 
 @param param   初始化参数
 */
- (void)fullscreenVideoDidLoadForParam:(YGSetAdAdapterParameter *)param;
/**
 广告数据加载失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)fullscreenVideoForParam:(YGSetAdAdapterParameter *)param didLoadFail:(nullable NSError *)error;
/**
 广告渲染失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)fullscreenVideoForParam:(YGSetAdAdapterParameter *)param didRenderFail:(nullable NSError *)error;
/**
 视频开始播放回调
 
 @param param 初始化该适配器参数
 */
- (void)fullscreenVideoDidStartPlayingForParam:(YGSetAdAdapterParameter *)param;
/**
 视频播放结束
 
 @param param 初始化该适配器参数
 */
- (void)fullscreenVideoDidEndPlayingForParam:(YGSetAdAdapterParameter *)param;
/**
 视频播放失败
 
 @param param 初始化该适配器参数
 @param error 错误信息
 */
- (void)fullscreenVideoDidFailToPlayForParam:(YGSetAdAdapterParameter *)param error:(nullable NSError*)error;
/**
 全屏视频关闭
 
 @param param 初始化该适配器参数
 */
- (void)fullscreenVideoDidCloseForParam:(YGSetAdAdapterParameter *)param;
/**
 全屏视频被点击
 
 @param param 初始化该适配器参数
 */
- (void)fullscreenVideoDidClickForParam:(YGSetAdAdapterParameter *)param;

/**
 广告被跳过回调
 
 @param param   初始化参数
 */
- (void)fullscreenVideoDidSkipForParam:(YGSetAdAdapterParameter *)param;

@end


/// 全屏视频广告适配器协议
@protocol YGSetAdFullscreenVideoAdapter <YGSetAdBaseAdapter>

/**
 初始化全屏视频适配器
 
 @param param           参数对象
 @param delegate    回调代理
 */
- (id<YGSetAdFullscreenVideoAdapter>)initWithParam:(YGSetAdAdapterParameter *)param
                                rootViewController:(UIViewController *)viewController
                                          delegate:(id<YGSetAdFullscreenVideoAdapterDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
