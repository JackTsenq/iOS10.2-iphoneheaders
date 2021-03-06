/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSMutableArray;

@interface PerformAutoUpdatesOperation : ISOperation {

	NSMutableArray* _updatesPurchases;
	BOOL _isBackgroundRequest;

}

@property (assign,nonatomic) BOOL isBackgroundRequest;              //@synthesize isBackgroundRequest=_isBackgroundRequest - In the implementation block
-(id)_newUpdateWithStoreItemData:(id)arg1 ;
-(id)_purchaseWithSoftwareUpdate:(id)arg1 ;
-(void)_addUpdatePurchase:(id)arg1 ;
-(void)_scheduleCellularTransitionsAfterTime:(id)arg1 ;
-(void)_createAccountPurchases:(id)arg1 ;
-(void)_modifyPurchaseUpdatesState:(id)arg1 withState:(long long)arg2 ;
-(id)_createJobsWithPurchaseResponse:(id)arg1 ;
-(void)_removeUpdatePurchase:(id)arg1 ;
-(id)_newManifestWithStorePurchaseItems:(id)arg1 accountID:(id)arg2 accountName:(id)arg3 ;
-(id)_purchaseWithSoftwareUpdate:(id)arg1 forApplication:(id)arg2 ;
-(id)_newBackgroundActivityJobWithStartTime:(id)arg1 interval:(double)arg2 ;
-(void)setIsBackgroundRequest:(BOOL)arg1 ;
-(BOOL)isBackgroundRequest;
-(id)init;
-(void)run;
-(id)initWithUpdates:(id)arg1 ;
-(id)_requestProperties;
@end

