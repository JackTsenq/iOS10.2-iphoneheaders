/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPMediaLibraryEntityTranslatingContext.h>

@class MPMediaLibrary, NSArray, NSString;

@interface _MPMediaLibraryEntityTranslationContext : NSObject <MPMediaLibraryEntityTranslatingContext> {

	BOOL _multiQuery;
	MPMediaLibrary* _mediaLibrary;
	NSArray* _allowedItemIdentifiers;
	NSArray* _scopedContainers;
	unsigned long long _filteringOptions;

}

@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;                    //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) NSArray * allowedItemIdentifiers;                 //@synthesize allowedItemIdentifiers=_allowedItemIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * scopedContainers;                       //@synthesize scopedContainers=_scopedContainers - In the implementation block
@property (assign,getter=isMultiQuery,nonatomic) BOOL multiQuery;              //@synthesize multiQuery=_multiQuery - In the implementation block
@property (assign,nonatomic) unsigned long long filteringOptions;              //@synthesize filteringOptions=_filteringOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(unsigned long long)filteringOptions;
-(void)setScopedContainers:(NSArray *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(NSArray *)scopedContainers;
-(void)setAllowedItemIdentifiers:(NSArray *)arg1 ;
-(void)setFilteringOptions:(unsigned long long)arg1 ;
-(void)setMultiQuery:(BOOL)arg1 ;
-(NSArray *)allowedItemIdentifiers;
-(BOOL)isMultiQuery;
@end

