/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/RadioPlayEventCollection.h>

@class NSString;

@interface RadioMutablePlayEventCollection : RadioPlayEventCollection

@property (nonatomic,copy) NSString * deviceName; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addPlayEvents:(id)arg1 forStationHash:(id)arg2 stationID:(long long)arg3 ;
-(void)addPlayEvents:(id)arg1 forStation:(id)arg2 ;
-(void)setDeviceName:(NSString *)arg1 ;
@end

