/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKit/UIScrollView.h>

@interface CCUIImmediateTouchScrollView : UIScrollView {

	BOOL _hitTestToContentArea;

}

@property (assign,nonatomic) BOOL hitTestToContentArea;              //@synthesize hitTestToContentArea=_hitTestToContentArea - In the implementation block
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setHitTestToContentArea:(BOOL)arg1 ;
-(BOOL)hitTestToContentArea;
@end

