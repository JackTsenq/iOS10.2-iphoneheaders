/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TXRBufferMap.h>

@class TXRDefaultBuffer, NSString;

@interface TXRDefaultBufferMap : NSObject <TXRBufferMap> {

	void* _bytes;
	TXRDefaultBuffer* _buffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bytes; 
-(void*)bytes;
-(id)initForBuffer:(id)arg1 withBytes:(void*)arg2 ;
@end

