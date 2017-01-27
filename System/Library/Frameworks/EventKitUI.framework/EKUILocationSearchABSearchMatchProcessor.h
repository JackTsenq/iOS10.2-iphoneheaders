/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSTimer;

@interface EKUILocationSearchABSearchMatchProcessor : NSObject {

	NSMutableArray* _matchesToProcess;
	NSMutableArray* _processedMatches;
	/*^block*/id _completion;
	unsigned long long _currentIndex;
	NSTimer* _timer;

}

@property (nonatomic,retain) NSMutableArray * matchesToProcess;              //@synthesize matchesToProcess=_matchesToProcess - In the implementation block
@property (nonatomic,retain) NSMutableArray * processedMatches;              //@synthesize processedMatches=_processedMatches - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                //@synthesize currentIndex=_currentIndex - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                //@synthesize timer=_timer - In the implementation block
-(void)cancel;
-(void)_reset;
-(unsigned long long)currentIndex;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)addMatchesToProcess:(id)arg1 ;
-(NSMutableArray *)matchesToProcess;
-(void)setMatchesToProcess:(NSMutableArray *)arg1 ;
-(void)_scheduleWithDelay:(double)arg1 ;
-(void)_finishedProcessing;
-(void)_processResultAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)processedMatches;
-(void)setProcessedMatches:(NSMutableArray *)arg1 ;
-(void)_processResults;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
@end
