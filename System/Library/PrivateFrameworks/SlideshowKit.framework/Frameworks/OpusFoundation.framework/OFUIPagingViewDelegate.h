/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OFUIPagingViewDelegate <NSObject>
@optional
-(void)currentPageDidChangeInPagingView:(id)arg1;
-(void)pagesDidChangeInPagingView:(id)arg1;
-(void)pagingViewWillBeginMoving:(id)arg1;
-(void)pagingViewDidEndMoving:(id)arg1;

@required
-(long long)numberOfPagesInPagingView:(id)arg1;
-(id)viewForPageInPagingView:(id)arg1 atIndex:(long long)arg2;

@end

