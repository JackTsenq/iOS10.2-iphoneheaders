/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TNChartFormulaArgument : NSObject {

	int mType;
	void* mData;

}

@property (readonly) int type; 
@property (readonly) BOOL isCellReference; 
@property (readonly) BOOL isRangeReference; 
@property (readonly) BOOL isStaticValue; 
@property (readonly) BOOL isBadRef; 
@property (readonly) BOOL isReference; 
@property (readonly) SCD_Struct_TS361* cellReference; 
@property (readonly) SCD_Struct_TS360* rangeReference; 
@property (readonly) TSCEValue* staticValue; 
-(SCD_Struct_TS360*)rangeReference;
-(id)initWithRangeReference:(SCD_Struct_TS360*)arg1 ;
-(id)initWithCellReference:(SCD_Struct_TS361*)arg1 ;
-(SCD_Struct_TS361*)cellReference;
-(BOOL)isReference;
-(BOOL)isStaticValue;
-(TSCEValue*)staticValue;
-(BOOL)isBadRef;
-(BOOL)isRangeReference;
-(id)initWithStaticValue:(const TSCEValue*)arg1 ;
-(id)initWithBadRef;
-(void)dealloc;
-(id)description;
-(int)type;
-(BOOL)isCellReference;
@end

