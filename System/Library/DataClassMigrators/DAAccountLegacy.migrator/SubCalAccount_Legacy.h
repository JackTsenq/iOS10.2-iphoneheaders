/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:36:55 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAAccountLegacy/DALegacyAccount.h>

@interface SubCalAccount_Legacy : DALegacyAccount
-(int)subCalAccountVersion;
-(BOOL)upgradeAccountWithParent:(id)arg1 ;
-(id)_oldURLsForKeychain;
-(BOOL)_upgradeSelfFromVersion:(int)arg1 superClassUpgraded:(BOOL)arg2 ;
@end
