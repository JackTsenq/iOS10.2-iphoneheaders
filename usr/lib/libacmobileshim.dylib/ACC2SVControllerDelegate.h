/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:48 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACC2SVControllerDelegate <NSObject>
@optional
-(id)twoSVController:(id)arg1 myAppleConnectURLForRealm:(id)arg2;

@required
-(void)twoSVControllerWillClose:(id)arg1;
-(void)twoSVControllerEnterCredentials:(id)arg1;
-(void)twoSVController:(id)arg1 prepareUIWithCompletion:(/*^block*/id)arg2;
-(void)twoSVController:(id)arg1 openMyAppleConnectForRealm:(id)arg2;

@end
