/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ABLE/ABLEMockCDAttributeProtocol.h>

@class NSArray;

@interface ABLEMockCDAttributeWithData : NSObject <ABLEMockCDAttributeProtocol> {

	NSArray* _data;

}

@property (retain) NSArray * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(id)initWithTable:(id)arg1 ;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
@end
