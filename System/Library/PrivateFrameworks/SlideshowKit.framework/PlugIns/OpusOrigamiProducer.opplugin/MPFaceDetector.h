/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRMarimbaPlayback;
@class MPDocument, NSObject, NSOperationQueue, NSMutableSet, NSLock, NSTimer;

@interface MPFaceDetector : NSObject {

	MPDocument* mDocument;
	NSObject*<MRMarimbaPlayback> mRenderer;
	NSOperationQueue* mDetectionQueue;
	BOOL mIsCancelled;
	NSMutableSet* mPathsInQueue;
	NSLock* mPathQueueLock;
	NSMutableSet* mPlayingSlides;
	NSLock* mPlayingSlidesLock;
	NSLock* mStartStopLock;
	NSTimer* mCheckTimer;

}

@property (nonatomic,retain) MPDocument * document; 
@property (nonatomic,retain) NSObject*<MRMarimbaPlayback> renderer; 
@property (assign,nonatomic) BOOL isCancelled; 
-(void)_removePathToQueue:(id)arg1 ;
-(void)checkPlayingSlides;
-(void)_checkPlayingSlides;
-(void)_addPathToQueue:(id)arg1 ;
-(void)detectFaces:(id)arg1 ;
-(BOOL)_pathIsInQueue:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)suspend;
-(void)stop;
-(void)_start;
-(void)start;
-(BOOL)isCancelled;
-(void)resume;
-(MPDocument *)document;
-(void)setDocument:(MPDocument *)arg1 ;
-(NSObject*<MRMarimbaPlayback>)renderer;
-(void)setIsCancelled:(BOOL)arg1 ;
-(void)_setupTimer;
-(BOOL)suspended;
-(void)setRenderer:(NSObject*<MRMarimbaPlayback>)arg1 ;
@end
