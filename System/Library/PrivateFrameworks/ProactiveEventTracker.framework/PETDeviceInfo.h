/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PETDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(BOOL)isInternalBuild;
+(id)sharedInstance;
+(BOOL)isDemoModeEnabled;
+(BOOL)isBetaBuild;
+(BOOL)isBatterySaverEnabled;
+(BOOL)shouldIncludePredictionLogs;
+(BOOL)isLowEndHardware;
-(id)init;
-(void)dealloc;
@end

