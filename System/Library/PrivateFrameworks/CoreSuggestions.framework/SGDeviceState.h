/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGDeviceState : NSObject
+(BOOL)isDeviceFormattedForProtection;
+(void)blockUntilFirstUnlock;
+(void)runBlockWhenDeviceIsReadyForSuggestions:(/*^block*/id)arg1 ;
+(BOOL)isClassCLocked;
+(int)lockState;
+(id)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(id)currentOsBuild;
+(void)unregisterForLockStateChangeNotifications:(id)arg1 ;
+(BOOL)isUnlocked;
@end

