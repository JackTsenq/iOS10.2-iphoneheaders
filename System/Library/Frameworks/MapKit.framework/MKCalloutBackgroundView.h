/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIPopoverBackgroundView.h>

@class UIView, _MKCalloutBackgroundMaskView, NSMutableArray, UIImageView, UIMotionEffect, UIColor;

@interface MKCalloutBackgroundView : UIPopoverBackgroundView {

	double _arrowOffset;
	unsigned long long _arrowDirection;
	UIView* _containerView;
	UIView* _baseBorderView;
	_MKCalloutBackgroundMaskView* _mainMaskView;
	NSMutableArray* _vendedMaskViews;
	SCD_Struct_MK13 _mapDisplayStyle;
	UIImageView* _currentArrowShadow;
	UIMotionEffect* _arrowMotionEffect;
	UIMotionEffect* _arrowShadowMotionEffect;

}

@property (assign,nonatomic) SCD_Struct_MK13 mapDisplayStyle;                 //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (nonatomic,readonly) UIColor * calloutBackgroundColor; 
+(BOOL)wantsDefaultContentAppearance;
+(double)arrowHeight;
+(double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1 ;
+(double)arrowBase;
+(UIEdgeInsets)contentViewInsets;
+(void)setBeingCreatedForSmallCalloutController:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(id)_shadowPath;
-(UIEdgeInsets)_contentViewInsets;
-(void)_showArrow;
-(void)_hideArrow;
-(SCD_Struct_MK13)mapDisplayStyle;
-(void)setMapDisplayStyle:(SCD_Struct_MK13)arg1 ;
-(id)newMaskLayer;
-(void)_layoutMaskView:(id)arg1 withArrowShadow:(BOOL)arg2 ;
-(void)setArrowMotionEffect:(id)arg1 ;
-(void)_retractUpDownArrow;
-(void)_extendLeftRightArrow;
-(UIColor *)calloutBackgroundColor;
-(void)_setupViews;
@end

