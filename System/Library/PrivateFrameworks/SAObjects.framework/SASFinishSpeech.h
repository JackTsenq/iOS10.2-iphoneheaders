/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * endpoint; 
@property (nonatomic,copy) NSArray * orderedContext; 
@property (assign,nonatomic) long long packetCount; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)finishSpeech;
+(id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)endpoint;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setEndpoint:(NSString *)arg1 ;
-(NSArray *)orderedContext;
-(void)setOrderedContext:(NSArray *)arg1 ;
-(long long)packetCount;
-(void)setPacketCount:(long long)arg1 ;
@end

