/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OCDDelayedNodeContext;
@interface OCDDelayedNode : NSObject {

	id<OCDDelayedNodeContext> mDelayedContext;
	BOOL mLoaded;

}
-(void)dealloc;
-(BOOL)isLoaded;
-(BOOL)load;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setDelayedContext:(id)arg1 ;
-(id)delayedContext;
@end
