/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject
+(BOOL)_phoneNeedsToRun:(unsigned long long*)arg1 ;
+(BOOL)_bridgeNeedsToRun:(unsigned long long*)arg1 ;
+(void)_phonePreflight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_bridgePreflight:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_handlePreflightFinishedWithSuccess:(BOOL)arg1 paymentCredentials:(id)arg2 provisioningController:(id)arg3 completion:(/*^block*/id)arg4 ;
+(void)_bridgeCredentials:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_bridgeContextDefaultLocalCredential;
+(BOOL)setupAssistantNeedsToRun:(unsigned long long)arg1 returningRequirements:(unsigned long long*)arg2 ;
+(void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
@end

