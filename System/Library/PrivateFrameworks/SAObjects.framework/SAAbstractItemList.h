/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:46 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber;

@interface SAAbstractItemList : SADomainObject

@property (nonatomic,copy) NSArray * domainObjects; 
@property (nonatomic,copy) NSNumber * selectedIndex; 
+(id)abstractItemList;
+(id)abstractItemListWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)selectedIndex;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)domainObjects;
-(void)setDomainObjects:(NSArray *)arg1 ;
@end

