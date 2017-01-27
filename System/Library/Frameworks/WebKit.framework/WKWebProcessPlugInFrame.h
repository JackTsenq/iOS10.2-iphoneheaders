/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, NSArray, _WKFrameHandle, NSString;

@interface WKWebProcessPlugInFrame : NSObject <WKObject> {

	ObjectStorage<WebKit::WebFrame> _frame;

}

@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * childFrames; 
@property (nonatomic,readonly) BOOL containsAnyFormElements; 
@property (nonatomic,readonly) _WKFrameHandle * handle; 
@property (nonatomic,readonly) NSArray * appleTouchIconURLs; 
@property (nonatomic,readonly) NSArray * faviconURLs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)lookUpFrameFromHandle:(id)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(id)hitTest:(CGPoint)arg1 ;
-(NSArray *)childFrames;
-(Object*)_apiObject;
-(id)_browserContextController;
-(BOOL)containsAnyFormElements;
-(id)_parentFrame;
-(id)_certificateChain;
-(SecTrustRef)_serverTrust;
-(id)jsContextForWorld:(id)arg1 ;
-(NSArray *)appleTouchIconURLs;
-(NSArray *)faviconURLs;
-(_WKFrameHandle *)handle;
-(BOOL)_hasCustomContentProvider;
-(id)_provisionalURL;
-(id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2 ;
@end
