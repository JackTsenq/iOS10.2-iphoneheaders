/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:25 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PDPlaceholder : NSObject {

	int mType;
	int mOrientation;
	int mSize;
	unsigned mIndex;
	int mBoundsTrack;

}
+(BOOL)isTextType:(int)arg1 ;
+(BOOL)isNonTextType:(int)arg1 ;
-(id)init;
-(int)size;
-(id)description;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setSize:(int)arg1 ;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
-(int)boundsTrack;
-(void)setBoundsTrack:(int)arg1 ;
@end
