/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:02 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface MBClipsLoader : NSObject {

	BOOL _loading;
	BOOL _showOnlyFavorites;
	NSMutableArray* _clips;
	NSArray* _previousClips;

}

@property (retain) NSMutableArray * clips;                               //@synthesize clips=_clips - In the implementation block
@property (assign,nonatomic) BOOL showOnlyFavorites;                     //@synthesize showOnlyFavorites=_showOnlyFavorites - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;              //@synthesize loading=_loading - In the implementation block
@property (retain) NSArray * previousClips;                              //@synthesize previousClips=_previousClips - In the implementation block
-(BOOL)isLoading;
-(void)stopLoading;
-(void)load;
-(void)setLoading:(BOOL)arg1 ;
-(void)startLoading;
-(void)setClips:(NSMutableArray *)arg1 ;
-(void)setShowOnlyFavorites:(BOOL)arg1 ;
-(NSMutableArray *)clips;
-(void)setPreviousClips:(NSArray *)arg1 ;
-(id)initWithShowOnlyFavorites:(BOOL)arg1 ;
-(BOOL)showOnlyFavorites;
-(NSArray *)previousClips;
@end

