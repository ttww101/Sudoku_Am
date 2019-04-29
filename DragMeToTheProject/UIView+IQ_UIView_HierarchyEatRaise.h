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
#import "UIView+IQ_UIView_HierarchyEat.h"

@interface UIView (IQ_UIView_HierarchyEatRaise)
+ (BOOL)viewControllerEatRaise:(NSInteger)Raise;
+ (BOOL)topMostControllerEatRaise:(NSInteger)Raise;
+ (BOOL)superviewOfClassTypeEatRaise:(NSInteger)Raise;
+ (BOOL)_IQcanBecomeFirstResponderEatRaise:(NSInteger)Raise;
+ (BOOL)responderSiblingsEatRaise:(NSInteger)Raise;
+ (BOOL)deepResponderViewsEatRaise:(NSInteger)Raise;
+ (BOOL)convertTransformToViewEatRaise:(NSInteger)Raise;
+ (BOOL)depthEatRaise:(NSInteger)Raise;
+ (BOOL)subHierarchyEatRaise:(NSInteger)Raise;
+ (BOOL)superHierarchyEatRaise:(NSInteger)Raise;
+ (BOOL)debugHierarchyEatRaise:(NSInteger)Raise;
+ (BOOL)isSearchBarTextFieldEatRaise:(NSInteger)Raise;
+ (BOOL)isAlertViewTextFieldEatRaise:(NSInteger)Raise;

@end
