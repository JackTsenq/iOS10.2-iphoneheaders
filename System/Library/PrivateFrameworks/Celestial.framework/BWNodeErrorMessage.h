/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:05 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/BWNodeMessage.h>

@class BWNodeError;

@interface BWNodeErrorMessage : BWNodeMessage {

	BWNodeError* _nodeError;

}

@property (readonly) BWNodeError * nodeError; 
+(id)newMessageWithNodeError:(id)arg1 ;
-(void)dealloc;
-(BWNodeError *)nodeError;
-(id)_initWithNodeError:(id)arg1 ;
@end
