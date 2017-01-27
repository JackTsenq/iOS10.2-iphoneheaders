/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class _UICache, CUICatalog, NSString, NSBundle, NSMapTable, CUIMutableCatalog, UITraitCollection;

@interface _UIAssetManager : NSObject {

	_UICache* _imageCache;
	CUICatalog* _catalog;
	NSString* _assetManagerName;
	long long _preferredIdiom;
	double _preferredScale;
	unsigned long long _preferredIdiomSubtype;
	long long _preferredGamut;
	long long _preferredLayoutDirectionTrait;
	NSBundle* _bundle;
	NSMapTable* _assetMap;
	CUIMutableCatalog* _runtimeCatalog;
	long long onceToken_runtimeCatalog;
	UITraitCollection* _preferredTraitCollection;
	_UIAssetManager* _starkAssetManager;
	long long _starkAssetManagerOnceToken;
	BOOL _isStarkAssetManager;
	BOOL _isStandaloneAssetManager;
	os_unfair_lock_s _assetMapLock;
	BOOL _managingUIKitAssets;
	_UIAssetManager* _nextAssetManager;

}

@property (nonatomic,retain) _UIAssetManager * nextAssetManager;                                  //@synthesize nextAssetManager=_nextAssetManager - In the implementation block
@property (assign,nonatomic) double preferredScale;                                               //@synthesize preferredScale=_preferredScale - In the implementation block
@property (nonatomic,retain) UITraitCollection * preferredTraitCollection;                        //@synthesize preferredTraitCollection=_preferredTraitCollection - In the implementation block
@property (nonatomic,readonly) NSString * carFileName; 
@property (nonatomic,readonly) CUIMutableCatalog * runtimeCatalog; 
@property (nonatomic,readonly) NSBundle * bundle;                                                 //@synthesize bundle=_bundle - In the implementation block
@property (getter=_managingUIKitAssets,nonatomic,readonly) BOOL managingUIKitAssets;              //@synthesize managingUIKitAssets=_managingUIKitAssets - In the implementation block
+(id)assetManagerForBundle:(id)arg1 ;
+(id)newAssetNamed:(id)arg1 fromBundle:(id)arg2 ;
+(void)_dropResourceReferencesForURL:(id)arg1 ;
+(BOOL)validStackImageFile:(id)arg1 ;
+(BOOL)_validStackImageData:(id)arg1 ;
+(long long)_userInterfaceIdiomForDeviceClass:(unsigned long long)arg1 ;
+(double)_watchScreenScale;
+(void)_saveAssetManager:(id)arg1 forBundle:(id)arg2 lock:(BOOL)arg3 ;
+(id)_assetManagerCache;
+(void)_convertTraitCollection:(id)arg1 toCUIScale:(double*)arg2 CUIIdiom:(long long*)arg3 UIKitIdiom:(long long*)arg4 UIKitUserInterfaceStyle:(long long*)arg5 subtype:(long long*)arg6 CUIDisplayGamut:(long long*)arg7 UIKitLayoutDirection:(long long*)arg8 CUILayoutDirection:(unsigned long long*)arg9 ;
+(id)sharedRuntimeAssetMap;
+(id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 inAssetManager:(id)arg2 ;
+(id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 fromFilesInBundle:(id)arg2 ;
+(id)sharedRuntimeCatalog;
+(void)clearSharedRuntimeAssetMapForUnitTests;
-(void)dealloc;
-(id)description;
-(id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3 ;
-(id)initManagerWithoutCatalogWithName:(id)arg1 ;
-(id)imageNamed:(id)arg1 withTrait:(id)arg2 ;
-(id)imageNamed:(id)arg1 ;
-(id)stackImageWithContentsOfFile:(id)arg1 forTraitCollection:(id)arg2 ;
-(id)stackImageWithData:(id)arg1 forTraitCollection:(id)arg2 ;
-(id)dataNamed:(id)arg1 ;
-(void)setPreferredScale:(double)arg1 ;
-(void)setPreferredTraitCollection:(UITraitCollection *)arg1 ;
-(BOOL)_imageBelongsToUIKit:(id)arg1 ;
-(void)setNextAssetManager:(_UIAssetManager *)arg1 ;
-(NSBundle *)bundle;
-(id)_initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3 lock:(BOOL)arg4 allowMissingCatalog:(BOOL)arg5 ;
-(void)_clearCachedResources:(id)arg1 ;
-(void)_disconnectImageAssets;
-(void)disableCacheFlushing;
-(id)imageNamed:(id)arg1 scale:(double)arg2 gamut:(long long)arg3 layoutDirection:(long long)arg4 idiom:(long long)arg5 userInterfaceStyle:(long long)arg6 subtype:(unsigned long long)arg7 cachingOptions:(unsigned long long)arg8 sizeClassPair:(SCD_Struct_UI36)arg9 attachCatalogImage:(BOOL)arg10 ;
-(BOOL)_starkAssetManager;
-(double)preferredScale;
-(UITraitCollection *)preferredTraitCollection;
-(id)_assetForName:(id)arg1 shouldCreateWhenNotPresent:(BOOL)arg2 ;
-(id)imageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4 ;
-(id)imageNamed:(id)arg1 idiom:(long long)arg2 subtype:(unsigned long long)arg3 ;
-(id)imageNamed:(id)arg1 idiom:(long long)arg2 ;
-(id)_assetFromMapForName:(id)arg1 ;
-(id)_assetFromMapForName:(id)arg1 lock:(BOOL)arg2 ;
-(void)_performBlockWithAssetLock:(/*^block*/id)arg1 ;
-(id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 lock:(BOOL)arg3 ;
-(NSString *)carFileName;
-(void)_clearCachedResources;
-(id)initWithURL:(id)arg1 idiom:(long long)arg2 error:(id*)arg3 ;
-(id)_catalog;
-(id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 ;
-(CUIMutableCatalog *)runtimeCatalog;
-(_UIAssetManager *)nextAssetManager;
-(BOOL)_managingUIKitAssets;
@end
