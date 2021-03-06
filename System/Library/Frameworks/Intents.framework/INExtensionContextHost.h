/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/INExtensionContextHosting.h>

@protocol INExtensionContextHostDelegate;
@class NSString;

@interface INExtensionContextHost : NSExtensionContext <INExtensionContextHosting> {

	id<INExtensionContextHostDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<INExtensionContextHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setDelegate:(id<INExtensionContextHostDelegate>)arg1 ;
-(id<INExtensionContextHostDelegate>)delegate;
-(void)extensionContextVendorWantsToCacheImage:(id)arg1 ;
@end

