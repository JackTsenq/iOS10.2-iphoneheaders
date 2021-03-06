/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXAudioHardwareManager : NSObject
+(void)enableMultiroute;
+(void)disableMultiroute;
+(id)defaultPort;
+(id)channelsForPort:(id)arg1 ;
+(BOOL)channelsAreAirplay:(id)arg1 route:(id)arg2 ;
+(BOOL)channelsAreWiredHeadphones:(id)arg1 ;
+(void)setDefaultPortChannels:(id)arg1 ;
+(id)defaultPortChannels;
+(void)setDefaultPort:(id)arg1 ;
+(id)sharedManager;
-(id)init;
-(id)_savedIdForRouteDescription:(id)arg1 ;
-(void)_handleSurroundSoundDefaults:(id)arg1 returnedChannels:(id)arg2 port:(id)arg3 source:(long long)arg4 ;
-(id)savedChannelsForOutput:(id)arg1 forSource:(long long)arg2 ;
-(void)setSavedChannels:(id)arg1 forOutput:(id)arg2 forSource:(long long)arg3 ;
@end

