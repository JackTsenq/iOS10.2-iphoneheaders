/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/UpdatesDatabaseSession.h>

@interface UpdatesDatabaseTransaction : UpdatesDatabaseSession
-(BOOL)deleteUpdatesInstalledBefore:(double)arg1 ;
-(id)_newUpdateEntityPropertiesWithUpdate:(id)arg1 ;
-(BOOL)mergeAvailableUpdates:(id)arg1 availableCount:(long long*)arg2 ;
@end

