/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OITSUBacktrace : NSObject {

	void* _callstack;
	int _frames;
	int _initAdjustment;

}
+(id)new;
+(id)backtrace;
+(id)caller;
+(id)callee;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithAdjustment:(int)arg1 ;
-(id)callerAtIndex:(long long)arg1 ;
-(id)caller;
-(id)callee;
-(id)backtraceString;
@end
