/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSExpression, NSString, NSArray, NSDate;

@interface _HKAchievementDefinition : NSObject {

	NSPredicate* _basePredicate;
	NSPredicate* _compiledPredicate;
	NSPredicate* _baseUnearnedVisibilityPredicate;
	NSPredicate* _compiledUnearnedVisibilityPredicate;
	NSPredicate* _baseAlertabilityPredicate;
	NSPredicate* _compiledAlertabilityPredicate;
	NSExpression* _expressionForEarnedValue;
	BOOL _earnableOnlyOnce;
	BOOL _isWorkoutAchievement;
	BOOL _isPresentedOnFollowingDay;
	BOOL _equalityRequiresSameValue;
	NSString* _identifier;
	NSString* _title;
	unsigned long long _triggers;
	NSArray* _availableCountryCodes;
	NSDate* _availableStartDateUTC;
	NSDate* _availableEndDateUTC;
	NSDate* _alertDateUTC;
	NSString* _keyPathForEarnedDate;
	NSString* _badgeShapeName;
	long long _displayOrder;
	unsigned long long _deduplicationStrategy;
	unsigned long long _calendarUnitForEqualityCheck;
	NSString* _expressionFormatForEarnedValue;

}

@property (nonatomic,retain) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate; 
@property (assign,nonatomic) unsigned long long triggers;                                  //@synthesize triggers=_triggers - In the implementation block
@property (assign,nonatomic) BOOL earnableOnlyOnce;                                        //@synthesize earnableOnlyOnce=_earnableOnlyOnce - In the implementation block
@property (nonatomic,retain) NSArray * availableCountryCodes;                              //@synthesize availableCountryCodes=_availableCountryCodes - In the implementation block
@property (nonatomic,retain) NSDate * availableStartDateUTC;                               //@synthesize availableStartDateUTC=_availableStartDateUTC - In the implementation block
@property (nonatomic,retain) NSDate * availableEndDateUTC;                                 //@synthesize availableEndDateUTC=_availableEndDateUTC - In the implementation block
@property (nonatomic,retain) NSDate * alertDateUTC;                                        //@synthesize alertDateUTC=_alertDateUTC - In the implementation block
@property (nonatomic,retain) NSPredicate * baseAlertabilityPredicate;                      //@synthesize baseAlertabilityPredicate=_baseAlertabilityPredicate - In the implementation block
@property (nonatomic,retain) NSString * expressionFormatForEarnedValue;                    //@synthesize expressionFormatForEarnedValue=_expressionFormatForEarnedValue - In the implementation block
@property (nonatomic,retain) NSString * keyPathForEarnedDate;                              //@synthesize keyPathForEarnedDate=_keyPathForEarnedDate - In the implementation block
@property (assign,nonatomic) BOOL isWorkoutAchievement;                                    //@synthesize isWorkoutAchievement=_isWorkoutAchievement - In the implementation block
@property (assign,nonatomic) BOOL isPresentedOnFollowingDay;                               //@synthesize isPresentedOnFollowingDay=_isPresentedOnFollowingDay - In the implementation block
@property (nonatomic,retain) NSPredicate * unearnedVisibilityPredicate; 
@property (nonatomic,retain) NSString * badgeShapeName;                                    //@synthesize badgeShapeName=_badgeShapeName - In the implementation block
@property (assign,nonatomic) long long displayOrder;                                       //@synthesize displayOrder=_displayOrder - In the implementation block
@property (assign,nonatomic) unsigned long long deduplicationStrategy;                     //@synthesize deduplicationStrategy=_deduplicationStrategy - In the implementation block
@property (assign,nonatomic) BOOL equalityRequiresSameValue;                               //@synthesize equalityRequiresSameValue=_equalityRequiresSameValue - In the implementation block
@property (assign,nonatomic) unsigned long long calendarUnitForEqualityCheck;              //@synthesize calendarUnitForEqualityCheck=_calendarUnitForEqualityCheck - In the implementation block
@property (nonatomic,readonly) NSExpression * expressionForEarnedValue; 
@property (nonatomic,readonly) NSPredicate * alertabilityPredicate; 
@property (nonatomic,readonly) BOOL requiresValue; 
+(id)definitionWithDictionaryRepresentation:(id)arg1 ;
+(id)_compilePredicateFromBasePredicate:(id)arg1 availableCountryCodes:(id)arg2 availableStartDateUTC:(id)arg3 availableEndDateUTC:(id)arg4 earnableOnlyOnce:(BOOL)arg5 workoutAchievement:(BOOL)arg6 ;
+(id)definitionWithPlistRepresentation:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)setDisplayOrder:(long long)arg1 ;
-(long long)displayOrder;
-(void)setEarnableOnlyOnce:(BOOL)arg1 ;
-(void)setAvailableCountryCodes:(NSArray *)arg1 ;
-(void)setAvailableStartDateUTC:(NSDate *)arg1 ;
-(void)setAvailableEndDateUTC:(NSDate *)arg1 ;
-(void)setAlertDateUTC:(NSDate *)arg1 ;
-(void)setExpressionFormatForEarnedValue:(NSString *)arg1 ;
-(void)setKeyPathForEarnedDate:(NSString *)arg1 ;
-(void)setIsWorkoutAchievement:(BOOL)arg1 ;
-(void)setIsPresentedOnFollowingDay:(BOOL)arg1 ;
-(void)setUnearnedVisibilityPredicate:(NSPredicate *)arg1 ;
-(void)setBadgeShapeName:(NSString *)arg1 ;
-(void)setDeduplicationStrategy:(unsigned long long)arg1 ;
-(void)setEqualityRequiresSameValue:(BOOL)arg1 ;
-(void)setCalendarUnitForEqualityCheck:(unsigned long long)arg1 ;
-(BOOL)requiresValue;
-(void)setAlertabilityPredicate:(NSPredicate *)arg1 ;
-(BOOL)earnableOnlyOnce;
-(NSArray *)availableCountryCodes;
-(BOOL)isPresentedOnFollowingDay;
-(NSString *)badgeShapeName;
-(NSPredicate *)baseAlertabilityPredicate;
-(void)setBaseAlertabilityPredicate:(NSPredicate *)arg1 ;
-(NSString *)expressionFormatForEarnedValue;
-(NSDate *)availableStartDateUTC;
-(NSDate *)availableEndDateUTC;
-(NSPredicate *)unearnedVisibilityPredicate;
-(unsigned long long)deduplicationStrategy;
-(BOOL)equalityRequiresSameValue;
-(unsigned long long)calendarUnitForEqualityCheck;
-(long long)compareDisplayOrderOfDefinition:(id)arg1 ;
-(unsigned long long)triggers;
-(BOOL)isWorkoutAchievement;
-(NSExpression *)expressionForEarnedValue;
-(NSString *)keyPathForEarnedDate;
-(NSDate *)alertDateUTC;
-(NSPredicate *)alertabilityPredicate;
-(void)setTriggers:(unsigned long long)arg1 ;
@end
