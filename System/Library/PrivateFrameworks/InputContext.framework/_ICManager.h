/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _ICManager
@required
-(void)reset;
-(id)getContactsWithAddressBookLimit:(int)arg1 foundLimit:(int)arg2 error:(id*)arg3;
-(id)lastCachedResultWithInitialCharacters:(id)arg1;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7;
-(void)predictedItemSelected:(id)arg1;

@end

