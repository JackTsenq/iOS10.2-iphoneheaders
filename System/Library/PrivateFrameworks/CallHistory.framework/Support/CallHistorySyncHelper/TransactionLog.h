/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSString;

@interface TransactionLog : CHSynchronizedLoggable {

	NSString* _path;
	NSString* _defaultLogDirectory;
	NSString* _defaultLogFileName;
	unsigned long long _fileOffset;
	unsigned long long _transactionCount;

}

@property (retain) NSString * path;                                      //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) unsigned long long fileOffset;              //@synthesize fileOffset=_fileOffset - In the implementation block
@property (assign) unsigned long long transactionCount;                  //@synthesize transactionCount=_transactionCount - In the implementation block
@property (readonly) NSString * defaultLogDirectory;                     //@synthesize defaultLogDirectory=_defaultLogDirectory - In the implementation block
@property (readonly) NSString * defaultLogFileName;                      //@synthesize defaultLogFileName=_defaultLogFileName - In the implementation block
+(id)serializeTransaction:(id)arg1 ;
-(void)handleDeviceUnlocked;
-(id)initWithFileName:(id)arg1 withDescription:(const char*)arg2 ;
-(id)getTransactions;
-(id)getSomeTransactions;
-(void)readTransactionsProcessed:(unsigned long long)arg1 ;
-(unsigned long long)getTransactionCount;
-(NSString *)defaultLogDirectory;
-(void)migrateFromKeyedArchiverSync;
-(void)initializeTransactionCountSync;
-(id)getSomeTransactionsSync;
-(void)readFileOffset;
-(id)getDefaultLogDirectory;
-(unsigned long long)fileOffset;
-(void)appendSync:(id)arg1 ;
-(void)appendTransactionSync:(id)arg1 withFileHandle:(id)arg2 ;
-(void)clearSync;
-(void)setFileOffset:(unsigned long long)arg1 ;
-(void)writeFileOffset;
-(id)getNTransactionsSync:(unsigned long long)arg1 ;
-(void)readTransactionsProcessedSync:(unsigned long long)arg1 ;
-(void)createLogDirectoryAndFile;
-(id)getNTransactions:(unsigned long long)arg1 ;
-(NSString *)defaultLogFileName;
-(id)initWithDescription:(const char*)arg1 ;
-(id)init;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)clear;
-(unsigned long long)transactionCount;
-(void)setTransactionCount:(unsigned long long)arg1 ;
-(void)append:(id)arg1 ;
-(void)registerForNotifications;
@end
