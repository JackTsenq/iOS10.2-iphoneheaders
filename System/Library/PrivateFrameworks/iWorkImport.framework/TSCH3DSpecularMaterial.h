/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:33 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTexturesMaterial.h>

@interface TSCH3DSpecularMaterial : TSCH3DTexturesMaterial
+(id)instanceWithArchive:(const Chart3DSpecularMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DSpecularMaterialArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DSpecularMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(MaterialShaderVariables)defaultShaderVariables;
@end
