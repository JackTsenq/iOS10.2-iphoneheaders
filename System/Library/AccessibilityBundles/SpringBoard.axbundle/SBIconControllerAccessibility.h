/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/__SBIconControllerAccessibility_super.h>

@interface SBIconControllerAccessibility : __SBIconControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(long long)_accessibilityIconListCount;
-(void)_cancelFolderSpringloadTimer;
-(void)setIsEditing:(BOOL)arg1 ;
-(void)_accessibilityStatusChanged;
-(void)_accessibilityPickUpIcon:(id)arg1 ;
-(void)iconTouchBegan:(id)arg1 ;
-(void)_resetFolderSpringloadTimer;
-(BOOL)_dismissRightEdgeSpotlight:(BOOL)arg1 ;
-(BOOL)isIconVisiblyRepresented:(id)arg1 ;
-(void)setGrabbedIcon:(id)arg1 ;
-(long long)_accessibilityIconListIndex;
-(void)_accessibilityIconMovedToPosition;
-(void)_accessibilityVoiceOverStatusChanged;
-(void)_accessibilitySwitchControlStatusChanged;
-(BOOL)scrollToIconListAtIndex:(long long)arg1 animate:(BOOL)arg2 ;
-(void)_accessibilityPerformSimpleMove:(id)arg1 ;
-(void)_accessibilityPerformMoveByDragAndDrop:(id)arg1 ;
-(void)_accessibilityMarkIconAsReadyToMove:(id)arg1 ;
-(void)pushExpandedIcon:(id)arg1 withTransitionRequest:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_accessibilityCancelSBAXIconMoveSpeakTimer;
-(void)_accessibilityDropGrabbedIconOnReceivingIcon:(id)arg1 ;
-(void)_accessibilityDropGrabbedIconAndContinueEditing:(BOOL)arg1 ;
-(void)_accessibilityMarkIconAsRecipient:(id)arg1 ;
-(void)_accessibilityMarkIconAsAnimating:(id)arg1 ;
-(void)_accessibilitySimpleMoveIconDropDidFinish:(id)arg1 ;
-(id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2 ;
-(void)_accessibilityDropIconWithPath:(id)arg1 compactDestinationListNow:(BOOL*)arg2 dropComplete:(/*^block*/id)arg3 ;
-(void)_accessibilityCompactDestinationListWithPlaceholderPath:(id)arg1 ;
-(void)popExpandedIconWithTransitionRequest:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_accessibilityMoveIcon:(id)arg1 inFolder:(id)arg2 toIndex:(unsigned long long)arg3 inListView:(id)arg4 folder:(id)arg5 ;
-(void)_accessibilitySBAXIconFolderOpeningTimerFired;
-(void)noteGrabbedIconLocationChangedWithTouch:(id)arg1 ;
-(void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
-(void)_accessibilityDropIconIntoEmptyDock;
-(void)_accessibilityDropIconOntoNewPage;
-(void)_accessibilityMoveIcon:(id)arg1 nextToIcon:(id)arg2 shouldPlaceBefore:(BOOL)arg3 ;
-(void)_accessibilityEndSimpleMove;
-(void)setRecipientIcon:(id)arg1 duration:(double)arg2 ;
-(void)_accessibilityCloseOpenFolder;
-(void)handleHomeButtonTap;
-(id)_axCurrentPageControl;
-(id)init;
@end
