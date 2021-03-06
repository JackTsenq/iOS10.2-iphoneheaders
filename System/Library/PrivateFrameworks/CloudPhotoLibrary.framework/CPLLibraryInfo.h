/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, CPLFeatureVersionHistory, NSData;

@interface CPLLibraryInfo : NSObject {

	NSDictionary* _assetCounts;
	CPLFeatureVersionHistory* _featureVersionHistory;
	NSData* _lastKnownSyncAnchor;

}

@property (nonatomic,copy) NSDictionary * assetCounts;                                      //@synthesize assetCounts=_assetCounts - In the implementation block
@property (nonatomic,retain) CPLFeatureVersionHistory * featureVersionHistory;              //@synthesize featureVersionHistory=_featureVersionHistory - In the implementation block
@property (nonatomic,copy) NSData * lastKnownSyncAnchor;                                    //@synthesize lastKnownSyncAnchor=_lastKnownSyncAnchor - In the implementation block
-(NSDictionary *)assetCounts;
-(NSData *)lastKnownSyncAnchor;
-(id)prettyDescriptionWithAnchorDesciptionBlock:(/*^block*/id)arg1 ;
-(void)setAssetCounts:(NSDictionary *)arg1 ;
-(CPLFeatureVersionHistory *)featureVersionHistory;
-(void)setFeatureVersionHistory:(CPLFeatureVersionHistory *)arg1 ;
-(void)setLastKnownSyncAnchor:(NSData *)arg1 ;
@end

