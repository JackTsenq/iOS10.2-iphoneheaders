/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:39 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class NSMutableDictionary, PSTableCell, NSString;

@interface CKSettingsController : PSListController <UINavigationControllerDelegate> {

	NSMutableDictionary* _enabledByAppID;
	PSTableCell* _serviceSectionCell;

}

@property (nonatomic,retain) NSMutableDictionary * enabledByAppID;              //@synthesize enabledByAppID=_enabledByAppID - In the implementation block
@property (nonatomic,retain) PSTableCell * serviceSectionCell;                  //@synthesize serviceSectionCell=_serviceSectionCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cloudKitNumAppGroups;
-(PSTableCell *)serviceSectionCell;
-(NSMutableDictionary *)enabledByAppID;
-(void)setEnabledByAppID:(NSMutableDictionary *)arg1 ;
-(void)setAppPermissionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)appPermissionEnabledForSpecifier:(id)arg1 ;
-(BOOL)_isApplicationHiddenFromSettings:(id)arg1 ;
-(void)setServiceSectionCell:(PSTableCell *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(id)specifiers;
@end

