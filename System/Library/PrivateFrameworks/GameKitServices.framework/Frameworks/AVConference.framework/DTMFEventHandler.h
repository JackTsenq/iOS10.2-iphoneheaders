/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSObject;

@interface DTMFEventHandler : NSObject {

	NSMutableArray* dtmfEventQueue;
	NSObject*<OS_dispatch_queue> dtmfQueue;
	BOOL currentEventInTransmission;
	BOOL currentEventNeedsEndBlock;
	BOOL currentIsMarker;
	unsigned char currentEvent;
	unsigned char currentVolume;
	unsigned currentStartTimestamp;
	unsigned currentDurationCounter;
	unsigned currentEndTimestamp;

}
-(id)init;
-(void)dealloc;
-(BOOL)shouldTransmitDTMFWithTimestamp:(unsigned)arg1 ;
-(void)sendingDTMFEventWithTimeStamp:(unsigned)arg1 interval:(unsigned)arg2 RTPHandle:(tagHANDLE*)arg3 ;
-(void)sendDTMFEvent:(id)arg1 atTimestamp:(unsigned)arg2 withSampleRate:(unsigned)arg3 ;
-(void)stopDTMFEvent;
-(BOOL)insertStartBlockWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 timestamp:(unsigned)arg3 ;
-(BOOL)insertStopBlockWithTimestamp:(unsigned)arg1 ;
-(int)constructDTMFEventPacketWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 durationCounter:(unsigned)arg3 interval:(unsigned)arg4 dataBuffer:(char*)arg5 isEnd:(BOOL)arg6 ;
@end

