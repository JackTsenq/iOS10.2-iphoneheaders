/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface MRDContentItemClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _identifiers;

}
-(id)subscribedIdentifiers:(id)arg1 ;
-(void)addIdentifiersFromPlaybackQueue:(void*)arg1 ;
-(void)addIdentifiersFromContentItems:(id)arg1 ;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
-(void)clear;
-(void)addIdentifiers:(id)arg1 ;
@end
