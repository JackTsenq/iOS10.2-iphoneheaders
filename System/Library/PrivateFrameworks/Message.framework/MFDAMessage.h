/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class DAMailMessage, MFMessage, MFMailboxUid, NSString;

@interface MFDAMessage : MFMailMessage {

	DAMailMessage* _DAMailMessage;
	MFMessage* _rfc822CreatedMessage;
	MFMailboxUid* _mailbox;
	NSString* _externalConversationID;

}

@property (nonatomic,readonly) DAMailMessage * DAMailMessage;              //@synthesize DAMailMessage=_DAMailMessage - In the implementation block
-(id)messageBody;
-(void)dealloc;
-(unsigned long long)messageSize;
-(unsigned long long)messageFlags;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)headersIfAvailable;
-(id)mailbox;
-(id)remoteID;
-(id)externalConversationID;
-(id)remoteMailboxURL;
-(DAMailMessage *)DAMailMessage;
-(id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2 ;
-(id)headers;
@end

