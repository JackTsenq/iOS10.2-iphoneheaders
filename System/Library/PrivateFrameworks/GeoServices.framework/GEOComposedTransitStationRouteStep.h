/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOTransitTransfer, GEOTransitEnterExitInfo, GEOPBTransitAccessPoint, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep {

	unsigned _expectedTime;
	BOOL _isArrivalUncertain;
	GEOTransitTransfer* _transitTransfer;
	GEOTransitEnterExitInfo* _enterExitInfo;
	GEOPBTransitAccessPoint* _accessPoint;

}

@property (nonatomic,readonly) GEOPBTransitAccessPoint * accessPoint;              //@synthesize accessPoint=_accessPoint - In the implementation block
@property (nonatomic,readonly) unsigned expectedTime;                              //@synthesize expectedTime=_expectedTime - In the implementation block
@property (nonatomic,readonly) GEOTransitTransfer * transitTransfer;               //@synthesize transitTransfer=_transitTransfer - In the implementation block
@property (nonatomic,readonly) BOOL isArrivalUncertain;                            //@synthesize isArrivalUncertain=_isArrivalUncertain - In the implementation block
@property (nonatomic,readonly) NSString * exitSign; 
@property (nonatomic,readonly) BOOL displayStop; 
@property (nonatomic,readonly) BOOL hasDisplayStop; 
-(void)dealloc;
-(unsigned)expectedTime;
-(SCD_Struct_GE26)startGeoCoordinate;
-(SCD_Struct_GE26)endGeoCoordinate;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(NSString *)exitSign;
-(BOOL)displayStop;
-(BOOL)hasDisplayStop;
-(GEOPBTransitAccessPoint *)accessPoint;
-(GEOTransitTransfer *)transitTransfer;
-(BOOL)isArrivalUncertain;
@end
