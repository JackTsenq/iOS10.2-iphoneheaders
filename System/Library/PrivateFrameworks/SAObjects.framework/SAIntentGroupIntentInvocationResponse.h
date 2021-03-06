/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray;

@interface SAIntentGroupIntentInvocationResponse : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL backgroundLaunch; 
@property (nonatomic,copy) NSString * launchId; 
@property (nonatomic,copy) NSArray * parameters; 
@property (nonatomic,copy) NSString * utterance; 
+(id)intentInvocationResponse;
+(id)intentInvocationResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)launchId;
-(void)setLaunchId:(NSString *)arg1 ;
-(BOOL)backgroundLaunch;
-(void)setBackgroundLaunch:(BOOL)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
@end

