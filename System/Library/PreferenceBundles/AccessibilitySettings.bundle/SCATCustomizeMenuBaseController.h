/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AXReorderableCheckmarkListController.h>

@class NSMutableDictionary;

@interface SCATCustomizeMenuBaseController : AXReorderableCheckmarkListController {

	NSMutableDictionary* _hiddenIndexesToDictionaries;

}

@property (nonatomic,retain) NSMutableDictionary * hiddenIndexesToDictionaries;              //@synthesize hiddenIndexesToDictionaries=_hiddenIndexesToDictionaries - In the implementation block
-(void)_toggleButtonTapped:(id)arg1 ;
-(id)itemAfterTogglingEnabledState:(id)arg1 ;
-(NSMutableDictionary *)hiddenIndexesToDictionaries;
-(void)setHiddenIndexesToDictionaries:(NSMutableDictionary *)arg1 ;
-(void)_updateToggleButtonName;
-(long long)indexOfSectionForItems;
-(BOOL)_toggleShouldEnableAllMenuItems;
-(id)titleForItem:(id)arg1 ;
-(id)filterAndTrackMenuItemsMatchingBlock:(/*^block*/id)arg1 allItems:(id)arg2 ;
-(id)menuItemSpecifiersIncludingToggleButton;
-(id)_nameForToggle;
-(id)restorePreviouslyFilteredItemsToItems:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)isItemEnabled:(id)arg1 ;
-(id)specifiers;
@end

