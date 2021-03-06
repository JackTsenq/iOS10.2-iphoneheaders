/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TKProtocolTokenWatcher.h>

@protocol OS_dispatch_semaphore;
@class NSXPCConnection, NSMutableArray, NSMutableDictionary, NSObject, NSArray;

@interface TKTokenWatcher : NSObject <TKProtocolTokenWatcher> {

	NSXPCConnection* _connection;
	NSMutableArray* _tokenIDs;
	NSMutableDictionary* _removalHandlers;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	/*^block*/id _insertionHandler;

}

@property (readonly) NSArray * tokenIDs;              //@synthesize tokenIDs=_tokenIDs - In the implementation block
-(id)init;
-(void)dealloc;
-(void)insertedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)removedToken:(id)arg1 reply:(/*^block*/id)arg2 ;
-(NSArray *)tokenIDs;
-(id)initWithInsertionHandler:(/*^block*/id)arg1 ;
-(void)addRemovalHandler:(/*^block*/id)arg1 forTokenID:(id)arg2 ;
-(void)setup;
@end

