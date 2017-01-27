/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKImageCanvasDelegate.h>

@protocol OS_dispatch_queue;
@class VKMapImageCanvas, GGLImageCanvas, VKMapModel, VKRasterMapTileRequest, NSObject;

@interface VKRasterMapTileCreator : NSObject <VKImageCanvasDelegate> {

	VKMapImageCanvas* _canvas;
	GGLImageCanvas* _displayTarget;
	VKMapModel* _mapModel;
	VKTileKey _superTileKey;
	double _startTimestamp;
	BOOL _loaderOpen;
	/*^block*/id _completion;
	VKRasterMapTileRequest* _request;
	NSObject*<OS_dispatch_queue> _homeQueue;
	Renderer* _renderer;

}
-(void)dealloc;
-(id)detailedDescription;
-(id)detailedDescriptionDictionaryRepresentation;
-(id)initWithHomeQueue:(id)arg1 ;
-(void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2 ;
-(void)imageCanvasWillBecomeFullyDrawn:(id)arg1 ;
-(void)renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_lookAtKey:(const VKTileKey*)arg1 ;
@end
