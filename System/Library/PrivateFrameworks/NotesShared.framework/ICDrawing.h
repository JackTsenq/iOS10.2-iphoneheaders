/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSUUID, TTVectorMultiTimestamp, NSDate, NSOrderedSet;

@interface ICDrawing : NSObject <NSCopying> {

	NSMutableOrderedSet* _commands;
	NSMutableOrderedSet* _visibleCommands;
	long long _orientation;
	CGRect _unrotatedBoundsInCommandSpace;
	CGRect _commandBounds;
	NSUUID* _replicaUUID;
	TTVectorMultiTimestamp* _timestamp;
	NSDate* _orientationTimestamp;
	CGSize _unrotatedSize;

}

@property (nonatomic,retain) TTVectorMultiTimestamp * timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * orientationTimestamp;                     //@synthesize orientationTimestamp=_orientationTimestamp - In the implementation block
@property (nonatomic,readonly) NSUUID * replicaUUID;                            //@synthesize replicaUUID=_replicaUUID - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * commands;                         //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * visibleCommands; 
@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) CGSize unrotatedSize;                              //@synthesize unrotatedSize=_unrotatedSize - In the implementation block
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) BOOL canChangeTransientOrientation; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGRect unrotatedBoundsInCommandSpace;              //@synthesize unrotatedBoundsInCommandSpace=_unrotatedBoundsInCommandSpace - In the implementation block
@property (nonatomic,readonly) CGRect fullBounds; 
+(CGSize)defaultSize;
+(void)sortCommands:(id)arg1 ;
+(CGSize)fullSize:(CGSize)arg1 forOrientation:(long long)arg2 ;
+(CGAffineTransform)orientationTransform:(long long)arg1 size:(CGSize)arg2 ;
+(CGAffineTransform)defaultSizeOrientationTransform:(long long)arg1 ;
+(CGSize)defaultPixelSize;
-(id)init;
-(CGRect)bounds;
-(TTVectorMultiTimestamp *)timestamp;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)setTimestamp:(TTVectorMultiTimestamp *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)imageOrientation;
-(NSOrderedSet *)commands;
-(NSOrderedSet *)visibleCommands;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(NSUUID *)replicaUUID;
-(id)initWithReplicaID:(id)arg1 ;
-(unsigned long long)mergeWithDrawing:(id)arg1 ;
-(id)initWithData:(id)arg1 version:(unsigned)arg2 andReplicaID:(id)arg3 ;
-(id)serializeWithPathData:(BOOL)arg1 toVersion:(unsigned*)arg2 ;
-(NSDate *)orientationTimestamp;
-(CGRect)unrotatedBoundsInCommandSpace;
-(CGRect)commandBounds;
-(CGSize)unrotatedSize;
-(id)initWithDrawing:(id)arg1 ;
-(CGRect)calculateCommandBounds;
-(CGAffineTransform)orientationTransform;
-(void)setOrientationTimestamp:(NSDate *)arg1 ;
-(BOOL)canChangeTransientOrientation;
-(void)setCommandIDForInsertion:(id)arg1 ;
-(id)visibleCommandForInsertingCommand:(id)arg1 ;
-(void)addNewCommand:(id)arg1 ;
-(ICDrawingCommandID)commandIDForNewCommand;
-(void)invalidateBounds;
-(void)setUnrotatedBoundsInCommandSpace:(CGRect)arg1 ;
-(void)sortCommands;
-(CGSize)fullSize;
-(id)initWithCommands:(id)arg1 fromDrawing:(id)arg2 ;
-(id)mutableCommands;
-(void)takeOrientationFrom:(id)arg1 ;
-(BOOL)setTransientOrientation:(long long)arg1 ;
-(id)insertNewTestCommand;
-(id)setCommand:(id)arg1 hidden:(BOOL)arg2 ;
-(CGRect)fullBounds;
-(void)setUnrotatedSize:(CGSize)arg1 ;
-(id)serializeWithPathData:(BOOL)arg1 ;
-(id)initWithArchive:(const Drawing*)arg1 version:(unsigned)arg2 andReplicaID:(id)arg3 ;
-(unsigned)saveToArchive:(Drawing*)arg1 withPathData:(BOOL)arg2 ;
@end
