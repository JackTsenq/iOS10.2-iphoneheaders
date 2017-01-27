/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSURL, WLKArtworkVariantListing;

@interface WLKChannelDetails : NSObject {

	BOOL _subscribed;
	BOOL _itunes;
	BOOL _watchListEnabled;
	BOOL _appInstalled;
	NSString* _channelID;
	NSString* _name;
	NSArray* _appAdamIDs;
	NSArray* _appBundleIDs;
	NSString* _appName;
	NSURL* _appStoreURL;
	WLKArtworkVariantListing* _images;

}

@property (nonatomic,copy,readonly) NSString * channelID;                                    //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appAdamIDs;                                    //@synthesize appAdamIDs=_appAdamIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * appBundleIDs;                                  //@synthesize appBundleIDs=_appBundleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSString * appName;                                      //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appStoreURL;                                     //@synthesize appStoreURL=_appStoreURL - In the implementation block
@property (nonatomic,readonly) WLKArtworkVariantListing * images;                            //@synthesize images=_images - In the implementation block
@property (getter=isSubscribed,nonatomic,readonly) BOOL subscribed;                          //@synthesize subscribed=_subscribed - In the implementation block
@property (getter=isiTunes,nonatomic,readonly) BOOL itunes;                                  //@synthesize itunes=_itunes - In the implementation block
@property (getter=isWatchListEnabled,nonatomic,readonly) BOOL watchListEnabled;              //@synthesize watchListEnabled=_watchListEnabled - In the implementation block
@property (getter=isAppInstalled,nonatomic,readonly) BOOL appInstalled;                      //@synthesize appInstalled=_appInstalled - In the implementation block
-(id)_sirimovies_thirdPartyMediaPunchOutWithPunchoutUrls:(id)arg1 isAppInstalled:(BOOL)arg2 isEntitled:(BOOL)arg3 isContinuing:(BOOL)arg4 isContainerItem:(BOOL)arg5 seasonNumber:(id)arg6 episodeNumber:(id)arg7 ;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(WLKArtworkVariantListing *)images;
-(BOOL)isSubscribed;
-(NSString *)appName;
-(BOOL)isiTunes;
-(NSArray *)appBundleIDs;
-(NSString *)channelID;
-(BOOL)isAppInstalled;
-(NSArray *)appAdamIDs;
-(BOOL)isWatchListEnabled;
-(NSURL *)appStoreURL;
@end
