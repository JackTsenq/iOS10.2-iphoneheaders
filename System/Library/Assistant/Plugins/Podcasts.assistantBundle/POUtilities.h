/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface POUtilities : NSObject
+(BOOL)isPodcastsNowPlaying;
+(void)setPlaybackRate:(float)arg1 failureErrorCode:(long long)arg2 completion:(/*^block*/id)arg3 ;
+(void)performPodcastsPlaybackRequest:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)UUIDFromDomainObject:(id)arg1 ;
@end

