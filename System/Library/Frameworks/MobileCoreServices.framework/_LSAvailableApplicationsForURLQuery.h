/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSQuery.h>

@class NSURL;

@interface _LSAvailableApplicationsForURLQuery : _LSQuery {

	BOOL _legacySPI;
	NSURL* _URL;

}

@property (nonatomic,copy,readonly) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL legacySPI;                //@synthesize legacySPI=_legacySPI - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 legacySPI:(BOOL)arg2 ;
-(BOOL)legacySPI;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_shouldCacheResolvedResults;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
@end
