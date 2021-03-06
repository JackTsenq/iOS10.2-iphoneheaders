/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICCloudSyncingObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSData, NSDate, ICAttachment;

@interface ICAttachmentPreviewImage : ICCloudSyncingObject {

	NSObject*<OS_dispatch_queue> _fileQueue;
	long long _fileQueueOnceToken;
	unsigned long long _imageID;

}

@property (nonatomic,retain) NSData * encryptedMetadata; 
@property (nonatomic,retain) NSData * cryptoMetadataInitializationVector; 
@property (nonatomic,retain) NSData * cryptoMetadataTag; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) short version; 
@property (assign,nonatomic) BOOL versionOutOfDate; 
@property (nonatomic,retain) NSDate * modifiedDate; 
@property (nonatomic,retain) ICAttachment * attachment; 
@property (assign,nonatomic) BOOL scaleWhenDrawing; 
@property (nonatomic,retain) NSData * metadata; 
+(id)imageCache;
+(void)purgeAllAttachmentPreviewImagesInContext:(id)arg1 ;
+(void)purgeAllPreviewImageFiles;
+(void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg1 ;
+(UIImage*)orientedImage:(UIImage*)arg1 withTransform:(CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(CGAffineTransform)arg4 ;
+(id)previewImageDirectoryURL;
+(id)previewImageURLsForIdentifier:(id)arg1 ;
+(id)fileGlobalQueue;
+(id)fileQueueGroup;
+(id)concurrentFileLoadLimitSemaphore;
+(void)purgePreviewImageFilesForIdentifiers:(id)arg1 ;
+(void)waitUntilAllFileWritesAreFinished;
+(id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4 ;
+(id)allAttachmentPreviewImagesInContext:(id)arg1 ;
+(id)attachmentPreviewImagesMatchingPredicate:(id)arg1 inContext:(id)arg2 ;
+(id)newAttachmentPreviewImageInContext:(id)arg1 ;
+(id)attachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2 ;
+(id)attachmentPreviewImageIdentifiersForAccount:(id)arg1 ;
+(id)visibleAttachmentPreviewImagesInContext:(id)arg1 ;
-(CGSize)size;
-(UIImage*)image;
-(NSData *)metadata;
-(void)setMetadata:(NSData *)arg1 ;
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
-(void)prepareForDeletion;
-(id)ic_loggingValues;
-(void)deleteFromLocalDatabase;
-(UIImage*)orientedImage;
-(void)saveAndClearDecryptedData;
-(BOOL)needsInitialFetchFromCloud;
-(id)parentEncryptableObject;
-(void)invalidateOrientedImage;
-(void)setImage:(UIImage*)arg1 withScale:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)orientedImageID;
-(id)previewImageURL;
-(void)removeItemAtURL:(id)arg1 ;
-(id)encryptedPreviewImageURL;
-(void)setCachedOrientedImage:(UIImage*)arg1 ;
-(id)orientedPreviewImageURLCreateIfNeeded:(BOOL)arg1 ;
-(void)setCachedImage:(UIImage*)arg1 ;
-(UIImage*)cachedOrientedImage;
-(long long)previewImageOrientation;
-(CGAffineTransform)orientedImageTransform;
-(id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1 asyncDataLoading:(BOOL)arg2 ;
-(UIImage*)cachedImage;
-(id)oldPreviewImageURL;
-(id)decryptedImageData;
-(id)fileQueue;
-(/*^block*/id)asyncImage:(/*^block*/id)arg1 aboutToLoadHandler:(/*^block*/id)arg2 ;
-(void)invalidateImage;
-(BOOL)makeSurePreviewImageDirectoryExists:(id*)arg1 ;
-(BOOL)writeEncryptedImageFromData:(id)arg1 ;
-(void)updateFlagToExcludeFromBackup;
-(UIImage*)orientedImageWithBackground:(int)arg1 ;
-(void)updateFlagToExcludeFromBackupForURL:(id)arg1 touchFileIfNecessary:(BOOL)arg2 ;
-(BOOL)isSketch;
-(BOOL)isMap;
-(void)updateFlagToExcludeFromBackupTouchFileIfNecessary:(BOOL)arg1 ;
-(BOOL)_writeEncryptedImageFromData:(id)arg1 ;
-(id)_decryptedImageData;
-(UIImage*)imageWithBackground:(int)arg1 ;
-(id)newImageLoaderForUpdatingImageOnCompletion:(BOOL)arg1 ;
-(BOOL)imageIsValid;
-(void)saveScaledImageFromImageSrc:(CGImageSourceRef)arg1 completion:(/*^block*/id)arg2 ;
-(id)orientedPreviewImageURL;
-(BOOL)shouldSyncToCloud;
-(BOOL)needsToBePushedToCloud;
-(BOOL)needsToBeDeletedFromCloud;
-(BOOL)needsToBeFetchedFromCloud;
-(void)invalidateCache;
@end

