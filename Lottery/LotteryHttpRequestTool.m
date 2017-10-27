//
//  LotteryHttpRequestTool.m
//  Lottery
//
//  Created by 叶添添 on 2016/12/20.
//  Copyright © 2016年 ytt. All rights reserved.
//

#import "LotteryHttpRequestTool.h"

@implementation LotteryHttpRequestTool
- (instancetype)init
{
    self = [super init];
    if (self) {
        
        //manager = [[AFHTTPSessionManager alloc] initWithBaseURL:[NSURL URLWithString:kPLC_API_SERVER_URL]];//其创建的时候，默认使用了json解析器
        //manager.responseSerializer.acceptableContentTypes = [manager.responseSerializer.acceptableContentTypes setByAddingObject:@"application/json"];
        manager = [AFHTTPSessionManager manager];
        //manager.responseSerializer = [AFHTTPResponseSerializer serializer];
    }
    return self;
}


- (void)loadLoginMessageWithUserName:(NSString *)userName withPassWrod:(NSString *)passWord withSsid:(NSString *)ssid
{
    /*
    NSMutableDictionary *parameters = @{@"":@"",@"":@""};
    
    [manager POST:URL parameters:parameters progress:^(NSProgress * _Nonnull uploadProgress) {
        
        
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        if (responseObject){
            
            if (self.delegate && [self.delegate respondsToSelector:@selector(loadLoginMessageWithResultBody:)]){
                [self.delegate loadLoginMessageWithResultBody:responseObject];
            }
            
        }else{
            if (self.delegate && [self.delegate respondsToSelector:@selector(loadLoginMessageFailed)]) {
                [self.delegate loadLoginMessageFailed];
            }
        }
        
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error){
        if (self.delegate && [self.delegate respondsToSelector:@selector(loadLoginMessageFailed)]){
            
            [self.delegate loadLoginMessageFailed];
            
        }
    }];
    */
    
}


@end
