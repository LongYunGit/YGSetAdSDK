//
//  YGSetAdRewardVideoAdapter.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/3.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YGSetAdSDK/YGSetAdBaseAdapter.h>
#import <YGSetAdSDK/YGSetAdAdapterDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 激励视频适配器回调代理
@protocol YGSetAdRewardVideoAdapterDelegate <YGSetAdAdapterDelegate>

@optional

/**
 广告数据加载完成
 
 @param param   初始化参数
 */
- (void)rewardedVideoDidLoadForParam:(YGSetAdAdapterParameter *)param;
/**
 广告数据加载失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)rewardedVideoForParam:(YGSetAdAdapterParameter *)param didLoadFail:(nullable NSError *)error;
/**
 广告渲染失败
 
 @param param   初始化参数
 @param error   加载错误信息
 */
- (void)rewardedVideoForParam:(YGSetAdAdapterParameter *)param didRenderFail:(nullable NSError *)error;
/**
 视频开始播放回调
 
 @param param 初始化该适配器参数
 */
- (void)rewardedVideoDidStartPlayingForParam:(YGSetAdAdapterParameter *)param;
/**
 视频播放结束
 
 @param param 初始化该适配器参数
 */
- (void)rewardedVideoDidEndPlayingForParam:(YGSetAdAdapterParameter *)param;
/**
 视频播放失败
 
 @param param 初始化该适配器参数
 @param error 错误信息
 */
- (void)rewardedVideoDidFailToPlayForParam:(YGSetAdAdapterParameter *)param error:(NSError*)error;
/**
 激励视频关闭
 
 @param param           初始化该适配器参数
 @param rewarded    是否激励成功（YES：激励成功（即：视频看完了），NO：激励失败（即：视频没看完，中途跳过了））
 */
- (void)rewardedVideoDidCloseForParam:(YGSetAdAdapterParameter *)param rewarded:(BOOL)rewarded;
/**
 激励视频被点击
 
 @param param 初始化该适配器参数
 */
- (void)rewardedVideoDidClickForParam:(YGSetAdAdapterParameter *)param;

/**
 激励视频完成激励成功
 
 @param param 初始化该适配器参数
 */
- (void)rewardedVideoDidRewardSuccessForParam:(YGSetAdAdapterParameter *)param;

@end


/// 激励视频适配器协议
@protocol YGSetAdRewardVideoAdapter <YGSetAdBaseAdapter>

/**
 初始化激励视频适配器
 
 @param param                       参数对象
 @param viewController   app的根视图控制器，用于广告的展示与点击跳转
 @param delegate                回调代理
 */
- (id<YGSetAdRewardVideoAdapter>)initWithParam:(YGSetAdAdapterParameter *)param
                            rootViewController:(UIViewController *)viewController
                                      delegate:(id<YGSetAdRewardVideoAdapterDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
