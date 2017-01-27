/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationProxy, BSCFBundle, NSString, NSURL, NSDictionary, NSUUID;

@interface FBBundleInfo : NSObject {

	LSApplicationProxy* _proxy;
	BSCFBundle* _bundle;
	NSString* _displayName;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _bundleType;
	NSURL* _bundleURL;
	NSDictionary* _extendedInfo;
	unsigned long long _sequenceNumber;
	NSUUID* _cacheGUID;

}

@property (getter=_proxy,nonatomic,retain,readonly) LSApplicationProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (getter=_bundle,nonatomic,retain,readonly) BSCFBundle * bundle; 
@property (nonatomic,copy) NSString * displayName;                                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                         //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleType;                                            //@synthesize bundleType=_bundleType - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                              //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSDictionary * extendedInfo;                                      //@synthesize extendedInfo=_extendedInfo - In the implementation block
@property (assign,nonatomic) unsigned long long sequenceNumber;                              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain) NSUUID * cacheGUID;                                             //@synthesize cacheGUID=_cacheGUID - In the implementation block
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSString *)displayName;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)sequenceNumber;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)_proxy;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(id)_bundle;
-(void)_purgeBundle;
-(void)setExtendedInfo:(NSDictionary *)arg1 ;
-(NSUUID *)cacheGUID;
-(id)_initWithBundleURL:(id)arg1 ;
-(id)extendedInfoValueForKey:(id)arg1 ;
-(void)setBundleType:(NSString *)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(NSDictionary *)extendedInfo;
-(void)setCacheGUID:(NSUUID *)arg1 ;
-(NSString *)bundleType;
@end
