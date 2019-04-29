#import <UIKit/UIView.h>
#import "IQKeyboardManagerConstants.h"
#import "IQUIView+Hierarchy.h"
#import "IQUITextFieldView+Additions.h"
#import <UIKit/UICollectionView.h>
#import <UIKit/UIAlertController.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITextView.h>
#import <UIKit/UITextField.h>
#import <UIKit/UISearchBar.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWindow.h>
#import <objc/runtime.h>
#import "IQNSArray+Sort.h"

@interface UIView (IQ_UIView_HierarchyEat)
+ (BOOL)viewControllerEat:(NSInteger)Eat;
+ (BOOL)topMostControllerEat:(NSInteger)Eat;
+ (BOOL)superviewOfClassTypeEat:(NSInteger)Eat;
+ (BOOL)_IQcanBecomeFirstResponderEat:(NSInteger)Eat;
+ (BOOL)responderSiblingsEat:(NSInteger)Eat;
+ (BOOL)deepResponderViewsEat:(NSInteger)Eat;
+ (BOOL)convertTransformToViewEat:(NSInteger)Eat;
+ (BOOL)depthEat:(NSInteger)Eat;
+ (BOOL)subHierarchyEat:(NSInteger)Eat;
+ (BOOL)superHierarchyEat:(NSInteger)Eat;
+ (BOOL)debugHierarchyEat:(NSInteger)Eat;
+ (BOOL)isSearchBarTextFieldEat:(NSInteger)Eat;
+ (BOOL)isAlertViewTextFieldEat:(NSInteger)Eat;

@end
