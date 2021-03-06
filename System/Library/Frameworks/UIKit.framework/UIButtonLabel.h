/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class UIButton, NSDictionary;

@interface UIButtonLabel : UILabel {

	BOOL _reverseShadow;
	UIButton* _button;
	NSDictionary* _cachedDefaultAttributes;

}
+(id)_defaultAttributes;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)_setWantsAutolayout;
-(CGSize)shadowOffset;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(void)_setMinimumFontSize:(double)arg1 ;
-(id)_defaultAttributes;
-(void)_invalidateCachedDefaultAttributes;
-(void)_updateTextColorWithFallbackColorIfNeeded;
-(id)_initWithFrame:(CGRect)arg1 button:(id)arg2 ;
-(void)setReverseShadow:(BOOL)arg1 ;
@end

