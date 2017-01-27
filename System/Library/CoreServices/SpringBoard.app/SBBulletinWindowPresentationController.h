/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIPresentationController.h>

@class UIView;

@interface SBBulletinWindowPresentationController : UIPresentationController {

	UIView* _counterRotatedView;
	double _counterRotatedAngle;
	CGRect _counterRotatedOriginalBounds;

}

@property (setter=_setCounterRotatedView:,getter=_counterRotatedView,nonatomic,retain) UIView * counterRotatedView;                                          //@synthesize counterRotatedView=_counterRotatedView - In the implementation block
@property (assign,setter=_setCounterRotatedAngle:,getter=_counterRotatedAngle,nonatomic) double counterRotatedAngle;                                         //@synthesize counterRotatedAngle=_counterRotatedAngle - In the implementation block
@property (assign,setter=_setCounterRotatedOriginalBounds:,getter=_counterRotatedOriginalBounds,nonatomic) CGRect counterRotatedOriginalBounds;              //@synthesize counterRotatedOriginalBounds=_counterRotatedOriginalBounds - In the implementation block
-(void)_removeCounterRotationIfNecessary;
-(id)_counterRotatedView;
-(void)_setCounterRotatedView:(id)arg1 ;
-(double)_counterRotatedAngle;
-(void)_setCounterRotatedAngle:(double)arg1 ;
-(CGRect)_counterRotatedOriginalBounds;
-(void)_setCounterRotatedOriginalBounds:(CGRect)arg1 ;
-(BOOL)shouldRemovePresentersView;
-(BOOL)shouldPresentInFullscreen;
-(void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3 ;
-(CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1 ;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
@end
