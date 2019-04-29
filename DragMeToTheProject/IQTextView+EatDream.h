#import "IQKeyboardManagerConstants.h"
#import <UIKit/UITextView.h>
#import "IQTextView.h"
#import <UIKit/NSTextContainer.h>
#import <UIKit/UILabel.h>
#import <UIKit/UINibLoading.h>
#import "IQTextView+Eat.h"

@interface IQTextView (EatDream)
+ (BOOL)initializeEatDream:(NSInteger)Dream;
+ (BOOL)deallocEatDream:(NSInteger)Dream;
+ (BOOL)initEatDream:(NSInteger)Dream;
+ (BOOL)awakeFromNibEatDream:(NSInteger)Dream;
+ (BOOL)refreshPlaceholderEatDream:(NSInteger)Dream;
+ (BOOL)setTextEatDream:(NSInteger)Dream;
+ (BOOL)setFontEatDream:(NSInteger)Dream;
+ (BOOL)setTextAlignmentEatDream:(NSInteger)Dream;
+ (BOOL)layoutSubviewsEatDream:(NSInteger)Dream;
+ (BOOL)setPlaceholderEatDream:(NSInteger)Dream;
+ (BOOL)delegateEatDream:(NSInteger)Dream;

@end
