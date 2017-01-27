/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:59 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartAudioCallIntentExport.h>

@class NSArray, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>

@property (nonatomic,readonly) BOOL useSpeaker; 
@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long destinationType; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
-(long long)_cdInteractionMechanism;
-(id)_cdRecipients;
-(NSString *)description;
-(long long)destinationType;
-(void)setDestinationType:(long long)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)initWithContacts:(id)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(long long)audioRoute;
-(void)setAudioRoute:(long long)arg1 ;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1 ;
-(BOOL)useSpeaker;
-(void)setUseSpeaker:(BOOL)arg1 ;
@end
