/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFDAMessagePayloadFetchResponse.h>

@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {

	BOOL streaming;
	BOOL streamingDone;
	NSData* data;

}
-(void)dealloc;
-(id)data;
-(BOOL)streaming;
-(BOOL)streamingDone;
-(id)initWithData:(id)arg1 streaming:(BOOL)arg2 streamingDone:(BOOL)arg3 ;
@end

