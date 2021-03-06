/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@interface _DKBacklightMonitor : _DKMonitor {

	int notifyToken;

}
+(void)setIsBacklit:(BOOL)arg1 ;
+(BOOL)indicatesScreenOnWithNotificationState:(id)arg1 ;
+(BOOL)shouldMergeUnchangedEvents;
+(id)_eventWithState:(id)arg1 ;
+(id)eventStream;
+(id)entitlements;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
@end

