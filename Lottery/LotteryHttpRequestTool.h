//
//  LotteryHttpRequestTool.h
//  Lottery
//
//  Created by 叶添添 on 2016/12/20.
//  Copyright © 2016年 ytt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

@protocol LotteryHttpRequestToolDelegate <NSObject>

@optional

//登录接口数据回调
-(void)loadLoginMessageWithResultBody:(NSDictionary *)resultBody;
-(void)loadLoginMessageFailed;


@end


@interface LotteryHttpRequestTool : NSObject{
    AFHTTPSessionManager *manager;
}
@property (nonatomic, weak) id<LotteryHttpRequestToolDelegate>delegate;

- (void)loadLoginMessageWithUserName:(NSString *)userName withPassWrod:(NSString *)passWrod withSsid:(NSString *)ssid;

@end
