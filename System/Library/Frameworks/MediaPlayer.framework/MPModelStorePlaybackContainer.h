/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelObject.h>
#import <libobjc.A.dylib/MPModelPlayEventProviding.h>

@class MPModelAlbum, MPModelPlaylist, NSString;

@interface MPModelStorePlaybackContainer : MPModelObject <MPModelPlayEventProviding> {

	unsigned long long _containerType;
	MPModelAlbum* _album;
	MPModelPlaylist* _playlist;

}

@property (assign,nonatomic) unsigned long long containerType;              //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,retain) MPModelAlbum * album;                          //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) MPModelPlaylist * playlist;                    //@synthesize playlist=_playlist - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsKeepLocalStatusObservation;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)__album__KEY;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)__containerType__KEY;
+(id)__MPModelPropertyStorePlaybackContainerContainerType__PROPERTY;
+(id)__MPModelRelationshipStorePlaybackContainerAlbum__PROPERTY;
+(id)__playlist__KEY;
+(id)__MPModelRelationshipStorePlaybackContainerPlaylist__PROPERTY;
+(BOOL)supportsLibraryAddStatusObservation;
+(id)playEventRequestedPropertiesWithAdditionalProperties:(id)arg1 ;
-(id)descriptionWithType:(long long)arg1 ;
-(void)setPlaylist:(MPModelPlaylist *)arg1 ;
-(unsigned long long)containerType;
-(MPLibraryAddStatusObserverConfiguration)libraryAddStatusObserverConfiguration;
-(MPModelPlaylist *)playlist;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)playEvent;
-(void)setContainerType:(unsigned long long)arg1 ;
-(MPModelAlbum *)album;
-(void)setAlbum:(MPModelAlbum *)arg1 ;
@end

