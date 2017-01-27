/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>

@class UIButton, SearchUICardDetailsView, NSLayoutConstraint;

@interface SearchUIDescriptionCardSectionView : SearchUICardSectionView {

	UIButton* _moreButton;
	SearchUICardDetailsView* _detailsView;
	NSLayoutConstraint* _moreButtonHorizontalInsetConstraint;

}

@property (retain) UIButton * moreButton;                                                 //@synthesize moreButton=_moreButton - In the implementation block
@property (retain) SearchUICardDetailsView * detailsView;                                 //@synthesize detailsView=_detailsView - In the implementation block
@property (retain) NSLayoutConstraint * moreButtonHorizontalInsetConstraint;              //@synthesize moreButtonHorizontalInsetConstraint=_moreButtonHorizontalInsetConstraint - In the implementation block
-(void)layoutSubviews;
-(void)setDetailsView:(SearchUICardDetailsView *)arg1 ;
-(SearchUICardDetailsView *)detailsView;
-(id)initWithCardSection:(id)arg1 controller:(id)arg2 ;
-(void)moreButtonPressed;
-(void)setMoreButton:(UIButton *)arg1 ;
-(void)setMoreButtonHorizontalInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)moreButtonHorizontalInsetConstraint;
-(UIButton *)moreButton;
@end
