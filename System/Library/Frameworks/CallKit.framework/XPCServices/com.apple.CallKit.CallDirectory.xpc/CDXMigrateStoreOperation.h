/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectory.xpc/com.apple.CallKit.CallDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CXCallDirectoryExtensionManager;

@interface CDXMigrateStoreOperation : NSObject {

	CXCallDirectoryExtensionManager* _extensionManager;

}

@property (nonatomic,retain) CXCallDirectoryExtensionManager * extensionManager;              //@synthesize extensionManager=_extensionManager - In the implementation block
-(BOOL)performWithError:(id*)arg1 ;
-(BOOL)disableAllExtensionsWithError:(id*)arg1 ;
-(BOOL)synchronizeExtensionsWithError:(id*)arg1 ;
-(id)extensionsWithError:(id*)arg1 ;
-(CXCallDirectoryExtensionManager *)extensionManager;
-(void)setExtensionManager:(CXCallDirectoryExtensionManager *)arg1 ;
-(id)init;
@end
