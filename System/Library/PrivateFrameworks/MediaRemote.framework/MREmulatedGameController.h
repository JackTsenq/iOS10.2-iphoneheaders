/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaRemote/MediaRemote-Structs.h>
@class GCController, MRGameControllerDaemonProxy;

@interface MREmulatedGameController : NSObject {

	GCController* _controller;
	MRGameControllerDaemonProxy* _remote;
	int _profile;
	unsigned long long _controllerID;
	double _buttonAUpDelay;

}

@property (nonatomic,readonly) int profile;                                  //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) unsigned long long controllerID;              //@synthesize controllerID=_controllerID - In the implementation block
@property (assign,nonatomic) double buttonAUpDelay;                          //@synthesize buttonAUpDelay=_buttonAUpDelay - In the implementation block
-(void)dealloc;
-(id)initWithProperties:(void*)arg1 ;
-(unsigned long long)controllerID;
-(double)buttonAUpDelay;
-(void)setButtonAUpDelay:(double)arg1 ;
-(void)sendGameControllerEvent:(SCD_Struct_MR11*)arg1 ;
-(int)profile;
@end

