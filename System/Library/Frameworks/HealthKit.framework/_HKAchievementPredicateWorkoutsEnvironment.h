/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@protocol _HKAchievementPredicateWorkoutsEnvironmentDataSource;
@class _HKAchievementPredicateWorkoutEnvironment, NSArray;

@interface _HKAchievementPredicateWorkoutsEnvironment : _HKBaseAchievementPredicateEnvironment {

	_HKAchievementPredicateWorkoutEnvironment* _addedWorkout;
	NSArray* _allWorkoutTimeZoneOffsets;
	NSArray* _previousAllWorkoutTimeZoneOffsets;
	id<_HKAchievementPredicateWorkoutsEnvironmentDataSource> _dataSource;
	NSArray* __excludedWorkoutUUIDs;

}

@property (assign,nonatomic,__weak) id<_HKAchievementPredicateWorkoutsEnvironmentDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) _HKAchievementPredicateWorkoutEnvironment * addedWorkout;                                //@synthesize addedWorkout=_addedWorkout - In the implementation block
@property (nonatomic,retain) NSArray * allWorkoutTimeZoneOffsets;                                                     //@synthesize allWorkoutTimeZoneOffsets=_allWorkoutTimeZoneOffsets - In the implementation block
@property (nonatomic,retain) NSArray * previousAllWorkoutTimeZoneOffsets;                                             //@synthesize previousAllWorkoutTimeZoneOffsets=_previousAllWorkoutTimeZoneOffsets - In the implementation block
@property (setter=_setExcludedWorkoutUUIDs:,nonatomic,retain) NSArray * _excludedWorkoutUUIDs;                        //@synthesize _excludedWorkoutUUIDs=__excludedWorkoutUUIDs - In the implementation block
-(void)setDataSource:(id<_HKAchievementPredicateWorkoutsEnvironmentDataSource>)arg1 ;
-(id<_HKAchievementPredicateWorkoutsEnvironmentDataSource>)dataSource;
-(id)_workoutsByFilteringExcludedUUIDs:(id)arg1 ;
-(id)_workoutEnvironmentsFromWorkouts:(id)arg1 ;
-(NSArray *)_excludedWorkoutUUIDs;
-(NSArray *)allWorkoutTimeZoneOffsets;
-(NSArray *)previousAllWorkoutTimeZoneOffsets;
-(id)previousBestCaloriesForWorkoutOfType:(id)arg1 ;
-(void)setAllWorkoutTimeZoneOffsets:(NSArray *)arg1 ;
-(void)setPreviousAllWorkoutTimeZoneOffsets:(NSArray *)arg1 ;
-(void)_setExcludedWorkoutUUIDs:(id)arg1 ;
-(void)setAddedWorkout:(_HKAchievementPredicateWorkoutEnvironment *)arg1 ;
-(id)workoutsOfType:(id)arg1 ;
-(id)workoutsInDateRangeStart:(id)arg1 end:(id)arg2 ;
-(_HKAchievementPredicateWorkoutEnvironment *)addedWorkout;
@end

