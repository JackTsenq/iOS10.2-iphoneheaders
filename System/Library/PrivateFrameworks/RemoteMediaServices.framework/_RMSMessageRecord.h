/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _RMSMessageRecord : NSObject {

	unsigned short _messageType;
	id _responseBlock;

}

@property (assign,nonatomic) unsigned short messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) id responseBlock;                        //@synthesize responseBlock=_responseBlock - In the implementation block
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
-(unsigned short)messageType;
-(void)setMessageType:(unsigned short)arg1 ;
@end
