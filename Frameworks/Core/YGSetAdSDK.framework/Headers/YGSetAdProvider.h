//
//  YGSetAdProvider.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/8.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YGSetAdProvider : NSObject

/**
 广告视图
 
 @discussion
 Native信息流广告需在代理回调nativeDidSuccessToLoadForParam中获取adView进行展示。
 */
@property (nonatomic, readonly, nullable) UIView *adView;

@end

NS_ASSUME_NONNULL_END
