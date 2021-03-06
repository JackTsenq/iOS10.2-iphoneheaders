/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:43 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>

@protocol CNCancelable;
@class NSMutableArray, AFWatchdogTimer, NSString;

@interface CFCNAutoCompleteFetchDelelegate : NSObject <CNAutocompleteFetchDelegate> {

	/*^block*/id _serviceHelperCompletion;
	id<CNCancelable> _fetchCancelable;
	NSMutableArray* _results;
	AFWatchdogTimer* _watchDogTimer;

}

@property (retain) AFWatchdogTimer * watchDogTimer;                         //@synthesize watchDogTimer=_watchDogTimer - In the implementation block
@property (copy) id serviceHelperCompletion;                                //@synthesize serviceHelperCompletion=_serviceHelperCompletion - In the implementation block
@property (nonatomic,retain) id<CNCancelable> fetchCancelable;              //@synthesize fetchCancelable=_fetchCancelable - In the implementation block
@property (retain) NSMutableArray * results;                                //@synthesize results=_results - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDelegateWithServiceHelperCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(id)serviceHelperCompletion;
-(AFWatchdogTimer *)watchDogTimer;
-(id)autoCompleteSourceTypeForResult:(id)arg1 ;
-(id)autoCompleteResultAdddressTypeForResultValue:(id)arg1 ;
-(void)setFetchCancelable:(id<CNCancelable>)arg1 ;
-(void)setWatchDogTimer:(AFWatchdogTimer *)arg1 ;
-(id<CNCancelable>)fetchCancelable;
-(void)setServiceHelperCompletion:(id)arg1 ;
@end

