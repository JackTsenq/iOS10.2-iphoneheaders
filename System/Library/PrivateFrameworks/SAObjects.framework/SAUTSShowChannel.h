/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUTSTvChannel;

@interface SAUTSShowChannel : SABaseClientBoundCommand

@property (nonatomic,retain) SAUTSTvChannel * channel; 
+(id)showChannel;
+(id)showChannelWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setChannel:(SAUTSTvChannel *)arg1 ;
-(SAUTSTvChannel *)channel;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
