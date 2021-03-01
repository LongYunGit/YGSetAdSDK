//
//  YGSetAdAdapterParameter.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/3.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <YGSetAdSDK/YGSetAdConstant.h>

NS_ASSUME_NONNULL_BEGIN

@interface YGSetAdAdapterParameter : NSObject

/// adapter唯一标识符
@property (nonatomic, copy) NSString *identifier;
/// ssp平台对应的代码位ID
@property (nonatomic, copy) NSString *slotId;
/// 上游平台SDK对应的appid
@property (nonatomic, copy, nullable) NSString *sdkAppId;
/// 上游平台SDK对应的代码位ID
@property (nonatomic, copy, nullable) NSString *sdkSlotId;
/// Mintergal平台的api key
@property (nonatomic, copy, nullable) NSString *mintergalApikey;
/// Mintergal平台的unitId
@property (nonatomic, copy, nullable) NSString *mintergalUnitId;
///  初始化额外参数设置，参考：YGSetAdConstant.h中的定义
@property (nonatomic, copy, nullable) NSDictionary *extra;
/// 上游平台标记
@property (nonatomic, assign) YGSetAdPlatformMark platformMark;
/// 上游平台标记描述
@property (nonatomic, copy, nullable) NSString *platform;

//-------------------------------额外参数取值------------------------

/// 额外参数中的开屏广告超时时间（秒）
@property (nonatomic, readonly) NSTimeInterval splashTolerateTimeoutOfExtra;
/// 额外参数中的开屏广告的frame
@property (nonatomic, readonly) CGRect splashFrameOfExtra;
/// 额外参数中的插屏广告或banner横幅广告的size
@property (nonatomic, readonly) CGSize sizeOfExtra;
/// 额外参数中的Banner横幅广告的轮播间隔时间（单位：秒），<=0：无轮播，一般在：30s～120s之间
@property (nonatomic, readonly) NSTimeInterval bannerIntervalOfExtra;
/// 额外参数中的广告展示次数
@property (nonatomic, readonly) NSInteger adLoadSeqOfExtra;
/// 额外参数中的用户ID
@property (nonatomic, readonly) NSString *userIdOfExtra;
/// 额外参数中的透传参数
@property (nonatomic, readonly) NSString *extraOfExtra;
/// 额外参数中的奖励名称
@property (nonatomic, readonly) NSString *rewardNameOfExtra;
/// 额外参数中的奖励数量
@property (nonatomic, readonly) NSInteger rewardAmountOfExtra;
/// 额外参数中的奖励ID
@property (nonatomic, readonly) NSString *rewardIdOfExtra;
/// 额外参数中的广告渲染类型
@property (nonatomic, readonly) YGSetAdRenderType adRenderTypeOfExtra;


+ (instancetype)newWithSlotId:(NSString *)slotId sdkSlotId:(nullable NSString *)sdkSlotId extra:(nullable NSDictionary *)extra;

+ (NSString *)generateIdentifier;

@end

NS_ASSUME_NONNULL_END
