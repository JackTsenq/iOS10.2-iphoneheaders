/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNAvatarViewController.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol CNUIPRLikenessResolver;
@class NSArray, CNContactStore, PRPersonaStore, CNAvatarView, NSString;

@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController <CNAvatarViewDelegate> {

	BOOL _threeDTouchEnabled;
	NSArray* _contacts;
	CNContactStore* _contactStore;
	PRPersonaStore* _personaStore;
	id<CNUIPRLikenessResolver> _likenessResolver;
	CNAvatarView* _avatarView;

}

@property (assign,nonatomic,__weak) CNAvatarView * avatarView;                                 //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) PRPersonaStore * personaStore;                                  //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,readonly) id<CNUIPRLikenessResolver> likenessResolver;                    //@synthesize likenessResolver=_likenessResolver - In the implementation block
@property (assign,getter=isThreeDTouchEnabled,nonatomic) BOOL threeDTouchEnabled;              //@synthesize threeDTouchEnabled=_threeDTouchEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)isThreeDTouchEnabled;
-(id<CNUIPRLikenessResolver>)likenessResolver;
-(CNContactStore *)contactStore;
-(PRPersonaStore *)personaStore;
-(void)setThreeDTouchEnabled:(BOOL)arg1 ;
-(CNAvatarView *)avatarView;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(id)descriptorForRequiredKeys;
-(id)contacts;
-(void)setContacts:(id)arg1 ;
@end

