/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <MapsLockScreen/RemoteStateObserver.h>
#import <MapsLockScreen/TransitLockScreenHeaderDelegate.h>

@class CPDistributedMessagingCenter, DrivingWalkingLockScreenHeader, TransitLockScreenHeader, UIView, UIWindow, UIActivityIndicatorView, LockScreenThermalWarningController, NSTimer, NSArray, BKSProcessAssertion, CLInUseAssertion, RemoteView, UISnapshotView, LockScreenDimmingBehavior, NSString;

@interface LockScreenPluginController : SBAwayViewPluginController <RemoteStateObserver, TransitLockScreenHeaderDelegate> {

	CPDistributedMessagingCenter* _requestsCenter;
	DrivingWalkingLockScreenHeader* _header;
	TransitLockScreenHeader* _transitHeader;
	UIView* _footer;
	UIView* _guidanceView;
	BOOL _displaying;
	unsigned long long _alert;
	UIWindow* _temporaryHostingWindow;
	UIView* _shieldView;
	UIActivityIndicatorView* _spinner;
	unsigned long long _lastSeenState;
	BOOL _didUnhideOnce;
	LockScreenThermalWarningController* _thermalWarning;
	NSTimer* _idleDelayTimer;
	NSArray* _lastInstructions;
	BKSProcessAssertion* _mapsAliveAssertion;
	CLInUseAssertion* _mapsLocationInUseAssertion;
	BOOL _lastIsDimmedState;
	BOOL _displaySteppingViews;
	RemoteView* _remoteView;
	UISnapshotView* _unlockShieldView;
	LockScreenDimmingBehavior* _dimmingBehavior;

}

@property (setter=_setRemoteView:,nonatomic,retain) RemoteView * _remoteView;                                       //@synthesize remoteView=_remoteView - In the implementation block
@property (setter=_setUnlockShieldView:,nonatomic,retain) UISnapshotView * _unlockShieldView;                       //@synthesize unlockShieldView=_unlockShieldView - In the implementation block
@property (setter=_setDimmingBehavior:,nonatomic,retain) LockScreenDimmingBehavior * _dimmingBehavior;              //@synthesize dimmingBehavior=_dimmingBehavior - In the implementation block
@property (nonatomic,retain) NSTimer * idleDelayTimer;                                                              //@synthesize idleDelayTimer=_idleDelayTimer - In the implementation block
@property (assign,nonatomic) BOOL lastIsDimmedState;                                                                //@synthesize lastIsDimmedState=_lastIsDimmedState - In the implementation block
@property (assign,nonatomic) BOOL displaySteppingViews;                                                             //@synthesize displaySteppingViews=_displaySteppingViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)temporaryHostingWindow;
+(void)setValidRemoteView:(id)arg1 ;
+(id)messagesQueue;
+(id)validRemoteView;
+(void)invalidateRemoteViewWithIdentifier:(id)arg1 ;
-(void)remoteViewDidBecomeAvailable:(id)arg1 contextIdentifier:(unsigned)arg2 ;
-(void)_displayWillActivate:(id)arg1 ;
-(id)_applyFontToString:(id)arg1 ;
-(UISnapshotView *)_unlockShieldView;
-(BOOL)showHeaderView;
-(BOOL)retainsPriorityWhileInactive;
-(void)remoteViewDidInvalidate;
-(void)_serverDidTerminate;
-(LockScreenDimmingBehavior *)_dimmingBehavior;
-(void)_takeSnapshotIfNeeded;
-(id)legibilitySettingsForStepping;
-(void)insertRemoteViewInHierarchy;
-(BOOL)displaySteppingViews;
-(void)_beginDisplayingIfNeeded;
-(void)_setUnlockShieldView:(id)arg1 ;
-(void)_integrateHeaderFooterChrome;
-(void)setLastIsDimmedState:(BOOL)arg1 ;
-(BOOL)lastIsDimmedState;
-(BOOL)updateCachedInstructions:(id)arg1 ;
-(void)_initializeHeaderFooterChrome;
-(void)setDisplaySteppingViews:(BOOL)arg1 ;
-(void)_setDimmingBehavior:(id)arg1 ;
-(void)_invalidateAssertions;
-(void)notifyingViewWillLeaveWindow:(id)arg1 ;
-(void)guidanceDidChange:(id)arg1 ;
-(void)_screenDidTurnOff:(id)arg1 ;
-(void)notifyingView:(id)arg1 willAddToWindow:(id)arg2 ;
-(void)notifyingViewDidAddToWindow:(id)arg1 ;
-(void)_screenWillTurnOn:(id)arg1 ;
-(RemoteView *)_remoteView;
-(void)_setRemoteView:(id)arg1 ;
-(void)_acquireAssertionsIfNeeded;
-(void)_endDisplaying;
-(void)setIdleDelayTimer:(NSTimer *)arg1 ;
-(BOOL)isScreenBlanked;
-(NSTimer *)idleDelayTimer;
-(void)unconditionallyReenableIdleTimer;
-(void)setIdleTimerDisabled:(BOOL)arg1 onlyIfViewVisible:(BOOL)arg2 ;
-(void)notifyingViewNeedsSubviewLayout:(id)arg1 ;
-(void)_updateTrafficAlertViewWithInfo:(id)arg1 ;
-(void)remoteViewDidBecomeAvailableWithGuidanceUpdate:(id)arg1 ;
-(void)transitLockScreenHeader:(id)arg1 willLayoutWithBounds:(CGRect)arg2 ;
-(id)init;
-(void)dealloc;
-(long long)presentationStyle;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)legibilitySettings;
-(BOOL)idleTimerDisabled;
-(long long)notificationBehavior;
-(BOOL)viewCanBeDisplayed;
-(BOOL)showDateView;
-(BOOL)allowsLockScreenMediaControls;
-(long long)overlayStyle;
-(BOOL)legibilitySettingsOverridesVibrancy;
-(BOOL)isContentViewWhiteUnderSlideToUnlockText;
-(id)bundleIDForUnlock;
-(unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1 ;
-(BOOL)shouldAutoHideNotifications;
-(long long)pluginPriority;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)allowsPhotoSlideshow;
-(void)disable;
-(BOOL)viewWantsFullscreenLayout;
-(BOOL)handleLockButtonPressed;
@end

