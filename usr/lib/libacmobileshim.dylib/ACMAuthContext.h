/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACCAuthContext.h>

@class NSString;

@interface ACMAuthContext : ACCAuthContext {

	NSString* _userPreferences;

}

@property (retain) NSString * userPreferences;              //@synthesize userPreferences=_userPreferences - In the implementation block
-(void)dealloc;
-(NSString *)userPreferences;
-(void)setUserPreferences:(NSString *)arg1 ;
-(BOOL)isDevicePwnd;
-(id)parametersDictionary;
@end
