/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SUScriptObjectInvocationBatch;

@interface SUScriptObjectBatchProxy : NSObject {

	SUScriptObjectInvocationBatch* _invocationBatch;
	id _target;

}

@property (assign) SUScriptObjectInvocationBatch * invocationBatch;              //@synthesize invocationBatch=_invocationBatch - In the implementation block
@property (assign) id target;                                                    //@synthesize target=_target - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setInvocationBatch:(SUScriptObjectInvocationBatch *)arg1 ;
-(SUScriptObjectInvocationBatch *)invocationBatch;
@end

