/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:35 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAbstractLayout.h>
#import <iWorkImport/TSDAdaptiveLayout.h>

@class TSDLayoutController, TSURetainedPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout> {

	TSDLayoutController* mLayoutController;
	BOOL mSupportsAdaptiveLayout;
	TSURetainedPointerKeyDictionary* mShiftedObjects;

}
-(id)layoutController;
-(BOOL)isRootLayoutForInspectorGeometry;
-(CGRect)clippedRectInRoot:(CGRect)arg1 ;
-(BOOL)providesGuidesForChildLayouts;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_shiftedObjects;
-(void)beginDynamicAdaptiveLayout;
-(void)endDynamicAdaptiveLayout;
-(CGPoint)adjustMappingPointForInfo:(id)arg1 fromPoint:(CGPoint)arg2 ;
-(BOOL)isSavedShiftForInfo:(id)arg1 equalToOffset:(CGPoint)arg2 ;
-(void)updateRootLayoutShiftFor:(id)arg1 offset:(CGPoint)arg2 ;
-(void)resetLayout:(id)arg1 forInfo:(id)arg2 ;
-(CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(CGPoint)arg3 ;
-(id)initWithLayoutController:(id)arg1 ;
-(id)childLayoutsInRect:(CGRect)arg1 ;
-(void)dealloc;
@end

