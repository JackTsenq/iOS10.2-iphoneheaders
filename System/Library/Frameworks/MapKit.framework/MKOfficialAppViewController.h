/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKOfficialAppViewDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKOfficialAppViewControllerDelegate;
@class NSString, MKOfficialAppView, MKPlaceSectionHeaderView;

@interface MKOfficialAppViewController : MKPlaceSectionViewController <MKOfficialAppViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _isShowing;
	NSString* _url;
	id<MKOfficialAppViewControllerDelegate> _officialAppDelegate;
	MKOfficialAppView* _officialAppView;
	MKPlaceSectionHeaderView* _officialAppHeaderView;

}

@property (nonatomic,retain) MKOfficialAppView * officialAppView;                                             //@synthesize officialAppView=_officialAppView - In the implementation block
@property (nonatomic,retain) MKPlaceSectionHeaderView * officialAppHeaderView;                                //@synthesize officialAppHeaderView=_officialAppHeaderView - In the implementation block
@property (assign,nonatomic) BOOL isShowing;                                                                  //@synthesize isShowing=_isShowing - In the implementation block
@property (nonatomic,copy) NSString * url;                                                                    //@synthesize url=_url - In the implementation block
@property (assign,nonatomic,__weak) id<MKOfficialAppViewControllerDelegate> officialAppDelegate;              //@synthesize officialAppDelegate=_officialAppDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)url;
-(void)viewDidLoad;
-(void)setUrl:(NSString *)arg1 ;
-(BOOL)isShowing;
-(id)initWithURLString:(id)arg1 ;
-(id)infoCardChildPossibleActions;
-(void)officialAppViewDidSelectPunchOutButton:(id)arg1 ;
-(void)updateOfficialViewButtonText;
-(void)_beginFindingOfficialApp;
-(id<MKOfficialAppViewControllerDelegate>)officialAppDelegate;
-(void)setOfficialAppDelegate:(id<MKOfficialAppViewControllerDelegate>)arg1 ;
-(MKOfficialAppView *)officialAppView;
-(void)setOfficialAppView:(MKOfficialAppView *)arg1 ;
-(MKPlaceSectionHeaderView *)officialAppHeaderView;
-(void)setOfficialAppHeaderView:(MKPlaceSectionHeaderView *)arg1 ;
-(void)setIsShowing:(BOOL)arg1 ;
@end

