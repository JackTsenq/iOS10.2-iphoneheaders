/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSSQLiteDatabase, ExternalDownloadState, DownloadPipeline, DownloadPolicyManager;

@interface DownloadsSessionDescriptor : NSObject <NSCopying> {

	SSSQLiteDatabase* _database;
	ExternalDownloadState* _externalState;
	DownloadPipeline* _pipeline;
	DownloadPolicyManager* _policyManager;

}

@property (nonatomic,retain) SSSQLiteDatabase * database;                        //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) ExternalDownloadState * externalState;              //@synthesize externalState=_externalState - In the implementation block
@property (nonatomic,retain) DownloadPipeline * pipeline;                        //@synthesize pipeline=_pipeline - In the implementation block
@property (nonatomic,retain) DownloadPolicyManager * policyManager;              //@synthesize policyManager=_policyManager - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(DownloadPolicyManager *)policyManager;
-(ExternalDownloadState *)externalState;
-(void)setExternalState:(ExternalDownloadState *)arg1 ;
-(void)setPolicyManager:(DownloadPolicyManager *)arg1 ;
-(SSSQLiteDatabase *)database;
-(void)setDatabase:(SSSQLiteDatabase *)arg1 ;
-(void)setPipeline:(DownloadPipeline *)arg1 ;
-(DownloadPipeline *)pipeline;
@end

