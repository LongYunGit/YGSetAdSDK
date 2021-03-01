//
//  YGSetAdBaseAdapter.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/2/3.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YGSetAdBaseAdapter <NSObject>

@required

/**
 加载广告数据
 */
- (void)loadAdData;

@end

NS_ASSUME_NONNULL_END
