/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:40 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficSettings/AirTrafficSettingsBaseController.h>
#import <AirTrafficSettings/AirTrafficSettingsDataSourceDelegate.h>

@class NSString;

@interface AirTrafficSettingsHostListController : AirTrafficSettingsBaseController <AirTrafficSettingsDataSourceDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataSource:(id)arg1 updatedSyncingState:(BOOL)arg2 ;
-(void)_resumed:(id)arg1 ;
-(void)_suspended:(id)arg1 ;
-(void)dataSource:(id)arg1 updatedConnectedState:(BOOL)arg2 ;
-(id)_headerText;
-(void)toggleSync:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)reloadSpecifiers;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)specifiers;
@end

