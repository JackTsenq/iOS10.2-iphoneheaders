/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSObject, GEOLocationShifter;

@interface CLSLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _locationShiftQueue;
	GEOLocationShifter* _locationShifter;

}
+(id)sharedLocationShifter;
-(id)init;
-(CGSize)shiftedCoordinateForOriginalCoordinate:(CGSize)arg1 ;
@end
