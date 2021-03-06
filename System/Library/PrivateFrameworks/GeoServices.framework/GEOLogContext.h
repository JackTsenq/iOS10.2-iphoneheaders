/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSLock, NSArray;

@interface GEOLogContext : NSObject <NSCopying> {

	NSMutableArray* _logMsgStates;
	NSLock* _logMsgStatesLock;

}

@property (nonatomic,readonly) NSArray * logMsgStates;              //@synthesize logMsgStates=_logMsgStates - In the implementation block
+(id)defaultLogContext;
+(id)logContextWithDefaultTraits;
+(id)logContextWithDefaultTraitsForCachedContext;
+(id)logContextFromTraits:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(id)initWithDefaultStates;
-(id)initWithDefaultTraits;
-(void)mergeLogContext:(id)arg1 ;
-(id)logContextByMergingLogContext:(id)arg1 ;
-(void)registerLogMsgState:(id)arg1 ;
-(void)unregisterLogMsgStateOfType:(int)arg1 ;
-(void)unregisterLogMsgStateOfType:(int)arg1 stateOrigin:(id)arg2 ;
-(void)registerUserSessionStateOfType:(unsigned long long)arg1 isNavSessionAllowed:(BOOL)arg2 ;
-(id)logMsgStateOfType:(int)arg1 ;
-(void)_initializeDefaultStates;
-(void)_registerLogContextWithTraits:(id)arg1 ;
-(void)_registerDeviceIdentifierState;
-(void)_registerApplicationIdentifierState;
-(void)_registerDeviceConnectionState;
-(void)_registerExperimentsState;
-(void)_registerDefaultMapUIState;
-(void)_registerDeviceBaseStateWithTraits:(id)arg1 ;
-(void)_registerDeviceLocaleStateWithTraits:(id)arg1 ;
-(void)_registerCarPlayStateWithTraits:(id)arg1 ;
-(void)_registerMapViewStateWithTraits:(id)arg1 ;
-(NSArray *)logMsgStates;
@end

