/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSViewServiceHostViewControllerDelegate <NSObject>
@required
-(void)presentViewServiceHostViewController:(id)arg1;
-(void)dismissViewServiceHostViewController:(id)arg1;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
-(void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;

@end

