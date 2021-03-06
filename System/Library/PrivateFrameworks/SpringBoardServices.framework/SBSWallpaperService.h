/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SBSWallpaperClient, NSObject;

@interface SBSWallpaperService : NSObject {

	SBSWallpaperClient* _client;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _wasInvalidated;

}
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

