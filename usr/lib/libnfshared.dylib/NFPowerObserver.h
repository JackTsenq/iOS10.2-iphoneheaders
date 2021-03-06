/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NFPowerObserverDelegate, OS_dispatch_queue;
#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
@class NSObject;

@interface NFPowerObserver : NSObject {

	id<NFPowerObserverDelegate> _delegate;
	unsigned _powerNotificationConnection;
	IONotificationPortRef _powerNotificationPort;
	unsigned _powerNotificationNotifier;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _willSleep;

}

@property (readonly) BOOL willSleep;              //@synthesize willSleep=_willSleep - In the implementation block
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)unregisterForEvents;
-(BOOL)registerForEvents;
-(void)_powerNotificationMessage:(unsigned)arg1 argument:(void*)arg2 ;
-(BOOL)willSleep;
@end

