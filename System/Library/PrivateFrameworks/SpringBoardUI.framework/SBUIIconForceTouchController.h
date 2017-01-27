/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <libobjc.A.dylib/SBUIIconForceTouchViewControllerDelegate.h>

@protocol SBUIIconForceTouchControllerDataSource, SBUIIconForceTouchControllerDelegate;
@class UIWindow, SBUIIconForceTouchViewController, NSString;

@interface SBUIIconForceTouchController : NSObject <SBUIIconForceTouchViewControllerDelegate> {

	SCD_Struct_SB0 _delegateRespondsTo;
	UIWindow* _window;
	id<SBUIIconForceTouchControllerDataSource> _dataSource;
	id<SBUIIconForceTouchControllerDelegate> _delegate;
	SBUIIconForceTouchViewController* _iconForceTouchViewController;

}

@property (nonatomic,readonly) SBUIIconForceTouchViewController * iconForceTouchViewController;              //@synthesize iconForceTouchViewController=_iconForceTouchViewController - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long layout; 
@property (assign,nonatomic,__weak) id<SBUIIconForceTouchControllerDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIIconForceTouchControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_windows;
+(void)_dismissAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)_iconForceTouchControllerHashTable;
+(void)_addIconForceTouchController:(id)arg1 ;
+(BOOL)_isPeekingOrShowing;
+(BOOL)_isWidgetVisible:(id)arg1 ;
-(id)init;
-(void)setDataSource:(id<SBUIIconForceTouchControllerDataSource>)arg1 ;
-(void)setDelegate:(id<SBUIIconForceTouchControllerDelegate>)arg1 ;
-(id<SBUIIconForceTouchControllerDataSource>)dataSource;
-(id<SBUIIconForceTouchControllerDelegate>)delegate;
-(long long)state;
-(id)_window;
-(long long)layout;
-(void)_presentAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)iconForceTouchViewControllerDidDismiss:(id)arg1 ;
-(void)iconForceTouchViewControllerWillDismiss:(id)arg1 ;
-(void)_dismissAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_setupWithGestureRecognizer:(id)arg1 ;
-(void)_peekAnimated:(BOOL)arg1 withRelativeTouchForce:(double)arg2 allowSmoothing:(BOOL)arg3 ;
-(SBUIIconForceTouchViewController *)iconForceTouchViewController;
-(void)_cleanWithGestureRecognizer:(id)arg1 ;
-(void)stopHandlingGestureRecognizer:(id)arg1 ;
-(void)startHandlingGestureRecognizer:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleGestureRecognizer:(id)arg1 ;
@end
