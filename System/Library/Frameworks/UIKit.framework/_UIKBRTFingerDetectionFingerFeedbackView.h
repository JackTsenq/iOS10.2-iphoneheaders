/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, _UIKBRTFingerDetectionFingerCircleView;

@interface _UIKBRTFingerDetectionFingerFeedbackView : UIView {

	CGPoint _framelocation;
	double _radiusInt;
	BOOL _unknownSeen;
	UILabel* _fingerLabel;
	_UIKBRTFingerDetectionFingerCircleView* _fingerDot;

}

@property (nonatomic,retain) UILabel * fingerLabel;                                           //@synthesize fingerLabel=_fingerLabel - In the implementation block
@property (nonatomic,retain) _UIKBRTFingerDetectionFingerCircleView * fingerDot;              //@synthesize fingerDot=_fingerDot - In the implementation block
@property (assign,nonatomic) BOOL unknownSeen;                                                //@synthesize unknownSeen=_unknownSeen - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setNeedsDisplay;
-(void)setUnknownSeen:(BOOL)arg1 ;
-(double)radius;
-(BOOL)unknownSeen;
-(void)centerOn:(CGPoint)arg1 withRadius:(double)arg2 andIdentifier:(unsigned long long)arg3 ;
-(UILabel *)fingerLabel;
-(_UIKBRTFingerDetectionFingerCircleView *)fingerDot;
-(void)setFingerLabel:(UILabel *)arg1 ;
-(void)setFingerDot:(_UIKBRTFingerDetectionFingerCircleView *)arg1 ;
@end

