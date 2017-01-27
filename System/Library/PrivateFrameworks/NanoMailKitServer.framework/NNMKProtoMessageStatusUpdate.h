/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoMessageStatusUpdate : PBCodable <NSCopying> {

	NSString* _messageId;
	unsigned _statusVersion;
	unsigned _updatedStatus;
	SCD_Struct_NN2 _has;

}

@property (nonatomic,readonly) BOOL hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) BOOL hasUpdatedStatus; 
@property (assign,nonatomic) unsigned updatedStatus;              //@synthesize updatedStatus=_updatedStatus - In the implementation block
@property (assign,nonatomic) BOOL hasStatusVersion; 
@property (assign,nonatomic) unsigned statusVersion;              //@synthesize statusVersion=_statusVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasMessageId;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setUpdatedStatus:(unsigned)arg1 ;
-(void)setHasUpdatedStatus:(BOOL)arg1 ;
-(BOOL)hasUpdatedStatus;
-(void)setStatusVersion:(unsigned)arg1 ;
-(void)setHasStatusVersion:(BOOL)arg1 ;
-(BOOL)hasStatusVersion;
-(unsigned)updatedStatus;
-(unsigned)statusVersion;
@end
