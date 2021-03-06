/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Search/Search-Structs.h>
@class SPXPCConnection, NSObject, NSString;

@interface SPDaemonConnection : NSObject {

	SPXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSString* _daemonName;
	CFDictionaryRef _runningQueries;

}

@property (nonatomic,retain) NSString * daemonName;                       //@synthesize daemonName=_daemonName - In the implementation block
@property (assign,nonatomic) CFDictionaryRef runningQueries;              //@synthesize runningQueries=_runningQueries - In the implementation block
+(id)sharedConnection;
+(id)sharedBackgroundConnection;
-(id)init;
-(void)dealloc;
-(void)deactivate;
-(void)activate;
-(id)_connection;
-(void)preheat;
-(void)cancelQuery:(id)arg1 ;
-(void)_resetConnection;
-(id)startQuery:(id)arg1 withResponse:(id)arg2 isStable:(BOOL)arg3 ;
-(void)_sendMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)sendMessageForToken:(id)arg1 withResponse:(id)arg2 isStable:(BOOL)arg3 ;
-(id)startQuery:(id)arg1 withResponse:(id)arg2 isStable:(BOOL)arg3 queue:(id)arg4 ;
-(id)initWithDaemonName:(id)arg1 ;
-(void)requestParsecParametersWithReply:(/*^block*/id)arg1 ;
-(void)sendSFFeedbackMessage:(SEL)arg1 withFeedback:(id)arg2 ;
-(NSString *)daemonName;
-(void)setDaemonName:(NSString *)arg1 ;
-(CFDictionaryRef)runningQueries;
-(void)setRunningQueries:(CFDictionaryRef)arg1 ;
-(id)startQuery:(id)arg1 ;
-(void)retrieveFirstTimeExperienceTextWithReply:(/*^block*/id)arg1 ;
@end

