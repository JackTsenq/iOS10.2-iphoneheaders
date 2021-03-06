/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue_attr;
@class NSObject;

@interface BSDispatchQueueAttributes : NSObject {

	NSObject*<OS_dispatch_queue_attr> _attrs;

}

@property (assign,nonatomic) NSObject*<OS_dispatch_queue_attr> attributes;              //@synthesize attrs=_attrs - In the implementation block
+(id)_attributesWithAttributes:(id)arg1 ;
+(id)serial;
+(id)concurrent;
-(id)autoreleaseFrequency:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue_attr>)attributes;
-(void)setAttributes:(NSObject*<OS_dispatch_queue_attr>)arg1 ;
-(id)inactive;
-(id)serviceClass:(unsigned)arg1 ;
@end

