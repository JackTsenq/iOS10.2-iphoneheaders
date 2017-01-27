/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBDeviceInfo : PBCodable <NSCopying> {

	NSMutableArray* _devicePreferredLanguages;
	NSString* _devicePushToken;
	NSString* _deviceTimezone;
	int _deviceTokenEnv;
	NSString* _deviceType;
	SCD_Struct_NT2 _has;

}

@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSString * devicePushToken;                             //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceType; 
@property (nonatomic,retain) NSString * deviceType;                                  //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceTimezone; 
@property (nonatomic,retain) NSString * deviceTimezone;                              //@synthesize deviceTimezone=_deviceTimezone - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceTokenEnv; 
@property (assign,nonatomic) int deviceTokenEnv;                                     //@synthesize deviceTokenEnv=_deviceTokenEnv - In the implementation block
@property (nonatomic,retain) NSMutableArray * devicePreferredLanguages;              //@synthesize devicePreferredLanguages=_devicePreferredLanguages - In the implementation block
+(Class)devicePreferredLanguageType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDevicePushToken;
-(NSString *)devicePushToken;
-(void)setDevicePushToken:(NSString *)arg1 ;
-(void)setDeviceType:(NSString *)arg1 ;
-(BOOL)hasDeviceType;
-(NSString *)deviceType;
-(void)setDeviceTimezone:(NSString *)arg1 ;
-(void)setDeviceTokenEnv:(int)arg1 ;
-(void)setDevicePreferredLanguages:(NSMutableArray *)arg1 ;
-(void)addDevicePreferredLanguage:(id)arg1 ;
-(BOOL)hasDeviceTimezone;
-(int)deviceTokenEnv;
-(void)setHasDeviceTokenEnv:(BOOL)arg1 ;
-(BOOL)hasDeviceTokenEnv;
-(void)clearDevicePreferredLanguages;
-(unsigned long long)devicePreferredLanguagesCount;
-(id)devicePreferredLanguageAtIndex:(unsigned long long)arg1 ;
-(NSString *)deviceTimezone;
-(NSMutableArray *)devicePreferredLanguages;
@end
