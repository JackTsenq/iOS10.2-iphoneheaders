/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTVehicleEventNotification : RTNotification {

	NSArray* _vehicleEvents;

}

@property (nonatomic,retain) NSArray * vehicleEvents;              //@synthesize vehicleEvents=_vehicleEvents - In the implementation block
-(NSArray *)vehicleEvents;
-(id)initWithVehicleEvents:(id)arg1 ;
-(void)setVehicleEvents:(NSArray *)arg1 ;
@end

