/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBSubscriptionDetectionScreenView : PBCodable <NSCopying> {

	int _countOfSubscriptionsDetected;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasCountOfSubscriptionsDetected; 
@property (assign,nonatomic) int countOfSubscriptionsDetected;                  //@synthesize countOfSubscriptionsDetected=_countOfSubscriptionsDetected - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setCountOfSubscriptionsDetected:(int)arg1 ;
-(void)setHasCountOfSubscriptionsDetected:(BOOL)arg1 ;
-(BOOL)hasCountOfSubscriptionsDetected;
-(int)countOfSubscriptionsDetected;
@end

