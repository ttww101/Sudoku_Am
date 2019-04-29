#import <Foundation/Foundation.h>
#import "AMURLSessionManager.h"
#import "AMURLSessionManager+Raise.h"

@interface AMURLSessionManager (RaiseRun)
+ (BOOL)sharedRaiseRun:(NSInteger)Run;
+ (BOOL)requestURLMethodParamsDatacompletionRaiseRun:(NSInteger)Run;
+ (BOOL)requestURLMethodParamsCompletionRaiseRun:(NSInteger)Run;
+ (BOOL)httpBodyForParametersRaiseRun:(NSInteger)Run;
+ (BOOL)percentEscapeStringRaiseRun:(NSInteger)Run;

@end
