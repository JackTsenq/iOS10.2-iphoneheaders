/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEOSpatialLookupRequest : PBRequest <NSCopying> {

	SCD_Struct_GE1* _categorys;
	GEOLatLng* _center;
	int _maxResults;
	int _radius;
	SCD_Struct_GE45 _has;

}

@property (nonatomic,retain) GEOLatLng * center;                               //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) int radius;                                       //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults;                                   //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) unsigned long long categorysCount; 
@property (nonatomic,readonly) int* categorys; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRadius:(int)arg1 ;
-(int)radius;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearCategorys;
-(void)addCategory:(int)arg1 ;
-(unsigned long long)categorysCount;
-(int)categoryAtIndex:(unsigned long long)arg1 ;
-(int*)categorys;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasRadius;
-(void)setCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categorysAsString:(int)arg1 ;
-(int)StringAsCategorys:(id)arg1 ;
@end

