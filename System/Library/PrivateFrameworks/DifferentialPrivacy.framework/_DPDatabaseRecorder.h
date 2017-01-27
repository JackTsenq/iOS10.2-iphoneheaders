/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/_DPDataRecorder.h>

@class _DPStorage, NSSet;

@interface _DPDatabaseRecorder : _DPDataRecorder {

	_DPStorage* _db;
	NSSet* _blacklist;

}

@property (nonatomic,readonly) _DPStorage * db;                //@synthesize db=_db - In the implementation block
@property (nonatomic,readonly) NSSet * blacklist;              //@synthesize blacklist=_blacklist - In the implementation block
-(id)init;
-(id)description;
-(NSSet *)blacklist;
-(_DPStorage *)db;
-(void)recordNumbers:(id)arg1 ;
-(void)recordStrings:(id)arg1 ;
-(void)recordWords:(id)arg1 ;
-(id)initWithKey:(id)arg1 storage:(id)arg2 ;
@end
