/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:51 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class NSString, NSData, EKPersistentCalendarItem;

@interface EKPersistentEventAction : EKPersistentObject

@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModTag; 
@property (nonatomic,copy) NSString * externalFolderID; 
@property (nonatomic,copy) NSString * externalScheduleID; 
@property (nonatomic,copy) NSData * externalData; 
@property (nonatomic,retain) EKPersistentCalendarItem * owner; 
+(id)relations;
-(EKPersistentCalendarItem *)owner;
-(void)setOwner:(EKPersistentCalendarItem *)arg1 ;
-(NSString *)externalFolderID;
-(void)setExternalFolderID:(NSString *)arg1 ;
-(NSString *)externalScheduleID;
-(void)setExternalScheduleID:(NSString *)arg1 ;
-(NSString *)externalModTag;
-(void)setExternalModTag:(NSString *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(int)entityType;
-(NSData *)externalData;
-(void)setExternalData:(NSData *)arg1 ;
@end

