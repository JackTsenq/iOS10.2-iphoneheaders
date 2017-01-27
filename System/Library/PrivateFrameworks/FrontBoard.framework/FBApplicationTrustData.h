/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBApplicationInfo, NSArray, NSObject;

@interface FBApplicationTrustData : NSObject {

	FBApplicationInfo* _appInfo;
	BOOL _hasUniversalProvisioningProfile;
	BOOL _hasFreeDeveloperProvisioningProfile;
	BOOL _isManaged;
	NSArray* _provisioningProfiles;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,readonly) NSArray * profiles;              //@synthesize provisioningProfiles=_provisioningProfiles - In the implementation block
-(void)dealloc;
-(void)acknowledgeTrust;
-(unsigned long long)trustState;
-(id)_initWithApplicationInfo:(id)arg1 andProvisioningProfiles:(id)arg2 isManaged:(BOOL)arg3 ;
-(void)_initializeProfiles:(id)arg1 ;
-(void)_acceptApplicationSignatureIdentity;
-(unsigned long long)trustStateWithTrustRequiredReasons:(unsigned long long*)arg1 ;
-(id)_workQueue_expirationDateForProvisioningProfile;
-(BOOL)_workQueue_signatureNeedsExplicitUserTrust;
-(NSArray *)profiles;
@end
