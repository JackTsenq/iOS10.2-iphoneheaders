/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class KNPlaybackSession;

@interface KNAnimationAnalyticsLogger : NSObject {

	KNPlaybackSession* _session;
	BOOL _isShowcast;

}

@property (nonatomic,readonly) BOOL isShowcast;                      //@synthesize isShowcast=_isShowcast - In the implementation block
@property (nonatomic,readonly) BOOL shouldLogAnalytics; 
+(BOOL)logAnalyticsWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2 ;
-(id)initWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2 ;
-(BOOL)logAnalytics;
-(BOOL)shouldLogAnalytics;
-(void)p_logAnimationAnalyticsValue:(long long)arg1 forKey:(id)arg2 isDistribution:(BOOL)arg3 aslmsg:(asl_object_sRef)arg4 ;
-(BOOL)isShowcast;
-(id)init;
-(void)dealloc;
@end
