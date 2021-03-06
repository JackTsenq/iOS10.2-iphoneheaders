/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/BaseListener.h>
#import <libobjc.A.dylib/ASDJobManager.h>

@protocol OS_dispatch_queue;
@class EventBus, NSMapTable, NSObject, NSString;

@interface JobManagerListener : BaseListener <ASDJobManager> {

	EventBus* _bus;
	NSMapTable* _clients;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultListener;
-(id)_getJobsWithIDs:(id)arg1 forClient:(id)arg2 ;
-(void)_enumerateClientsUsingBlock:(/*^block*/id)arg1 ;
-(id)_getJobStatesWithIDs:(id)arg1 forClient:(id)arg2 ;
-(id)_getJobProgressWithIDs:(id)arg1 forclient:(id)arg2 ;
-(id)_getJobsForClient:(id)arg1 ;
-(void)_enumerateJobsWithIDs:(id)arg1 forClient:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_externalJobWithEntity:(id)arg1 ;
-(void)notifyClientsOfJobsChanged:(id)arg1 ;
-(void)notifyClientsOfJobsCompleted:(id)arg1 finalPhases:(id)arg2 isPersistent:(BOOL)arg3 ;
-(void)notifyClientsOfProgressChanged:(id)arg1 ;
-(void)notifyClientsOfStatesChanged:(id)arg1 ;
-(void)_initializeConnection:(id)arg1 ;
-(void)_handleDisconnect:(id)arg1 ;
-(void)resumeJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)pauseJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)cancelJobsWithIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_handleEvent:(id)arg1 ;
-(void)finishJobsWithIDs:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)getJobsUsingReplyBlock:(/*^block*/id)arg1 ;
-(void)getJobsWithIDs:(id)arg1 usingReplyBlock:(/*^block*/id)arg2 ;
-(void)registerJobManagerWithOptions:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
@end

