/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BBDataProviderConnection, CALNRemoteEventProvider, CALNRemoteReminderProvider, _EKAlarmEngine, EKTravelEngine, _EKNotificationMonitor;

@interface CALNBulletinBoardProvider : NSObject {

	NSObject*<OS_dispatch_queue> _bulletinQueue;
	NSObject*<OS_dispatch_queue> _notificationMonitorQueue;
	BBDataProviderConnection* _bbConnection;
	CALNRemoteEventProvider* _eventsProvider;
	CALNRemoteReminderProvider* _remindersProvider;
	_EKAlarmEngine* _alarmEngine;
	EKTravelEngine* _travelEngine;
	_EKNotificationMonitor* _notificationMonitor;

}
+(id)requestedDarwinNotifications;
+(id)sharedProvider;
+(id)_bbProviderDarwinNotifications;
+(id)_stringForBackgroundTaskAgentJobStatus:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)handleDarwinNotification:(id)arg1 ;
-(void)startNotificationMonitor;
-(void)registerForNotifications;
-(void)databaseChanged;
-(void)handleBTAJob:(id)arg1 named:(const char*)arg2 ;
-(void)startAlarmEngine;
-(void)registerDataProviders;
-(void)startTravelEngine;
-(void)_alarmsDidFire:(id)arg1 ;
-(void)_unalertedNotificationsReceived:(id)arg1 ;
-(void)_notificationCountChanged:(id)arg1 ;
-(void)_notificationsChanged:(id)arg1 ;
@end

