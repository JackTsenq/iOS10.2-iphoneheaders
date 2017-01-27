/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface CAMFocusIndicatorRectView : UIView {

	long long _style;
	UIImageView* __imageView;

}

@property (nonatomic,readonly) UIImageView * _imageView;                   //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,readonly) long long style;                            //@synthesize style=_style - In the implementation block
@property (assign,getter=isInactive,nonatomic) BOOL inactive; 
@property (assign,getter=isPulsing,nonatomic) BOOL pulsing; 
-(void)layoutSubviews;
-(long long)style;
-(CGSize)intrinsicContentSize;
-(UIImageView *)_imageView;
-(id)initWithStyle:(long long)arg1 ;
-(void)setInactive:(BOOL)arg1 ;
-(BOOL)isInactive;
-(void)setPulsing:(BOOL)arg1 ;
-(BOOL)isPulsing;
@end
