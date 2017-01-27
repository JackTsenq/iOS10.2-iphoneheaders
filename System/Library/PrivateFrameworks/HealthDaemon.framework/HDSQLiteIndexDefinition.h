/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HDSQLiteIndexDefinition : NSObject {

	Class _entityClass;
	NSString* _name;
	NSArray* _columns;

}

@property (nonatomic,readonly) Class entityClass;                              //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * disambiguatedName; 
@property (nonatomic,readonly) NSArray * columns;                              //@synthesize columns=_columns - In the implementation block
-(NSString *)name;
-(NSArray *)columns;
-(id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 ;
-(Class)entityClass;
-(id)creationSQL;
-(NSString *)disambiguatedName;
@end
