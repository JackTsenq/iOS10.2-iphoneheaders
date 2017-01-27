/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptSubscriptionStatusRequest : SUScriptObject {

	BOOL _ignoreCache;
	long long _reason;
	long long _service;
	BOOL _wantsPartialResults;

}

@property (assign) id ignoreCache; 
@property (copy) NSString * reasonName; 
@property (copy) NSString * serviceName; 
@property (assign) id wantsPartialResults; 
@property (readonly) NSString * reasonNameDeepLink; 
@property (readonly) NSString * serviceNameAppleMusic; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)attributeKeys;
-(NSString *)reasonNameDeepLink;
-(NSString *)serviceNameAppleMusic;
-(void)_handleRequestCompletionWithSubscriptionStatus:(id)arg1 isFinal:(BOOL)arg2 scriptCallbackFunction:(id)arg3 ;
-(void)performRequestWithCallbackFunction:(id)arg1 ;
-(id)ignoreCache;
-(NSString *)reasonName;
-(void)setIgnoreCache:(id)arg1 ;
-(void)setReasonName:(NSString *)arg1 ;
-(id)wantsPartialResults;
-(void)setWantsPartialResults:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
@end
