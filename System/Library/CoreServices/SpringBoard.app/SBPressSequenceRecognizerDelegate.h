/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBPressSequenceRecognizerDelegate <NSObject>
@optional
-(void)pressSequenceRecognizer:(id)arg1 didBeginPressDownAtIndex:(unsigned long long)arg2;
-(void)pressSequenceRecognizerDidFail:(id)arg1;

@required
-(void)pressSequenceRecognizerDidCompleteSequence:(id)arg1;

@end

