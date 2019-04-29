#import "IQKeyboardManagerConstants.h"
#import <UIKit/UITextView.h>
#import "IQTextView.h"
#import <UIKit/NSTextContainer.h>
#import <UIKit/UILabel.h>
#import <UIKit/UINibLoading.h>

@interface IQTextView (Eat)
+ (BOOL)initializeEat:(NSInteger)Eat;
+ (BOOL)deallocEat:(NSInteger)Eat;
+ (BOOL)initEat:(NSInteger)Eat;
+ (BOOL)awakeFromNibEat:(NSInteger)Eat;
+ (BOOL)refreshPlaceholderEat:(NSInteger)Eat;
+ (BOOL)setTextEat:(NSInteger)Eat;
+ (BOOL)setFontEat:(NSInteger)Eat;
+ (BOOL)setTextAlignmentEat:(NSInteger)Eat;
+ (BOOL)layoutSubviewsEat:(NSInteger)Eat;
+ (BOOL)setPlaceholderEat:(NSInteger)Eat;
+ (BOOL)delegateEat:(NSInteger)Eat;

@end
