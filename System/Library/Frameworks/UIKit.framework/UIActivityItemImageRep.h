/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIActivityItemImageRep : NSObject {

	id _asset;
	/*^block*/id _thumbnailProvider;
	/*^block*/id _dataProvider;

}

@property (nonatomic,retain) id asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id thumbnailProvider;              //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (nonatomic,copy) id dataProvider;                   //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(/*^block*/id)arg2 dataProvider:(/*^block*/id)arg3 ;
-(id)data;
-(id)asset;
-(id)thumbnail;
-(void)setAsset:(id)arg1 ;
-(void)setThumbnailProvider:(id)arg1 ;
-(void)setDataProvider:(id)arg1 ;
-(id)thumbnailProvider;
-(id)dataProvider;
@end

