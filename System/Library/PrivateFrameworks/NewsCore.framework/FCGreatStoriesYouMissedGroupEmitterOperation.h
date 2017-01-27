/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:16 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@interface FCGreatStoriesYouMissedGroupEmitterOperation : FCFeedGroupEmittingOperation {

	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)performOperation;
-(id)initWithContext:(id)arg1 cursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 ;
-(id)_feedTransformation;
-(id)initWithContext:(id)arg1 cursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 limit:(unsigned long long)arg5 ;
@end
