/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITargetedProxy.h>
#import <UIKit/_UIViewServiceDeputy.h>

@class NSString;

@interface _UIViewServiceViewControllerDeputy : _UITargetedProxy <_UIViewServiceDeputy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)deputyWithViewController:(id)arg1 ;
-(id)invalidate;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
@end
