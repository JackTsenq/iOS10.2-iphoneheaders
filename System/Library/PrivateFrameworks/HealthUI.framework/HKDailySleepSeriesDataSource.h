/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@interface HKDailySleepSeriesDataSource : HKHealthQueryChartCacheDataSource {

	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,copy) id userInfoCreationBlock;              //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_monthlyChartPointsFromQueryResults:(id)arg1 intervalComponents:(id)arg2 startDate:(id)arg3 ;
-(id)_dailyChartPointsFromQueryResults:(id)arg1 ;
-(id)_chartPointFromQueryResult:(id)arg1 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(void)setUserInfoCreationBlock:(id)arg1 ;
@end

