/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:34 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLFileUtilities : NSObject
+(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasDiskSpaceToCopyFileAtURL:(id)arg1 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
+(BOOL)_moveItemAtURL:(id)arg1 toURL:(id)arg2 securely:(BOOL)arg3 error:(id*)arg4 ;
+(id)_mobileOwnerAttributes;
+(BOOL)createDirectoryAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(BOOL)changeFileOwnerToMobileAtPath:(id)arg1 error:(id*)arg2 usingFileManager:(id)arg3 ;
+(id)realPathForPath:(id)arg1 error:(id*)arg2 ;
+(BOOL)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id*)arg3 ;
+(BOOL)filePath:(id)arg1 hasPrefix:(id)arg2 ;
+(id)fileManager;
@end
