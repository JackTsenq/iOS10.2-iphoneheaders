/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSiriSearchRequest : WLKRequest {

	NSDictionary* _options;

}

@property (nonatomic,copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
@end

