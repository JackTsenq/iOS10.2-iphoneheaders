/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSOSDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) unsigned long long numberOfPressesToTrigger; 
@property (nonatomic,readonly) BOOL disablesForAccessibility; 
-(void)setDisablesForAccessibility:(BOOL)arg1 ;
-(BOOL)disablesForAccessibility;
-(void)setNumberOfPressesToTrigger:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPressesToTrigger;
-(void)_bindAndRegisterDefaults;
-(BOOL)hasIndiaConfiguration;
@end
