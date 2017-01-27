/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>

@protocol GAXInterestAreaClippedViewDelegate;
@class UIBezierPath, UIView;

@interface GAXInterestAreaClippedView : UIView {

	id<GAXInterestAreaClippedViewDelegate> _delegate;
	UIBezierPath* _clippingPath;
	double _backgroundPatternScaleFactor;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIView * backgroundView;                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) id<GAXInterestAreaClippedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) UIBezierPath * clippingPath;                                    //@synthesize clippingPath=_clippingPath - In the implementation block
@property (assign,nonatomic) CGSize backgroundSize; 
@property (assign,nonatomic) double backgroundPatternScaleFactor;                          //@synthesize backgroundPatternScaleFactor=_backgroundPatternScaleFactor - In the implementation block
-(void)_updateMaskLayer;
-(double)backgroundPatternScaleFactor;
-(void)_updateMaskLayerFrame;
-(void)_updateBackgroundViewCenter;
-(void)setBackgroundSize:(CGSize)arg1 ;
-(CGPoint)_centerForBackground;
-(void)setBackgroundPatternScaleFactor:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<GAXInterestAreaClippedViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(id<GAXInterestAreaClippedViewDelegate>)delegate;
-(void)_commonInit;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(CGSize)backgroundSize;
-(UIBezierPath *)clippingPath;
-(void)setClippingPath:(UIBezierPath *)arg1 ;
@end
