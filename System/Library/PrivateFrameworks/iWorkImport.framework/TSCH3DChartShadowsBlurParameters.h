/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCH3DChartShadowsBlurParameters : NSObject {

	float mQuality;
	long long mNumPasses;
	long long mShadowSize;
	float mKernelScale;

}

@property (assign,nonatomic) float quality; 
@property (assign,nonatomic) long long numPasses; 
@property (assign,nonatomic) long long shadowSize; 
@property (assign,nonatomic) float kernelScale; 
+(id)paramsWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4 ;
-(long long)numPasses;
-(float)kernelScale;
-(id)initWithQuality:(float)arg1 numPasses:(long long)arg2 shadowSize:(long long)arg3 kernelScale:(float)arg4 ;
-(void)setNumPasses:(long long)arg1 ;
-(void)setKernelScale:(float)arg1 ;
-(long long)shadowSize;
-(void)setShadowSize:(long long)arg1 ;
-(void)setQuality:(float)arg1 ;
-(float)quality;
@end

