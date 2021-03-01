//
//  YGSetLog.h
//  YGSetAdSDK
//
//  Created by DHY on 2021/1/28.
//  Copyright © 2021 LongYun. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef YGSetLog
#define YGSetLog(format, ...) [YGSetLog printLog:@"TIME:%s (%d行)【YGSetAdSDK】%@", __TIME__, __LINE__, [NSString stringWithFormat:(format), ## __VA_ARGS__]]
#endif

NS_ASSUME_NONNULL_BEGIN

@interface YGSetLog : NSObject

+ (void)printLog:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);

@end

NS_ASSUME_NONNULL_END
