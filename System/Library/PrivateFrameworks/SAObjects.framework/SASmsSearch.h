/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString, NSNumber, NSArray, SASmsGroupName;

@interface SASmsSearch : SADomainCommand

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * recipients; 
@property (nonatomic,copy) NSArray * senders; 
@property (nonatomic,retain) SASmsGroupName * smsGroup; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSNumber * unread; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)start;
-(void)setStart:(NSDate *)arg1 ;
-(NSDate *)end;
-(void)setEnd:(NSDate *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SASmsGroupName *)smsGroup;
-(void)setSmsGroup:(SASmsGroupName *)arg1 ;
-(NSNumber *)unread;
-(void)setUnread:(NSNumber *)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(void)setSenders:(NSArray *)arg1 ;
-(NSArray *)senders;
-(NSNumber *)outgoing;
@end
