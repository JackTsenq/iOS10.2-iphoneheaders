/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRContainerHelper.h>

@class NSSet, NSString;

@interface BRCDaemonContainerHelper : NSObject <BRContainerHelper> {

	NSSet* _disabledBundleIDs;
	NSSet* _knownBundleIDs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)cloudSyncTCCDisabledForContainerMeta:(id)arg1 ;
-(BOOL)canFetchAllContainersByID;
-(id)fetchAllContainersByIDWithError:(id*)arg1 ;
-(id)fetchContainerForURL:(id)arg1 ;
@end

