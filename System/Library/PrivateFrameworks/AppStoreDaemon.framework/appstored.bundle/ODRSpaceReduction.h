/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ODRSpaceReduction : NSObject {

	long long _spaceReduction;
	NSMutableArray* _preallocatedFiles;

}

@property (retain) NSMutableArray * preallocatedFiles;              //@synthesize preallocatedFiles=_preallocatedFiles - In the implementation block
@property (readonly) long long spaceReduction;                      //@synthesize spaceReduction=_spaceReduction - In the implementation block
-(id)initWithSpaceReduction:(long long)arg1 ;
-(long long)spaceReduction;
-(NSMutableArray *)preallocatedFiles;
-(void)setPreallocatedFiles:(NSMutableArray *)arg1 ;
@end

