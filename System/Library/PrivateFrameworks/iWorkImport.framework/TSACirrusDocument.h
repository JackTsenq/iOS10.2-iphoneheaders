/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObjectContextDelegate.h>

@class TSUTemporaryDirectory, TSPObjectContext, NSString, NSURL, TSADocumentRoot, NSDictionary, NSUUID;

@interface TSACirrusDocument : NSObject <TSPObjectContextDelegate> {

	BOOL _isClosed;
	TSUTemporaryDirectory* _tempDirForSupport;
	TSPObjectContext* _context;
	NSString* _documentPasswordHint;
	NSURL* _fileURL;

}

@property (nonatomic,retain) TSPObjectContext * context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * documentPasswordHint;                                         //@synthesize documentPasswordHint=_documentPasswordHint - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                                             //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) TSADocumentRoot * documentRoot; 
@property (nonatomic,readonly) BOOL skipDocumentUpgrade; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NSFilePresenter> filePresenter; 
@property (nonatomic,readonly) BOOL ignoreDocumentSupport; 
@property (nonatomic,readonly) BOOL isDocumentSupportTemporary; 
@property (nonatomic,readonly) NSDictionary * additionalDocumentPropertiesForWrite; 
@property (nonatomic,readonly) NSDictionary * additionalDocumentSupportPropertiesForWrite; 
@property (nonatomic,readonly) BOOL areNewExternalReferencesToDataAllowed; 
@property (nonatomic,readonly) NSUUID * baseUUIDForObjectUUID; 
-(id)documentPasswordHintForWrite;
-(id)supportDirectoryURL;
-(NSString *)documentPasswordHint;
-(void)presentPersistenceError:(id)arg1 ;
-(void)documentDidLoad;
-(id)documentCachePath;
-(id)initWithURL:(id)arg1 appDocumentResourcesURL:(id)arg2 appDocumentResourcesMetadataURL:(id)arg3 registry:(id)arg4 error:(id*)arg5 passphrase:(id)arg6 ;
-(BOOL)skipDocumentUpgrade;
-(void)dealloc;
-(id)name;
-(TSPObjectContext *)context;
-(void)close;
-(void)setContext:(TSPObjectContext *)arg1 ;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(TSADocumentRoot *)documentRoot;
@end
