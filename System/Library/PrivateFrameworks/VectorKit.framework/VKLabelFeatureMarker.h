/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKFeatureMarker.h>

@interface VKLabelFeatureMarker : VKFeatureMarker {

	shared_ptr<md::LabelFeatureMarker>* _actualLabelFeatureMarker;

}

@property (assign,nonatomic) int viewProximity; 
+(id)markerWithLabelFeatureMarker:(const shared_ptr<md::LabelFeatureMarker>*)arg1 ;
-(CGVector)direction;
-(id)initWithLabelFeatureMarkerPtr:(const shared_ptr<md::LabelFeatureMarker>*)arg1 ;
-(id)initWithFeatureMarkerPtr:(const shared_ptr<md::FeatureMarker>*)arg1 ;
-(float)closestApproach;
-(int)viewProximity;
-(void)setViewProximity:(int)arg1 ;
@end

