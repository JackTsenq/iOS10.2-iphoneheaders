/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, FCDateRange;

@interface FCFeedEdition : NSObject <NSCopying> {

	NSDate* _keyDate;
	FCDateRange* _feedDateRange;

}

@property (nonatomic,copy) NSDate * keyDate;                         //@synthesize keyDate=_keyDate - In the implementation block
@property (nonatomic,copy) FCDateRange * feedDateRange;              //@synthesize feedDateRange=_feedDateRange - In the implementation block
+(id)editionWithKeyDate:(id)arg1 feedDateRange:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKeyDate:(id)arg1 feedDateRange:(id)arg2 ;
-(NSDate *)keyDate;
-(FCDateRange *)feedDateRange;
-(void)setKeyDate:(NSDate *)arg1 ;
-(void)setFeedDateRange:(FCDateRange *)arg1 ;
@end

