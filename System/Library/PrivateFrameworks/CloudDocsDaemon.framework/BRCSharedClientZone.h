/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:10 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCClientZone.h>

@class NSMutableDictionary, NSString, BRCSharedAppLibrary, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {

	NSMutableDictionary* _shareAcceptationByItemID;

}

@property (nonatomic,readonly) NSString * ownerName; 
@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCSharedAppLibrary * appLibrary; 
@property (nonatomic,readonly) NSString * mangledZoneID; 
@property (nonatomic,readonly) BRCSharedServerZone * sharedZone; 
-(BOOL)isSharedZone;
-(id)asSharedClientZone;
-(NSString *)mangledZoneID;
-(void)setServerZone:(id)arg1 ;
-(void)addAcceptOperation:(id)arg1 forItemID:(id)arg2 ;
-(id)shareAcceptOperationForItemID:(id)arg1 ;
-(void)removeAllShareAcceptationSidefaults;
-(PQLResultSet*)shareAcceptationSidefaultEnumerator;
-(BRCSharedServerZone *)sharedZone;
-(NSString *)ownerName;
-(BRCSharedAppLibrary *)appLibrary;
@end

