/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXVerifierDelegate;
#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
@class NSMutableArray, GAXVerificationEventObject;

@interface GAXVerifier : NSObject {

	BOOL _isProcessingEventQueue;
	id<GAXVerifierDelegate> _delegate;
	unsigned long long _mostRecentOutcome;
	NSMutableArray* _verifyQueue;
	GAXVerificationEventObject* _currentVerificationEvent;
	long long _sessionAppCheckinAttempts;

}

@property (nonatomic,retain) NSMutableArray * verifyQueue;                                       //@synthesize verifyQueue=_verifyQueue - In the implementation block
@property (nonatomic,retain) GAXVerificationEventObject * currentVerificationEvent;              //@synthesize currentVerificationEvent=_currentVerificationEvent - In the implementation block
@property (assign,nonatomic) unsigned long long mostRecentOutcome;                               //@synthesize mostRecentOutcome=_mostRecentOutcome - In the implementation block
@property (assign,nonatomic) long long sessionAppCheckinAttempts;                                //@synthesize sessionAppCheckinAttempts=_sessionAppCheckinAttempts - In the implementation block
@property (assign,nonatomic) id<GAXVerifierDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isVerifyingIntegrity; 
-(void)setSessionAppCheckinAttempts:(long long)arg1 ;
-(void)setMostRecentOutcome:(unsigned long long)arg1 ;
-(long long)sessionAppCheckinAttempts;
-(BOOL)isVerifyingIntegrity;
-(unsigned long long)mostRecentOutcome;
-(void)verifyIntegrityWithEvent:(unsigned long long)arg1 ;
-(void)springBoardDidRelaunch;
-(id)displayStringForOutcome:(unsigned long long)arg1 ;
-(GAXVerificationEventObject *)currentVerificationEvent;
-(void)_processNextEventInQueue;
-(void)setCurrentVerificationEvent:(GAXVerificationEventObject *)arg1 ;
-(void)_beginProcessingEventsIfNeeded;
-(void)didFinishAppLaunchAttemptWithConfiguration:(unsigned)arg1 errorMessage:(id)arg2 ;
-(void)setVerifyQueue:(NSMutableArray *)arg1 ;
-(NSMutableArray *)verifyQueue;
-(void)verifyIntegrityWithEvent:(unsigned long long)arg1 afterDelay:(double)arg2 ;
-(void)_didFinishVerifyingCurrentEventWithOutcome:(unsigned long long)arg1 error:(id)arg2 ;
-(void)_verifyWithEventObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_shouldAttemptLaunchOfSessionAppWithEvent:(unsigned long long)arg1 gaxState:(SCD_Struct_GA1)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldForceAppRelaunchWithVerifyEvent:(unsigned long long)arg1 ;
-(BOOL)_appWithIdentifierIsInstalledOnDevice:(id)arg1 ;
-(void)outcome:(unsigned long long)arg1 isError:(BOOL*)arg2 isIndeterminate:(BOOL*)arg3 ;
-(id)init;
-(void)setDelegate:(id<GAXVerifierDelegate>)arg1 ;
-(void)dealloc;
-(id<GAXVerifierDelegate>)delegate;
@end

