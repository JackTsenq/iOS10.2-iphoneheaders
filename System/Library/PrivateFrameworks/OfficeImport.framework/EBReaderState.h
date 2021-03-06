/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EBState.h>

@class ECColumnWidthConvertor, OABReaderState;

@interface EBReaderState : EBState {

	XlBinaryReader* mXlReader;
	XlSheetInfoTable* mXlSheetInfoTable;
	ECColumnWidthConvertor* mColumnWidthConvertor;
	XlEshObjectFactory* mXlEshObjectFactory;
	OABReaderState* mOAState;
	BOOL mImportCSV;

}

@property (assign,nonatomic) BOOL importCSV; 
-(void)dealloc;
-(id)columnWidthConvertor;
-(void)reportWarning:(TCTaggedMessageStructure*)arg1 ;
-(XlBinaryReader*)xlReader;
-(id)oaState;
-(id)initWithXlReader:(XlBinaryReader*)arg1 cancelDelegate:(id)arg2 tracing:(id)arg3 ;
-(void)pauseReading;
-(BOOL)importCSV;
-(void)setImportCSV:(BOOL)arg1 ;
-(XlSheetInfoTable*)xlSheetInfoTable;
-(void)resumeReading;
-(void)readGlobalXlObjects;
@end

