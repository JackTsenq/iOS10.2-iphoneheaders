/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/QLTransitionControllerProtocol.h>
#import <libobjc.A.dylib/QLPageViewControllerDataSource.h>
#import <libobjc.A.dylib/QLPageViewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewItemViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/QLPreviewCollectionProtocol.h>

@protocol QLPreviewControllerStateProtocol, QLTransitionControllerProtocol;
@class QLPreviewItemStore, UIView, UITapGestureRecognizer, UIPanGestureRecognizer, UISwipeGestureRecognizer, QLAppearance, NSString, QLPageViewController, UIPinchGestureRecognizer, UIRotationGestureRecognizer, QLSwipeDownTracker, QLPinchRotationTracker, QLTransitionContext, QLTransitionDriver, QLItemViewController;

@interface QLPreviewCollection : UIViewController <QLTransitionControllerProtocol, QLPageViewControllerDataSource, QLPageViewControllerDelegate, QLPreviewItemViewControllerDelegate, UIGestureRecognizerDelegate, QLPreviewCollectionProtocol> {

	NSRange _previewItemRange;
	long long _currentItemIndex;
	QLPreviewItemStore* _itemStore;
	UIView* _localAccessoryViewContainer;
	UIView* _remoteAccessoryViewContainer;
	UITapGestureRecognizer* _tapGesture;
	UIPanGestureRecognizer* _verticalPanGesture;
	UISwipeGestureRecognizer* _pageSwipeGesture;
	UIPanGestureRecognizer* _pagePanGesture;
	QLAppearance* _appearance;
	NSString* _loadingString;
	unsigned long long _visibilityState;
	BOOL _isAvailable;
	BOOL _allowInteractiveTransitions;
	BOOL _fullScreen;
	QLPageViewController* _pageViewController;
	id<QLPreviewControllerStateProtocol> _stateManager;
	UIPanGestureRecognizer* _slideGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	UIRotationGestureRecognizer* _rotationGesture;
	QLSwipeDownTracker* _swipeDownTracker;
	QLPinchRotationTracker* _pinchRotationTracker;
	QLTransitionContext* _transitionContext;
	id<QLTransitionControllerProtocol> _transitionController;
	QLTransitionDriver* _transitionDriver;

}

@property (assign,nonatomic) BOOL fullScreen;                                              //@synthesize fullScreen=_fullScreen - In the implementation block
@property (retain) UIPanGestureRecognizer * slideGesture;                                  //@synthesize slideGesture=_slideGesture - In the implementation block
@property (retain) UIPinchGestureRecognizer * pinchGesture;                                //@synthesize pinchGesture=_pinchGesture - In the implementation block
@property (retain) UIRotationGestureRecognizer * rotationGesture;                          //@synthesize rotationGesture=_rotationGesture - In the implementation block
@property (retain) QLSwipeDownTracker * swipeDownTracker;                                  //@synthesize swipeDownTracker=_swipeDownTracker - In the implementation block
@property (retain) QLPinchRotationTracker * pinchRotationTracker;                          //@synthesize pinchRotationTracker=_pinchRotationTracker - In the implementation block
@property (retain) QLTransitionContext * transitionContext;                                //@synthesize transitionContext=_transitionContext - In the implementation block
@property (retain) id<QLTransitionControllerProtocol> transitionController;                //@synthesize transitionController=_transitionController - In the implementation block
@property (retain) QLTransitionDriver * transitionDriver;                                  //@synthesize transitionDriver=_transitionDriver - In the implementation block
@property (retain) QLPageViewController * pageViewController;                              //@synthesize pageViewController=_pageViewController - In the implementation block
@property (retain) id<QLPreviewControllerStateProtocol> stateManager;                      //@synthesize stateManager=_stateManager - In the implementation block
@property (readonly) QLItemViewController * currentPreviewItemViewController; 
@property (assign,nonatomic) BOOL isAvailable;                                             //@synthesize isAvailable=_isAvailable - In the implementation block
@property (assign,nonatomic) BOOL allowInteractiveTransitions;                             //@synthesize allowInteractiveTransitions=_allowInteractiveTransitions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)previewCollectionUsingRemoteViewController:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)quickLookExtension;
+(void)remotePreviewCollectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)setTransitionContext:(QLTransitionContext *)arg1 ;
-(QLTransitionContext *)transitionContext;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)isRemote;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)accessoryView;
-(void)setFullScreen:(BOOL)arg1 ;
-(BOOL)fullScreen;
-(void)_updatePreferredContentSize;
-(void)setIsAvailable:(BOOL)arg1 ;
-(id<QLPreviewControllerStateProtocol>)stateManager;
-(void)setStateManager:(id<QLPreviewControllerStateProtocol>)arg1 ;
-(void)setAllowInteractiveTransitions:(BOOL)arg1 ;
-(void)invalidatePreviewCollection;
-(void)setLoadingString:(id)arg1 ;
-(void)configureWithNumberOfItems:(long long)arg1 currentPreviewItemIndex:(unsigned long long)arg2 itemProvider:(id)arg3 stateManager:(id)arg4 ;
-(BOOL)allowInteractiveTransitions;
-(void)hostViewControlerTransitionToState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)toolbarButtonsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)keyCommandsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)tearDownTransition:(BOOL)arg1 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)keyCommandWasPerformed:(id)arg1 ;
-(UIPanGestureRecognizer *)slideGesture;
-(void)setSlideGesture:(UIPanGestureRecognizer *)arg1 ;
-(UIPinchGestureRecognizer *)pinchGesture;
-(void)setPinchGesture:(UIPinchGestureRecognizer *)arg1 ;
-(UIRotationGestureRecognizer *)rotationGesture;
-(void)setRotationGesture:(UIRotationGestureRecognizer *)arg1 ;
-(QLSwipeDownTracker *)swipeDownTracker;
-(void)setSwipeDownTracker:(QLSwipeDownTracker *)arg1 ;
-(QLPinchRotationTracker *)pinchRotationTracker;
-(void)setPinchRotationTracker:(QLPinchRotationTracker *)arg1 ;
-(QLItemViewController *)currentPreviewItemViewController;
-(id)gestureTracker;
-(void)_setUpTransitionDriverForPresenting:(BOOL)arg1 duration:(double)arg2 ;
-(QLTransitionDriver *)transitionDriver;
-(void)setTransitionDriver:(QLTransitionDriver *)arg1 ;
-(void)setTransitionController:(id<QLTransitionControllerProtocol>)arg1 ;
-(void)updateTransitionWithProgress:(double)arg1 ;
-(id<QLTransitionControllerProtocol>)transitionController;
-(void)completeTransition:(BOOL)arg1 withDuration:(double)arg2 ;
-(void)startNonInteractiveTransitionPresenting:(BOOL)arg1 ;
-(void)_tearDownTransition:(BOOL)arg1 ;
-(void)rotationOrPinchGestureRecognized:(id)arg1 ;
-(void)slideToDismissGestureRecognized:(id)arg1 ;
-(void)previewItemViewControllerDidEditPreview:(id)arg1 ;
-(void)previewItemViewController:(id)arg1 wantsToOpenURL:(id)arg2 ;
-(void)previewItemViewController:(id)arg1 wantsFullScreen:(BOOL)arg2 ;
-(void)previewItemViewControllerWantsUpdateToolbar:(id)arg1 animated:(BOOL)arg2 ;
-(void)previewItemViewControllerWantsToUpdateRotation:(id)arg1 ;
-(void)startTransitionWithSourceViewProvider:(id)arg1 transitionController:(id)arg2 presenting:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_isVisible;
-(void)toolbarButtonPressedWithIdentifier:(id)arg1 ;
-(void)setRemoteAccessoryContainer:(id)arg1 ;
-(void)pageViewController:(id)arg1 willTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6 ;
-(void)pageViewController:(id)arg1 didTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6 ;
-(id)pageViewController:(id)arg1 viewControllerAtIndex:(unsigned long long)arg2 ;
-(id)pageViewController:(id)arg1 parallaxViewInPage:(id)arg2 withIndex:(unsigned long long)arg3 ;
-(void)pageViewController:(id)arg1 isTransitioningFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 withProgress:(double)arg6 ;
-(void)pageViewController:(id)arg1 willCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6 ;
-(void)pageViewController:(id)arg1 didCancelTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 animated:(BOOL)arg6 ;
-(void)pageViewController:(id)arg1 willBeginInteractiveTransitionFromPage:(id)arg2 withIndex:(unsigned long long)arg3 toPage:(id)arg4 withIndex:(unsigned long long)arg5 ;
-(id)loadingTextForPreviewItemViewController:(id)arg1 ;
-(void)expandContentOfPreviewItemViewController:(id)arg1 ;
-(void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)previewItemViewControllerWantsUpdatePrinter:(id)arg1 ;
-(void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(id)arg1 ;
-(void)_installGestures;
-(void)updateCurrentPreviewConfiguration;
-(void)_updatePreviewVisibility:(BOOL)arg1 ;
-(void)_cleanAccessoryViewContainer;
-(void)_updateAccessoryViewWithPreviewItemViewController:(id)arg1 ;
-(void)_updatePrinter;
-(void)_preloadPreviewForIndex:(long long)arg1 ;
-(void)_preloadAdjacentItemsForIndex:(unsigned long long)arg1 ;
-(void)_tapGestureRecognized;
-(void)previewItemViewControllerWantsUpdateKeyCommands:(id)arg1 ;
-(BOOL)isAvailable;
-(void)_updateWhitePointAdaptivityStyle;
-(QLPageViewController *)pageViewController;
-(void)setPageViewController:(QLPageViewController *)arg1 ;
@end

