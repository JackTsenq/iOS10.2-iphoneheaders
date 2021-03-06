/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamSyncSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface VCMediaStreamSynchronizer : NSObject <VCMediaStreamSyncSourceDelegate> {

	tagVCMediaStreamSyncTime _source;
	tagVCMediaStreamSyncTime _destination;
	double _sourcePlayoutSampleSystemTime;
	unsigned _sourcePlayoutSampleRTPTimestamp;
	int _sourceState;
	NSObject*<OS_dispatch_queue> _mediaStreamSynchronizerQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)differenceBetweenRtpTimestamp:(unsigned)arg1 rtpTimestamp:(unsigned)arg2 ;
-(void)dealloc;
-(void)updateSourcePlayoutSampleRTPTimestamp:(unsigned)arg1 ;
-(void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned)arg2 ;
-(void)updateSourceState:(int)arg1 ;
-(id)initWithSourceSampleRate:(unsigned)arg1 destinationSampleRate:(unsigned)arg2 ;
-(void)updateDestinationNTPTime:(double)arg1 withRTPTimeStamp:(unsigned)arg2 ;
-(SCD_Struct_VC21)calculatePlayoutTimeWithRTPTimestamp:(unsigned)arg1 ;
@end

