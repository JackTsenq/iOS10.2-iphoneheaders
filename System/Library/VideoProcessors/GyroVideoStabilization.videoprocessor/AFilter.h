/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/VideoProcessors/GyroVideoStabilization.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EAGLContext;

@interface AFilter : NSObject {

	EAGLContext* _glContext;
	unsigned _lumaProgram;
	unsigned _chromaProgram;
	unsigned _bgraProgram;
	unsigned _lumaBlurProgram;
	unsigned _chromaBlurProgram;
	unsigned _uniforms[40];
	unsigned _blurUniforms[14];
	float m_angle;

}
-(id)initWithContext:(id)arg1 ;
-(BOOL)requiresScissor;
@end

