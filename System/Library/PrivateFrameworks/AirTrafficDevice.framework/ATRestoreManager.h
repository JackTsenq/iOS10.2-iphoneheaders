/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ATSessionObserver.h>
#import <libobjc.A.dylib/ATRestoreAssetLinkDelegate.h>

@protocol OS_dispatch_queue;
@class ATRestoreAssetLink, NSObject, MSVXPCTransaction, ATDeviceSettings, ATSession, NSString;

@interface ATRestoreManager : NSObject <ATEnvironmentMonitorObserver, ATSessionObserver, ATRestoreAssetLinkDelegate> {

	ATRestoreAssetLink* _restoreLink;
	ATRestoreAssetLink* _applicationDataRestoreLink;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _cancelled;
	MSVXPCTransaction* _xpcTransaction;
	ATDeviceSettings* _settings;
	ATSession* _restoreSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)_start;
-(void)resume;
-(void)sessionDidFinish:(id)arg1 ;
-(void)restoreAssetLinkDidCancelRestore:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(BOOL)restoreSessionActive;
-(id)_dataClasses;
@end

