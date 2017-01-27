/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:34:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSArray;

@interface SSVPlaybackItem : NSObject {

	NSDictionary* _itemDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * itemDictionary;              //@synthesize itemDictionary=_itemDictionary - In the implementation block
@property (nonatomic,copy,readonly) id itemIdentifier; 
@property (nonatomic,readonly) NSArray * assets; 
-(void)_enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)assetForFlavor:(id)arg1 ;
-(NSDictionary *)itemDictionary;
-(id)initWithItemDictionary:(id)arg1 ;
-(id)itemIdentifier;
-(NSArray *)assets;
@end
