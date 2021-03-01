//
//  YGSetAdAdapterDelegate.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/3.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YGSetAdSDK/YGSetAdAdapterParameter.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YGSetAdAdapterDelegate <NSObject>

@optional

/**
 适配器初始化失败
 
 @param param   初始化参数
 @param error   错误信息
 */
- (void)adapterForParam:(YGSetAdAdapterParameter *)param didInitFail:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
