/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IPFeatureManager : NSObject
+(void)setEventStoreForTesting:(id)arg1 ;
+(id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 ;
+(void)scanEventsInMessageUnits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

