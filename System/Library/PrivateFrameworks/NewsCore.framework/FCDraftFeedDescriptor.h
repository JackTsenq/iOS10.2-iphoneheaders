/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCArticleIDFeedDescriptor.h>

@class NSString;

@interface FCDraftFeedDescriptor : FCArticleIDFeedDescriptor {

	NSString* _articleListID;
	NSString* _feedName;

}

@property (nonatomic,readonly) NSString * articleListID;              //@synthesize articleListID=_articleListID - In the implementation block
@property (nonatomic,retain) NSString * feedName;                     //@synthesize feedName=_feedName - In the implementation block
-(id)name;
-(id)initWithIdentifier:(id)arg1 articleListID:(id)arg2 name:(id)arg3 ;
-(void)fetchArticleIDsWithContext:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)feedGroupEmitters;
-(long long)feedType;
-(id)streamOfLatestArticleIDsWithContext:(id)arg1 ;
-(NSString *)articleListID;
-(NSString *)feedName;
-(void)setFeedName:(NSString *)arg1 ;
@end
