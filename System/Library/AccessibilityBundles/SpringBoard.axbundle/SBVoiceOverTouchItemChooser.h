/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSArray, NSMutableArray, NSMutableDictionary, UITableView, UIControl, NSString, UISearchField, UILabel;

@interface SBVoiceOverTouchItemChooser : UIView <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {

	NSArray* _originalList;
	NSArray* _itemCategoryMappings;
	NSArray* _regionDescriptions;
	NSMutableArray* _filteredList;
	NSMutableDictionary* _items;
	long long _totalItemCount;
	NSArray* _sectionHeaders;
	UITableView* _table;
	UIControl* _dimmingView;
	long long _selectedRow;
	NSString* _filter;
	UISearchField* _searchField;
	CGRect _keyboardFrame;
	UILabel* _headingLabel;
	NSArray* _categories;
	long long _category;
	BOOL _activateItem;

}

@property (nonatomic,retain) NSMutableDictionary * items;              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSArray * categories;                     //@synthesize categories=_categories - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)hide;
+(void)show:(id)arg1 ;
+(BOOL)isVisible;
+(void)setCategories:(id)arg1 ;
-(void)_orientationChangeNotification;
-(void)_dimmingViewPressed;
-(void)_resizeHeaderLabel;
-(double)_positionAccountingForKeyboard:(CGRect)arg1 ;
-(void)_handleSearchFieldTextChange:(id)arg1 ;
-(void)_updatePositionForKeyboard:(CGRect)arg1 ;
-(void)_resizeItemChooserView;
-(BOOL)_accessibilityActivateActionChosen:(id)arg1 ;
-(void)_displayWithList:(id)arg1 fromRotorSwitch:(BOOL)arg2 ;
-(void)_rotateWindow;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)hide;
-(void)show:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(NSArray *)categories;
-(NSMutableDictionary *)items;
-(void)setItems:(NSMutableDictionary *)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(BOOL)isVisible;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)setCategories:(NSArray *)arg1 ;
@end

