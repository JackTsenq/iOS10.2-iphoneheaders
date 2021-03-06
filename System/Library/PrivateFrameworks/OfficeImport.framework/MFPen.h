/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFObject.h>

@class OITSUColor;

@interface MFPen : NSObject <MFObject> {

	int m_penStyle;
	int m_penWidth;
	OITSUColor* m_colour;
	double* m_userStyleArray;

}
+(id)pen;
+(id)penWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(id)init;
-(void)dealloc;
-(int)selectInto:(id)arg1 ;
-(id)initWithStyle:(int)arg1 width:(int)arg2 colour:(id)arg3 styleArray:(double*)arg4 ;
-(id)getColor;
-(int)getWidth;
-(int)getStyle;
@end

