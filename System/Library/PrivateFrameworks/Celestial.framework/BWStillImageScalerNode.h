/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWVideoFormat, BWPixelBufferPool;

@interface BWStillImageScalerNode : BWNode {

	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BWPixelBufferPool* _pool;
	OpaqueVTPixelTransferSessionRef _scalingSession;
	SCD_Struct_BW12 _nativeOutputDimensions;
	BOOL _defersCropToPhotoEncoderWhenPossible;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithPoolCapacity:(int)arg1 ;
-(void)_purgeResources;
-(BOOL)_updatePoolWithSettings:(id)arg1 normalizedInputCropRect:(CGRect)arg2 scaledDenormalizedInputCropRectOut:(CGRect*)arg3 ;
-(int)_rebuildBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(int)_buildScalingSession;
-(void)setNativeOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(SCD_Struct_BW12)nativeOutputDimensions;
-(void)setDefersCropToPhotoEncoderWhenPossible:(BOOL)arg1 ;
-(BOOL)defersCropToPhotoEncoderWhenPossible;
@end

