/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:38 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEONavigationServerObserverXPCInterface <NSObject>
@required
-(void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1;
-(void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1;
-(void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1;
-(void)routeSummaryUpdatedWithStepIndexData:(id)arg1;
-(void)routeSummaryUpdatedWithRideSelectionData:(id)arg1;

@end
