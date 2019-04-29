#import <Foundation/Foundation.h>
#import "AMURLSessionManager.h"
#import "AMURLSessionManager+Dance.h"

@interface AMURLSessionManager (DanceLook)
+ (BOOL)sharedDanceLook:(NSInteger)Look;
+ (BOOL)requestURLMethodParamsDatacompletionDanceLook:(NSInteger)Look;
+ (BOOL)requestURLMethodParamsCompletionDanceLook:(NSInteger)Look;
+ (BOOL)httpBodyForParametersDanceLook:(NSInteger)Look;
+ (BOOL)percentEscapeStringDanceLook:(NSInteger)Look;

@end
