/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <MapsDataClassMigrator/RecentsItem.h>

@class MSPHistoryEntryStorage, NSString, NSData;

@interface SearchRequestHistoryItem : NSObject <NSCopying, RecentsItem> {

	MSPHistoryEntryStorage* _storage;

}

@property (nonatomic,readonly) NSString * displayQuery; 
@property (nonatomic,retain) NSString * locationDisplayString; 
@property (nonatomic,retain) NSString * syncIdentifier; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) double position; 
@property (nonatomic,readonly) MSPHistoryEntryStorage * storage; 
@property (nonatomic,readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)ticketForSource:(int)arg1 ;
-(id)initWithDisplayQuery:(id)arg1 locationDisplayString:(id)arg2 timestamp:(double)arg3 mapRegion:(id)arg4 ;
-(NSString *)displayQuery;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(id)initWithSearchRequestStorage:(id)arg1 ;
-(void)updateWithStorage:(id)arg1 ;
-(MSPHistoryEntryStorage *)storage;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(id)initWithTicket:(id)arg1 ;
-(NSString *)syncIdentifier;
-(void)setLocationDisplayString:(NSString *)arg1 ;
-(NSString *)locationDisplayString;
@end

