/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SGSuggestionsServiceEventsProtocol <_SGSuggestionsServiceBaseProtocol,_SGSuggestionsServiceEventsConfirmRejectProtocol,_SGSuggestionsServiceEventsObserverProtocol>
@required
-(void)eventFromUniqueId:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(id)eventFromUniqueId:(id)arg1 error:(id*)arg2;
-(void)keysForSchemas:(id)arg1 completion:(/*^block*/id)arg2;
-(void)eventsForSchemas:(id)arg1 usingStore:(id)arg2 completion:(/*^block*/id)arg3;
-(id)allEventsLimitedTo:(unsigned long long)arg1 error:(id*)arg2;
-(void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2;

@end
