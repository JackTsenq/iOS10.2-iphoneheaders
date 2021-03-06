/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIMotionEffect.h>

@class UIMotionEffectGroup, UIInterpolatingMotionEffect, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect {

	UIMotionEffectGroup* _group;
	UIOffset _slideMagnitude;
	UIInterpolatingMotionEffect* _horizontalSlideEffect;
	UIInterpolatingMotionEffect* _verticalSlideEffect;
	_UITiltMotionEffect* _tiltEffect;

}

@property (assign,nonatomic) UIOffset slideMagnitude;                                    //@synthesize slideMagnitude=_slideMagnitude - In the implementation block
@property (assign,nonatomic) double horizontalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) double verticalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) double maximumHorizontalTiltAngle; 
@property (assign,nonatomic) double maximumVerticalTiltAngle; 
@property (assign,nonatomic) double rotatingSphereRadius; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIOffset)slideMagnitude;
-(void)setSlideMagnitude:(UIOffset)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)setRotatingSphereRadius:(double)arg1 ;
-(double)maximumHorizontalTiltAngle;
-(void)setMaximumHorizontalTiltAngle:(double)arg1 ;
-(double)maximumVerticalTiltAngle;
-(void)setMaximumVerticalTiltAngle:(double)arg1 ;
-(double)rotatingSphereRadius;
-(double)horizontalSlideAccelerationBoostFactor;
-(double)verticalSlideAccelerationBoostFactor;
-(void)_updateSlideEffectsWithCurrentSlideMagnitude;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(void)_updateGroupMotionEffect;
-(void)_activateTiltEffectIfNecessary;
-(void)setHorizontalSlideAccelerationBoostFactor:(double)arg1 ;
-(void)setVerticalSlideAccelerationBoostFactor:(double)arg1 ;
@end

