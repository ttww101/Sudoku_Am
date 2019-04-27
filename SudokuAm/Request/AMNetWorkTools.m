
#import "AMNetWorkTools.h"
#import "NSDictionary+SetNullWithStr.h"
#import "AFNetworking.h"
#import "MJExtension.h"
#import "NSString+MTEncrypt.h"
#import <ifaddrs.h>
#import <arpa/inet.h>
#import <CommonCrypto/CommonDigest.h>

@implementation AMNetWorkTools





+ (void)GetUrl:(NSString *)url param:(NSMutableDictionary *)param success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure {

    
    //初始化请求的manager对象
    AFHTTPSessionManager *manager = [AFHTTPSessionManager manager];
    manager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/plain", @"text/json", @"application/json", @"text/javascript", @"text/html",@"image/jpeg",  nil];


    [manager GET:url parameters:param progress:^(NSProgress * _Nonnull downloadProgress) {
        
        
    } success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
        NSDictionary *dic = (NSDictionary*)responseObject;
        NSDictionary *newDic = [NSDictionary changeType:dic];
        
        if (success) {
            success(newDic);
        }
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        if (failure) {
            failure(error);
        }
    }];
    
    
}

+ (void)postUrl:(NSString *)url type:(UIOperationType)type dataArr:(NSMutableArray *)dataArr page:(NSInteger)page success:(void (^)(id responseObject))success
           failure:(void (^)(NSError *error))failure {

    NSMutableDictionary *param = [[NSMutableDictionary alloc]init];
    
    NSInteger timeStamp = [[self GetTimestamp] integerValue];
    
    NSString *result = @"";
    
    if (type == addType) {
    
        result = [NSString stringWithFormat:@"method=getPhone&page=%ld&time=%ld&key=asdlsadfasdfsddklss",page,timeStamp];
        
        param[@"page"] = [NSString stringWithFormat:@"%ld",page];
    }
    else{
        
       NSString *newstring = [dataArr componentsJoinedByString:@","];
        
       result = [NSString stringWithFormat:@"method=deletePhone&ids=%@&time=%ld&key=asdlsadfasdfsddklss",newstring,timeStamp];
        
    
    }
    
    NSString *sing = result.md5String;

    param[@"sing"] = sing;
    param[@"time"] = [NSString stringWithFormat:@"%ld",timeStamp];
    param[@"ids"] = [dataArr componentsJoinedByString:@","];



    AFHTTPSessionManager *manager=[AFHTTPSessionManager manager];


    [manager.requestSerializer setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-type"];
    
    manager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/html",@"application/json",nil];
    
    [manager POST:url parameters:param progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {
        
        
#pragma mark 处理后台返回的null类型
        
        NSDictionary *dic = (NSDictionary*)responseObject;
        NSDictionary *newDic = [NSDictionary changeType:dic];
        
        if (success) {
            success(newDic);
        }
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        if (failure) {
            failure(error);
        }
    }];
    
}


+ (void)postUrl:(NSString *)url type:(NSInteger)type param:(NSMutableDictionary *)param  success:(void (^)(id responseObject))success
        failure:(void (^)(NSError *error))failure{
    
    AFHTTPSessionManager *manager=[AFHTTPSessionManager manager];

    
    [manager.requestSerializer setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-type"];

    
    if (type == 1) {
        
         manager.responseSerializer = [AFHTTPResponseSerializer serializer];
        
         manager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/html",@"application/json",@"image/jpeg",nil];

        
    }else{
        manager.responseSerializer.acceptableContentTypes = [NSSet setWithObjects:@"text/html",@"application/json",nil];
    }
    
    [manager POST:url parameters:param progress:nil success:^(NSURLSessionDataTask * _Nonnull task, id  _Nullable responseObject) {

        NSDictionary *dic = (NSDictionary*)responseObject;
        NSDictionary *newDic = [NSDictionary changeType:dic];
        
        if (success) {
            success(newDic);
        }
    } failure:^(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error) {
        if (failure) {
            failure(error);
        }
    }];
    
    
}


// 字典转json字符串方法

+(NSString *)convertToJsonData:(NSDictionary *)dict

{
    
    NSError *error;
    
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dict options:NSJSONWritingPrettyPrinted error:&error];
    
    NSString *jsonString;
    
    if (!jsonData) {
        
        NSLog(@"%@",error);
        
    }else{
        
        jsonString = [[NSString alloc]initWithData:jsonData encoding:NSUTF8StringEncoding];
        
    }
    
    NSMutableString *mutStr = [NSMutableString stringWithString:jsonString];
    
    NSRange range = {0,jsonString.length};
    
    //去掉字符串中的空格
    
    [mutStr replaceOccurrencesOfString:@" " withString:@"" options:NSLiteralSearch range:range];
    
    NSRange range2 = {0,mutStr.length};
    
    //去掉字符串中的换行符
    
    [mutStr replaceOccurrencesOfString:@"\n" withString:@"" options:NSLiteralSearch range:range2];
    
    return mutStr;
    
}

#pragma mark---获取当前时间戳
+(NSString *)GetTimestamp{
    
    
    //格林尼治时间到现在的秒数[[NSDate date] timeIntervalSince1970]
    NSString *sumString = [NSString stringWithFormat:@"%f",[[NSDate date] timeIntervalSince1970] * 1000];
    
    //截取小数点前的数
    NSString *Timestamp = [[sumString componentsSeparatedByString:@"."]objectAtIndex:0];
    
    
    //    NSLog(@"时间戳:%@",Timestamp);
    return Timestamp;
    
}


@end
