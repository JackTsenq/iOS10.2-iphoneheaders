/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCAirPlayDestination : NSObject {

	NSString* _deviceID;
	NSString* _deviceName;
	NSString* _password;

}

@property (nonatomic,retain) NSString * deviceID;                //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;              //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * password;                //@synthesize password=_password - In the implementation block
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end
