/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DASDataStore <NSObject>
@required
-(void)deleteActivity:(id)arg1;
-(void)saveGroup:(id)arg1;
-(void)saveActivities:(id)arg1;
-(void)saveActivity:(id)arg1;
-(void)loadAllGroups:(id)arg1;
-(void)deleteOldActivities;
-(void)deleteActivitiesIfRequired;
-(void)loadPendingLaunchTasks:(id)arg1;

@end

