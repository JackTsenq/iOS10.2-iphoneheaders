/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface CheckPreorderQueueOperation : ISOperation {

	NSNumber* _accountID;
	long long _numberOfPreorders;

}

@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) long long numberOfPreordersInQueue; 
-(id)_newURLOperation;
-(long long)numberOfPreordersInQueue;
-(void)dealloc;
-(void)run;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(NSNumber *)accountIdentifier;
@end

