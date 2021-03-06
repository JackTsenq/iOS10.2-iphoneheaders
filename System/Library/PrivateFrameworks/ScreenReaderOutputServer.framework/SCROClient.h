/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@class NSLock;

@interface SCROClient : NSObject {

	NSLock* _lock;
	unsigned _identifier;
	unsigned _port;
	int _pid;
	CFArrayRef _queue;
	CFSetRef _callbackSet;

}
+(void)initialize;
+(id)addClientGetIdentifier:(unsigned*)arg1 token:(SCD_Struct_SC15)arg2 getPort:(unsigned*)arg3 ;
+(long long)removeClientWithPort:(unsigned)arg1 ;
+(BOOL)isClientTrustedWithPortToken:(SCD_Struct_SC15)arg1 ;
+(void)sendCallback:(id)arg1 ;
+(id)callbacksForClientIdentifier:(unsigned)arg1 ;
+(void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned)arg2 ;
-(void)_unlock;
-(id)init;
-(void)dealloc;
-(void)_invalidate;
-(void)_lock;
-(BOOL)_wantsCallback:(id)arg1 ;
-(void)_sendCallback:(id)arg1 ;
-(id)_dequeueCallbacks;
-(void)_registerCallbackWithKey:(int)arg1 ;
@end

