/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSnippet.h>

@class NSNumber;

@interface SASettingBoolSnippet : SASettingSnippet

@property (assign,nonatomic) BOOL toggle; 
@property (nonatomic,copy) NSNumber * value; 
+(id)boolSnippet;
+(id)boolSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)toggle;
-(void)setToggle:(BOOL)arg1 ;
@end
