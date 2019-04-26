
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
