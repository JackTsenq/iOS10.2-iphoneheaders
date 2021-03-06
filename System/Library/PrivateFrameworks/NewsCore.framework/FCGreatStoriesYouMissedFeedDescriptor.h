/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedDescriptor.h>
#import <libobjc.A.dylib/FCFeedPaginating.h>

@class NSString;

@interface FCGreatStoriesYouMissedFeedDescriptor : FCFeedDescriptor <FCFeedPaginating> {

	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setupDebug;
+(void)tearDownDebug;
-(id)name;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(id)feedGroupEmitters;
-(id)feedPaginator;
-(id)editionAtDate:(id)arg1 ;
-(id)editionFollowingEdition:(id)arg1 ;
@end

