/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:00 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimeZone, NSMutableDictionary;

@interface CalScheduledTaskCache_TimeZoneFetchContext : NSObject {

	NSTimeZone* _previousTimeZone;
	NSTimeZone* _nextTimeZone;
	NSMutableDictionary* _dict;

}

@property (nonatomic,retain) NSTimeZone * previousTimeZone;              //@synthesize previousTimeZone=_previousTimeZone - In the implementation block
@property (nonatomic,retain) NSTimeZone * nextTimeZone;                  //@synthesize nextTimeZone=_nextTimeZone - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * dict;                 //@synthesize dict=_dict - In the implementation block
-(NSMutableDictionary *)dict;
-(NSTimeZone *)previousTimeZone;
-(void)setPreviousTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)nextTimeZone;
-(void)setNextTimeZone:(NSTimeZone *)arg1 ;
-(void)setDict:(NSMutableDictionary *)arg1 ;
@end

