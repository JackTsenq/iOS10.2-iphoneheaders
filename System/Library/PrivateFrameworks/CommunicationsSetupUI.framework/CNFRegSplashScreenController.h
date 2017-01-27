/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <libobjc.A.dylib/CNFRegFirstRunExperience.h>

@protocol CNFRegFirstRunDelegate;
@class UIButton, CNFRegController, NSString, UIBarButtonItem;

@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience> {

	UIButton* _learnMoreButton;
	id<CNFRegFirstRunDelegate> _delegate;
	CNFRegController* _regController;

}

@property (nonatomic,retain) CNFRegController * regController;                 //@synthesize regController=_regController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<CNFRegFirstRunDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentAppearanceStyle; 
@property (nonatomic,retain) UIBarButtonItem * customLeftButton; 
@property (nonatomic,retain) UIBarButtonItem * customRightButton; 
-(id)init;
-(void)setDelegate:(id<CNFRegFirstRunDelegate>)arg1 ;
-(void)dealloc;
-(id<CNFRegFirstRunDelegate>)delegate;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willBecomeActive;
-(CNFRegController *)regController;
-(id)userInteractionColor;
-(void)setRegController:(CNFRegController *)arg1 ;
-(long long)currentAppearanceStyle;
-(id)initWithRegController:(id)arg1 account:(id)arg2 ;
-(void)setCustomLeftButton:(UIBarButtonItem *)arg1 ;
-(void)setCustomRightButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)customLeftButton;
-(UIBarButtonItem *)customRightButton;
-(void)_learnMorePressed:(id)arg1 ;
-(void)_getStartedPressed:(id)arg1 ;
@end
