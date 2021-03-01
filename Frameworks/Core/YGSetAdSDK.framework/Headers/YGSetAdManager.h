//
//  YGSetAdManager.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/1/28.
//

#import <UIKit/UIKit.h>
#import <YGSetAdSDK/YGSetAdProvider.h>
#import <YGSetAdSDK/YGSetAdConstant.h>
#import <YGSetAdSDK/YGSetAdSplashAdapter.h>
#import <YGSetAdSDK/YGSetAdRewardVideoAdapter.h>
#import <YGSetAdSDK/YGSetAdFullscreenVideoAdapter.h>
#import <YGSetAdSDK/YGSetAdInterstitialAdapter.h>
#import <YGSetAdSDK/YGSetAdBannerAdapter.h>
#import <YGSetAdSDK/YGSetAdNativeAdapter.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YGSetAdLoadingDelegate <NSObject>

@optional
/**
 加载ssp平台广告配置数据完成回调（注：并不是广告展示数据）
 
 @param slotId  ssp平台代码位
 @param error   请求出错
 */
- (void)didFinishLoadingADWithSlotId:(NSString *)slotId withError:(nullable NSError *)error;

@end

@interface YGSetAdManager : NSObject

/// 是否打印log日志信息，默认NO
@property (nonatomic, assign, class) BOOL logEnable;
/// 当前SDK版本号
@property (nonatomic, readonly, class) NSString *sdkVersion;
/// 云告SSP平台注册的appId
@property (nonatomic, copy, class) NSString *appId;
/// 是否支持https，默认：NO
@property (nonatomic, assign, class) BOOL supportHttps;

/// 初始化SDK
+ (void)startWithAppId:(NSString *)appId;
/**
 加载广告配置
 
 @param slotId       ssp平台代码位
 @param timeout     加载超时时间（秒）
 @param delegate   加载回调代理
 */
+ (void)loadAdWithSlotId:(NSString *)slotId timeout:(NSTimeInterval)timeout delegate:(id<YGSetAdLoadingDelegate>)delegate;
/**
 展示开屏广告
 
 @param slotId          ssp平台代码位（注意：必须是开屏广告的代码位）
 @param extra            初始化额外参数设置，参考：YGSetAdConstant.h中的定义（kExtraSplashFrameKey、kExtraSplashTolerateTimeoutKey、kExtraAdRenderTypeKey）
 @param keyWindow   应用程序的主窗口，确保keyWindow.rootViewController已设置
 @param delegate     回调代理
 */
+ (BOOL)showSplashAdWithSlotId:(NSString *)slotId
                         extra:(nullable NSDictionary *)extra
                   inKeyWindow:(UIWindow *)keyWindow
                      delegate:(id<YGSetAdSplashAdapterDelegate>)delegate;

/**
 展示激励视频广告
 
 @param slotId                      ssp平台代码位（注意：必须是激励视频广告的代码位）
 @param extra                        初始化额外参数设置，参考：YGSetAdConstant.h中的定义（kExtraUserIdKey（头条必填）、kExtraExtraKey、kExtraRewardNameKey、kExtraRewardAmountKey）
 @param viewController    用于展示广告的根视图控制器
 @param delegate                 回调代理
 */
+ (BOOL)showRewardVideoAdWithSlotId:(NSString *)slotId
                              extra:(nullable NSDictionary *)extra
                 rootViewController:(UIViewController *)viewController
                           delegate:(id<YGSetAdRewardVideoAdapterDelegate>)delegate;

/**
 展示全屏视频广告
 
 @param slotId                      ssp平台代码位（注意：必须是全屏视频广告的代码位）
 @param extra                        初始化额外参数设置，参考：YGSetAdConstant.h中的定义
 @param viewController    用于展示广告的根视图控制器
 @param delegate                 回调代理
 */
+ (BOOL)showFullscreenVideoAdWithSlotId:(NSString *)slotId
                                  extra:(nullable NSDictionary *)extra
                     rootViewController:(UIViewController *)viewController
                               delegate:(id<YGSetAdFullscreenVideoAdapterDelegate>)delegate;

/**
 展示插屏广告
 
 @param slotId                      ssp平台代码位（注意：必须是插屏广告的代码位）
 @param extra                        初始化额外参数设置，参考：YGSetAdConstant.h中的定义（kExtraSizeKey）
 @param viewController    用于展示广告的根视图控制器
 @param delegate                 回调代理
 */
+ (BOOL)showInterstitialAdWithSlotId:(NSString *)slotId
                               extra:(nullable NSDictionary *)extra
                  rootViewController:(UIViewController *)viewController
                            delegate:(id<YGSetAdInterstitialAdapterDelegate>)delegate;

/**
 初始化横幅Banner广告
 
 @param slotId                      ssp平台代码位（注意：必须是横幅Banner广告的代码位）
 @param extra                        初始化额外参数设置，参考：YGSetAdConstant.h中的定义（kExtraSizeKey）
 @param viewController    用于展示广告的根视图控制器
 @param delegate                 回调代理
 */
+ (YGSetAdProvider *)bannerAdWithSlotId:(NSString *)slotId
                                  extra:(nullable NSDictionary *)extra
                     rootViewController:(UIViewController *)viewController
                               delegate:(id<YGSetAdBannerAdapterDelegate>)delegate;

/**
 初始化Native信息流广告
 
 @param slotId                      ssp平台代码位（注意：必须是Native信息流广告的代码位）
 @param extra                        初始化额外参数设置，参考：YGSetAdConstant.h中的定义（kExtraSizeKey）
 @param viewController    用于展示广告的根视图控制器
 @param delegate                 回调代理
 */
+ (YGSetAdProvider *)nativeAdWithSlotId:(NSString *)slotId
                                  extra:(nullable NSDictionary *)extra
                     rootViewController:(UIViewController *)viewController
                               delegate:(id<YGSetAdNativeAdapterDelegate>)delegate;

@end

extern NSString * const kErrorYGSetAdSDKDomain;

NS_ASSUME_NONNULL_END
