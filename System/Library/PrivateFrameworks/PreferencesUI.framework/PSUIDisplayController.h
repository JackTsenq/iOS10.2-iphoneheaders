/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSMagnifyControllerDelegate.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class NSArray, NSDictionary, NSMutableDictionary, CBClient, NSDateFormatter, NSString;

@interface PSUIDisplayController : PSListController <PSMagnifyControllerDelegate, PSListControllerTestableSpecifiers> {

	NSArray* _autoLockValues;
	NSDictionary* _autoLockTitleDictionary;
	NSMutableDictionary* _localizedAutoLockTitleDictionary;
	CBClient* _brightnessClient;
	NSDateFormatter* _timeFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
-(id)init;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)brightnessChangedExternally;
-(void)magnifyController:(id)arg1 didFinishWithDisplayMode:(id)arg2 ;
-(id)localizedMagnifyModeName;
-(id)screenLock:(id)arg1 ;
-(void)profileNotification:(id)arg1 ;
-(void)handleBlueLightStatusChanged:(SCD_Struct_PS4*)arg1 ;
-(id)localizedTimeForTime:(SCD_Struct_PS2)arg1 ;
-(void)handleBrightnessChangedNotification:(id)arg1 ;
-(void)updateAutoLockSpecifier;
-(void)_cleanupTransactionRef;
-(BOOL)shouldShowAutoLock;
-(BOOL)shouldShowCaseLockOption;
-(id)lockGroupFooter;
-(void)presentModalMagnifyController;
-(void)_localizeAutoLockTitles;
-(void)reloadBlueLightSpecifiers;
-(id)backlightValue:(id)arg1 ;
-(void)showAlertToDisableAccessibilityFilters:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 ;
-(void)setScreenLock:(id)arg1 specifier:(id)arg2 ;
-(id)locksAndUnlocksWithCase:(id)arg1 ;
-(void)setLocksAndUnlocksWithCase:(id)arg1 specifier:(id)arg2 ;
-(void)setBoldTextEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)boldTextEnabledForSpecifier:(id)arg1 ;
-(id)autoBrightness:(id)arg1 ;
-(void)setAutoBrightness:(id)arg1 specifier:(id)arg2 ;
-(void)setBacklightValue:(id)arg1 specifier:(id)arg2 ;
-(id)blueLightSchedule:(id)arg1 ;
-(id)getAutoWhiteBalanceEnabled:(id)arg1 ;
-(void)setAutoWhiteBalanceEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)specifiers;
@end
