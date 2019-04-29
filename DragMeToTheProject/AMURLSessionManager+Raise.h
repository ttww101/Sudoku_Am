#import <Foundation/Foundation.h>
#import "AMURLSessionManager.h"

@interface AMURLSessionManager (Raise)
+ (BOOL)sharedRaise:(NSInteger)Raise;
+ (BOOL)requestURLMethodParamsDatacompletionRaise:(NSInteger)Raise;
+ (BOOL)requestURLMethodParamsCompletionRaise:(NSInteger)Raise;
+ (BOOL)httpBodyForParametersRaise:(NSInteger)Raise;
+ (BOOL)percentEscapeStringRaise:(NSInteger)Raise;

@end
