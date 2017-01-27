/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSFormAutoFillFeedbackProcessor.h>

@protocol WBSParsecGlobalFeedbackDispatcher, WBSFormAutoFillFeedbackDomainPolicyProvider;
@class NSString;

@interface WBSFormAutoFillParsecFeedbackProcessor : NSObject <WBSFormAutoFillFeedbackProcessor> {

	id<WBSParsecGlobalFeedbackDispatcher> _globalFeedbackDispatcher;
	unsigned long long _autoFillVersion;
	id<WBSFormAutoFillFeedbackDomainPolicyProvider> _domainPolicyProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<WBSFormAutoFillFeedbackDomainPolicyProvider> domainPolicyProvider;              //@synthesize domainPolicyProvider=_domainPolicyProvider - In the implementation block
-(id)init;
-(void)sendFeedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 ;
-(void)_getFeedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_feedbackWithCorrections:(id)arg1 forFingerprint:(id)arg2 onDomain:(id)arg3 includeOrigin:(BOOL)arg4 ;
-(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)domainPolicyProvider;
-(void)setDomainPolicyProvider:(id<WBSFormAutoFillFeedbackDomainPolicyProvider>)arg1 ;
-(id)initWithGlobalFeedbackDispatcher:(id)arg1 domainPolicyProvider:(id)arg2 autoFillVersion:(unsigned long long)arg3 ;
@end
