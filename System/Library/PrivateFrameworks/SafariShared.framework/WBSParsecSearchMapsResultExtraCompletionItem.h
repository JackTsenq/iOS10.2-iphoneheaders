/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class NSString, SFSearchResult, WBSParsecImageRepresentation, WBSParsecSearchMapsResult, NSURL;

@interface WBSParsecSearchMapsResultExtraCompletionItem : NSObject <WBSCompletionListItem> {

	WBSParsecImageRepresentation* _icon;
	WBSParsecSearchMapsResult* _mapsResult;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * feedbackIdentifier; 
@property (nonatomic,readonly) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) SFSearchResult * sfSearchResultValue; 
@property (nonatomic,readonly) unsigned long long engagementDestination; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
-(NSURL *)url;
-(NSString *)title;
-(NSString *)parsecDomainIdentifier;
-(SFSearchResult *)sfSearchResultValue;
-(unsigned long long)engagementDestination;
-(NSString *)feedbackIdentifier;
-(id)initWithMapsResult:(id)arg1 text:(id)arg2 url:(id)arg3 icon:(id)arg4 ;
-(id)iconWithSession:(id)arg1 ;
@end

