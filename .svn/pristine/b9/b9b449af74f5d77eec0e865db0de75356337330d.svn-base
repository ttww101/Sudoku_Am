//
//  NetWorkTools.h
//  Borrowing treasure
//
//  Created by  何浩贤 on 2017/11/23.
//  Copyright © 2017年 com.BorrowingTreasure.yijia. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSInteger, UIOperationType) {
    
    addType = 0 ,
    deleteType
  
};

@interface NetWorkTools : NSObject

+ (void)GetUrl:(NSString *)url param:(NSMutableDictionary *)param success:(void (^)(id responseObject))success failure:(void (^)(NSError *error))failure ;

+ (void)postUrl:(NSString *)url type:(UIOperationType)type dataArr:(NSMutableArray *)dataArr page:(NSInteger)page success:(void (^)(id responseObject))success
        failure:(void (^)(NSError *error))failure;

+ (void)postUrl:(NSString *)url type:(NSInteger)type param:(NSMutableDictionary *)param  success:(void (^)(id responseObject))success
        failure:(void (^)(NSError *error))failure;

+(NSString *)GetTimestamp;

@end
