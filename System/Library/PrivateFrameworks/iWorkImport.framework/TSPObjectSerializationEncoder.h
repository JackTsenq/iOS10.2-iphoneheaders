/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPEncoder.h>

@protocol OS_dispatch_queue, OS_dispatch_data;
@class NSError, NSObject, TSPMemoryComponentWriteChannel, NSString;

@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder> {

	BOOL _alwaysDefragmentData;
	NSError* _error;
	BOOL _isFinished;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _ioQueue;
	ObjectSerializationDirectory* _directory;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;
	NSObject*<OS_dispatch_data> _encodedData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlwaysDefragmentData:(BOOL)arg1 ;
-(void)appendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishEncodingWithCompletion:(/*^block*/id)arg1 ;
-(id)newRootObjectComponentWriteChannel;
-(id)newMetadataComponentWriteChannel;
-(id)init;
@end

