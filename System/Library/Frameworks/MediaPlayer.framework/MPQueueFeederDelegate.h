/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPQueueFeederDelegate <NSObject>
@required
-(void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(id)arg3;
-(void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
-(void)queueFeederDidInvalidateAssets:(id)arg1;
-(void)queueFeederDidInvalidateRealRepeatType:(id)arg1;
-(void)queueFeederDidInvalidateRealShuffleType:(id)arg1;

@end
