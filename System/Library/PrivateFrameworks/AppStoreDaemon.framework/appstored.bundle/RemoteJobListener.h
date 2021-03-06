/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject, NSXPCConnection, SSDownloadManager, NSMutableSet, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;

@interface RemoteJobListener : NSObject {

	NSObject*<OS_dispatch_group> _group;
	NSXPCConnection* _connection;
	SSDownloadManager* _manager;
	NSMutableSet* _observing;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _sessionTasks;
	NSMutableDictionary* _sessionTasksByIdentifier;
	NSString* _clientID;

}

@property (nonatomic,copy) NSString * clientID;              //@synthesize clientID=_clientID - In the implementation block
-(void)updateDownloadState:(id)arg1 ;
-(void)updateProgress:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
@end

