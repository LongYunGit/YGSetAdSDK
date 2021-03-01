//
//  YGSetAdConstant.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/2.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef _YGSetAdConstant_
#define _YGSetAdConstant_

// ----------------------------------------------adapter init extra parameter key----------------------------------------

/// 开屏广告加载超时时间（单位：秒）：NSNumber
extern NSString * const kExtraSplashTolerateTimeoutKey;
/// 开屏广告视图frame：NSValue
extern NSString * const kExtraSplashFrameKey;
/// 插屏广告视图或Banner横幅广告视图size：NSValue
extern NSString * const kExtraSizeKey;
/// Banner横幅广告轮播间隔时间（单位：秒），<=0：无轮播，一般在：30s～120s之间：NSNumber
extern NSString * const kExtraBannerIntervalKey;

/**
 （针对聚合广告位）传递本次请求是为“自然日内某设备某广告位置第N次展示机会”发出的广告请求，同物理位置在自然日从1开始计数，不同物理位置独立计数；example：某原生广告位置，当天第5次产生展示机会，这次展示机向穿山甲发送了4次广告请求，则这4次广告请求的"adload_seq"的值应为5。第二天重新开始计数。（该参数对接方不用设置，该SDK会自动处理）：NSNumber
 */
extern NSString * const kExtraAdloadSeqKey;

/// 用于追踪用户，不一定是真实的服务器中的userId，只要能标记该用户即可：NSString
extern NSString * const kExtraUserIdKey;
/// 透传参数，应为json序列化后的字符串：NSString
extern NSString * const kExtraExtraKey;
/// 奖励名称，按照项目需求设置即可：NSString
extern NSString * const kExtraRewardNameKey;
/// 奖励数量，按照项目需求设置即可：NSNumber
extern NSString * const kExtraRewardAmountKey;
/// 奖励ID，按照项目需求设置即可：NSString
extern NSString * const kExtraRewardIdKey;

/// 广告渲染类型（enum：YGSetAdRenderType）：NSNumber
extern NSString * const kExtraAdRenderTypeKey;

/// Mintergal ApiKey
extern NSString * const kExtraMintergalApiKey;



// ----------------------------------------------enum----------------------------------------

/// 广告上游平台标记
typedef NS_ENUM(NSInteger, YGSetAdPlatformMark) {
    /// 未知平台
    YGSetAdPlatformMarkUnknown = 0,
    /// 云告SDK
    YGSetAdPlatformMarkYungao = 1,
    /// 百度SDK
    YGSetAdPlatformMarkBaidu = 2,
    /// 腾讯——广点通SDK
    YGSetAdPlatformMarkGDT = 3,
    /// 头条——穿山甲SDK
    YGSetAdPlatformMarkSnssdk = 4,
    /// 快手SDK
    YGSetAdPlatformMarkKuaishou = 5,
    /// oneway SDK
    YGSetAdPlatformMarkOneway = 6,
    /// Mintegral SDK
    YGSetAdPlatformMarkMintegral = 7,
};

/// 上游平台标记文本描述
FOUNDATION_EXTERN NSString * YGSetAdPlatformMarkName(YGSetAdPlatformMark mark);


/// 广告类型
typedef NS_ENUM(NSInteger, YGSetAdType) {
    /// 未知类型
    YGSetAdTypeUnknown = 0,
    /// 开屏广告
    YGSetAdTypeSplash,
    /// 插屏广告
    YGSetAdTypeInterstitial,
    /// 信息流广告
    YGSetAdTypeNative,
    /// 横幅广告
    YGSetAdTypeBanner,
    /// 激励视频
    YGSetAdTypeRewardVideo,
    /// 视频贴片（在视频的片头片尾或插片播放的广告，以及背景广告等）
    YGSetAdTypeInterstitialVideo,
    /// 直链广告（可以直接到达产品推广或者是下载的页面，并且在统计数据的时候能够正常的统计得到）
    YGSetAdTypeLink,
    /// 全屏视频
    YGSetAdTypeFullscreenVideo,
};

/// 广告类型枚举对应的文本描述
FOUNDATION_EXTERN NSString * YGSetAdTypeName(YGSetAdType type);


/// 广告渲染类型
typedef NS_ENUM(NSInteger, YGSetAdRenderType) {
    /// SDK渲染
    YGSetAdRenderTypeSDK = 0,
    /// 模板渲染
    YGSetAdRenderTypeTemplate
};


#endif /* _YGSetAdConstant_ */
