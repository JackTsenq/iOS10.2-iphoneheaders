/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRVehicleAccessoryManagerDelegate;
@class NSMutableDictionary;

@interface CRVehicleAccessoryManager : NSObject {

	id<CRVehicleAccessoryManagerDelegate> _vehicleAccessoryDelegate;
	NSMutableDictionary* _vehiclesBySerialNumber;

}

@property (nonatomic,retain) NSMutableDictionary * vehiclesBySerialNumber;                                       //@synthesize vehiclesBySerialNumber=_vehiclesBySerialNumber - In the implementation block
@property (assign,nonatomic,__weak) id<CRVehicleAccessoryManagerDelegate> vehicleAccessoryDelegate;              //@synthesize vehicleAccessoryDelegate=_vehicleAccessoryDelegate - In the implementation block
+(BOOL)_isValidAccessoryMacAddress:(id)arg1 ;
+(BOOL)_isVehicleAccessory:(id)arg1 ;
+(id)_certificateSerialNumberForAccessory:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)connectedVehicleAccessories;
-(void)setVehiclesBySerialNumber:(NSMutableDictionary *)arg1 ;
-(void)_primeConnectedVehicleAccessories;
-(void)handleAccessoryConnect:(id)arg1 ;
-(void)handleAccessoryDisconnect:(id)arg1 ;
-(void)handleAccessoryInformationUpdate:(id)arg1 ;
-(id)_vehicleForAccessory:(id)arg1 ;
-(NSMutableDictionary *)vehiclesBySerialNumber;
-(void)_updateVehicle:(id)arg1 usingAccessory:(id)arg2 ;
-(id<CRVehicleAccessoryManagerDelegate>)vehicleAccessoryDelegate;
-(id)vehicleAccessoryForiAPConnectionIdentifier:(unsigned long long)arg1 ;
-(void)setVehicleAccessoryDelegate:(id<CRVehicleAccessoryManagerDelegate>)arg1 ;
-(id)vehicleAccessoryForCertificateSerial:(id)arg1 ;
@end

