//
//  YLNetworkingConfiguration.h
//  YLNetworking
//
//  Created by Yunpeng on 16/7/1.
//  Copyright © 2016年 Yunpeng. All rights reserved.
//

#ifndef YLNetworkingConfiguration_h
#define YLNetworkingConfiguration_h


typedef NS_ENUM(NSUInteger, YLResponseStatus) {
    // 底层仅有这三种状态
    YLResponseStatusSuccess,
    YLResponseStatusErrorTimeout,
    YLResponseStatusErrorUnknown
};

static BOOL kYLShouldCacheDefault = NO;
static BOOL kYLServiceIsOnline = NO;
static NSTimeInterval kYLNetworkingTimeoutSeconds = 20.0f;
static NSTimeInterval kYLCacheOutdateTimeSeconds = 300; // 5分钟的cache过期时间
static NSUInteger kYLCacheCountLimit = 1000; // 最多1000条cache


static NSString *kServerURL = @"https://api.douban.com";
//https://api.douban.com/v2/user
//static NSString *kServerURL = @"http://c.m.163.com";
#endif /* YLNetworkingConfiguration_h */