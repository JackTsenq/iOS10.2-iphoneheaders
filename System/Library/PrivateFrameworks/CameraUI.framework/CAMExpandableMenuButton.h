/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol CAMExpandableMenuButtonDelegate;
@class NSMutableArray, UIView, NSIndexSet, NSMutableIndexSet, UIImageView;

@interface CAMExpandableMenuButton : UIControl {

	BOOL _expanded;
	long long _layoutStyle;
	long long _selectedIndex;
	long long _orientation;
	NSMutableArray* __menuItems;
	UIView* __headerView;
	NSIndexSet* __shownIndexesWhileCollapsed;
	NSMutableIndexSet* __highlightedIndexesWhileCollapsed;
	UIImageView* __padBackgroundView;
	id<CAMExpandableMenuButtonDelegate> _expandableMenuDelegate;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) NSMutableArray * _menuItems;                                                  //@synthesize _menuItems=__menuItems - In the implementation block
@property (nonatomic,readonly) UIView * _headerView;                                                         //@synthesize _headerView=__headerView - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * _shownIndexesWhileCollapsed;                                //@synthesize _shownIndexesWhileCollapsed=__shownIndexesWhileCollapsed - In the implementation block
@property (nonatomic,copy,readonly) NSMutableIndexSet * _highlightedIndexesWhileCollapsed;                   //@synthesize _highlightedIndexesWhileCollapsed=__highlightedIndexesWhileCollapsed - In the implementation block
@property (nonatomic,readonly) UIImageView * _padBackgroundView;                                             //@synthesize _padBackgroundView=__padBackgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<CAMExpandableMenuButtonDelegate> expandableMenuDelegate;              //@synthesize expandableMenuDelegate=_expandableMenuDelegate - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                          //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                                                        //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded;                                              //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) long long orientation;                                                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                                //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(double)expansionDuration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)reloadData;
-(void)setOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(BOOL)isExpanded;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(id)headerView;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(UIView *)_headerView;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setExpandableMenuDelegate:(id<CAMExpandableMenuButtonDelegate>)arg1 ;
-(CGSize)intrinsicContentSizeForExpansion:(BOOL)arg1 ;
-(CGRect)frameForAlignmentRect:(CGRect)arg1 expanded:(BOOL)arg2 ;
-(void)startCollapsingWithProposedFrame:(CGRect)arg1 ;
-(void)finishCollapsingAnimated:(BOOL)arg1 ;
-(CGRect)alignmentRectForFrame:(CGRect)arg1 expanded:(BOOL)arg2 ;
-(void)startExpansionWithProposedFrame:(CGRect)arg1 ;
-(void)finishExpansionAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(UIImageView *)_padBackgroundView;
-(void)updateToContentSize:(id)arg1 ;
-(void)collapseMenuAnimated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 forIndex:(long long)arg2 ;
-(double)padHeaderViewContentInsetLeft;
-(id)shownIndexesWhileCollapsed;
-(BOOL)wantsSelectedItemToBeVisible;
-(double)collapsedSelectedLabelHorizontalMargin;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(BOOL)shouldIgnoreMenuInteraction;
-(BOOL)shouldAllowExpansion;
-(void)_updateFromExpansionChangeAnimated:(BOOL)arg1 ;
-(void)_updateFromOrientationChangeAnimated:(BOOL)arg1 ;
-(CGSize)_layoutMenuButton:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(id)_selectedLabel;
-(CGSize)_layoutForPhoneExpandedLandscapeButton:(BOOL)arg1 ;
-(CGSize)_layoutForPhoneExpandedPortraitButton:(BOOL)arg1 ;
-(CGSize)_layoutForPhoneCollapsedLandscapeButton:(BOOL)arg1 ;
-(CGSize)_layoutForPhoneCollapsedPortraitButton:(BOOL)arg1 ;
-(CGSize)_layoutForPadExpandedPortraitButton:(BOOL)arg1 ;
-(CGSize)_layoutForPadCollapsedPortraitButton:(BOOL)arg1 ;
-(CGSize)_layoutForPhoneStyle:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(CGSize)_layoutForPadStyle:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(NSIndexSet *)_shownIndexesWhileCollapsed;
-(void)_updateFromSelectedIndexChange;
-(void)_applyMenuItemColorsForCurrentState;
-(void)_applyMenuItemAlphaForCurrentExpansionState;
-(void)_createPadBackgroundView;
-(void)_applyMenuItemTextAlignmentAndShadowForCurrentOrientation;
-(BOOL)_wantsHeaderViewToBeVisible;
-(void)_applyHeaderViewForCurrentExpansionState;
-(void)_convertAllSubviewsToProposedFrame:(CGRect)arg1 ;
-(void)expandMenuAnimated:(BOOL)arg1 ;
-(void)completeExpansionToProposedFrame:(CGRect)arg1 ;
-(NSMutableArray *)_menuItems;
-(NSMutableIndexSet *)_highlightedIndexesWhileCollapsed;
-(id<CAMExpandableMenuButtonDelegate>)expandableMenuDelegate;
@end

