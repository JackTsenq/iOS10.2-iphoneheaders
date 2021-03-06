/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/DuetKnowledgeMonitor-Structs.h>
#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKNowPlayingMonitor : _DKMonitor {

	BOOL _lastIsPlayingStatus;

}

@property (assign,nonatomic) BOOL lastIsPlayingStatus;              //@synthesize lastIsPlayingStatus=_lastIsPlayingStatus - In the implementation block
+(/*^block*/id)_eventFilterBlock;
+(id)_metadataFromInfo:(id)arg1 isPlaying:(BOOL)arg2 ;
+(void)setIsPlayingStatus:(BOOL)arg1 bundleId:(id)arg2 track:(id)arg3 ;
+(id)_eventWithBundleIdentifier:(id)arg1 info:(id)arg2 isPlaying:(BOOL)arg3 ;
+(id)eventStream;
+(id)entitlements;
-(void)_registerForNowPlayingNotifications;
-(void)_nowPlayingInfoDidChange:(MROriginRef)arg1 ;
-(void)setLastIsPlayingStatus:(BOOL)arg1 ;
-(BOOL)lastIsPlayingStatus;
-(id)init;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
@end

