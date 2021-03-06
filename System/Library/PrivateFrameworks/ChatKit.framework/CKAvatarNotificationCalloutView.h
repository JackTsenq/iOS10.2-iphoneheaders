/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol CKAvatarNotificationCalloutViewDelegate;
@class UITextView, UIImageView, CAAnimation, UITapGestureRecognizer, NSString;

@interface CKAvatarNotificationCalloutView : UIView <CAAnimationDelegate> {

	id<CKAvatarNotificationCalloutViewDelegate> _delegate;
	UITextView* _textView;
	UIImageView* _tailImageView;
	CAAnimation* _starterAniamtion;
	CAAnimation* _finisherAnimation;
	UITapGestureRecognizer* _tapGestureRecognizer;
	long long _mode;

}

@property (nonatomic,retain) UITextView * textView;                                                    //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) UIImageView * tailImageView;                                              //@synthesize tailImageView=_tailImageView - In the implementation block
@property (nonatomic,retain) CAAnimation * starterAniamtion;                                           //@synthesize starterAniamtion=_starterAniamtion - In the implementation block
@property (nonatomic,retain) CAAnimation * finisherAnimation;                                          //@synthesize finisherAnimation=_finisherAnimation - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                            //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<CKAvatarNotificationCalloutViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setDelegate:(id<CKAvatarNotificationCalloutViewDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CKAvatarNotificationCalloutViewDelegate>)delegate;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)animateIn;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)_handleTap:(id)arg1 ;
-(UITextView *)textView;
-(void)animateOut;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(BOOL)_shouldShowShadow;
-(void)setTailImageView:(UIImageView *)arg1 ;
-(UIImageView *)tailImageView;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setStarterAniamtion:(CAAnimation *)arg1 ;
-(void)setFinisherAnimation:(CAAnimation *)arg1 ;
-(CAAnimation *)starterAniamtion;
-(CAAnimation *)finisherAnimation;
-(id)initWithFrame:(CGRect)arg1 previewText:(id)arg2 mode:(long long)arg3 ;
@end

