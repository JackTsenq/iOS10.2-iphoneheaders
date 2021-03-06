/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSSet;

@interface SBComposedWallpaperSpecification : NSObject <NSCopying> {

	NSArray* _layers;

}

@property (nonatomic,copy,readonly) NSArray * layers;                                      //@synthesize layers=_layers - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allAssetURLs; 
@property (nonatomic,copy,readonly) id<NSCopying> propertyListRepresentation; 
+(id)specificationWithLayers:(id)arg1 ;
-(id)initWithLayers:(id)arg1 ;
-(NSSet *)allAssetURLs;
-(id)initWithPropertyListData:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)layers;
-(id<NSCopying>)propertyListRepresentation;
-(id)initWithPropertyList:(id)arg1 ;
@end

