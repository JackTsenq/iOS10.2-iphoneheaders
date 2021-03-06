/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/CKRecordValue.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, GEORouteMatch, GEONavigationMatchInfo, CLLocationMatchInfo, NSDate, CLFloor;

@interface CLLocation : NSObject <CKRecordValue, NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) int _mapkit_source; 
@property (getter=_navigation_locationDescription,nonatomic,readonly) NSString * locationDescription; 
@property (getter=_navigation_isStale,nonatomic,readonly) BOOL isStale; 
@property (getter=_navigation_hasValidCourse,nonatomic,readonly) BOOL hasValidCourse; 
@property (getter=_navigation_routeMatch,nonatomic,readonly) GEORouteMatch * routeMatch; 
@property (getter=_navigation_courseAccuracy,nonatomic,readonly) double courseAccuracy; 
@property (getter=_navigation_hasMatch,nonatomic,readonly) BOOL hasMatch; 
@property (getter=_navigation_rawShiftedCoordinate,nonatomic,readonly) CLLocationCoordinate2D rawShiftedCoordinate; 
@property (getter=_navigation_detailedMatchInfo,nonatomic,readonly) GEONavigationMatchInfo * detailedMatchInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationMatchInfo * matchInfo; 
@property (nonatomic,readonly) SCD_Struct_CL12 clientLocation; 
@property (nonatomic,readonly) NSString * iso6709Notation; 
@property (nonatomic,readonly) int type; 
@property (assign,nonatomic) int referenceFrame; 
@property (nonatomic,readonly) CLLocationCoordinate2D rawCoordinate; 
@property (nonatomic,readonly) double rawCourse; 
@property (nonatomic,readonly) unsigned integrity; 
@property (nonatomic,readonly) double trustedTimestamp; 
@property (nonatomic,readonly) double speedAccuracy; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) double horizontalAccuracy; 
@property (nonatomic,readonly) double verticalAccuracy; 
@property (nonatomic,readonly) double course; 
@property (nonatomic,readonly) double speed; 
@property (nonatomic,copy,readonly) NSDate * timestamp; 
@property (nonatomic,copy,readonly) CLFloor * floor; 
+(double)_mapkit_timeToExpire;
+(id)_navigation_stringWithType:(int)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)wf_isEquivalentToLocation:(id)arg1 tolerance:(double)arg2 ;
-(int)_mapkit_source;
-(id)_navigation_routeMatch;
-(BOOL)_navigation_hasValidCourse;
-(BOOL)_navigation_hasMatch;
-(BOOL)_navigation_isStale;
-(BOOL)_navigation_isEqualToLocationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(int)_navigation_clLocationTypeForGEOLocationType:(int)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 rawCoordinate:(CLLocationCoordinate2D)arg2 course:(double)arg3 rawCourse:(double)arg4 courseAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 altitude:(double)arg8 timestamp:(double)arg9 horizontalAccuracy:(double)arg10 verticalAccuracy:(double)arg11 type:(int)arg12 referenceFrame:(int)arg13 ;
-(double)_navigation_courseAccuracy;
-(id)initWithGeoLocation:(id)arg1 ;
-(id)_navigation_locationDescription;
-(double)_navigation_speedAccuracy;
-(CLLocationCoordinate2D)_navigation_rawShiftedCoordinate;
-(id)_navigation_detailedMatchInfo;
-(int)pl_locationHash;
-(id)pl_newSurroundingLocationsHashes;
-(id)cam_videoMetadataRepresentation;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg1 ;
-(BOOL)cplSpecialIsEqual:(id)arg1 ;
-(unsigned long long)cplSpecialHash;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSDate *)timestamp;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)speed;
-(id)shortDescription;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(double)altitude;
-(double)course;
-(double)speedAccuracy;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(CLLocationCoordinate2D)rawCoordinate;
-(double)rawCourse;
-(void)unmatch;
-(id)initWithClientLocation:(SCD_Struct_CL12)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 ;
-(id)_initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8 ;
-(unsigned)integrity;
-(double)trustedTimestamp;
-(double)getDistanceFrom:(id)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5 ;
-(NSString *)iso6709Notation;
-(id)propagateLocationToTime:(double)arg1 ;
-(id)initWithClientLocation:(SCD_Struct_CL12)arg1 ;
-(SCD_Struct_CL12)clientLocation;
-(id)initWithClientLocation:(SCD_Struct_CL12)arg1 matchInfo:(id)arg2 ;
-(CLLocationMatchInfo *)matchInfo;
-(id)snapToResolution:(double)arg1 ;
-(CLFloor *)floor;
-(CLLocationCoordinate2D)coordinate;
-(double)distanceFromLocation:(id)arg1 ;
-(double)verticalAccuracy;
-(double)horizontalAccuracy;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 ;
@end

