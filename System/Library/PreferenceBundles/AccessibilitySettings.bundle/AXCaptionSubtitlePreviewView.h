/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:37 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIImageView.h>

@class NSString;

@interface AXCaptionSubtitlePreviewView : UIImageView {

	OpaqueFigSubtitleRendererRef _renderer;
	NSString* text;

}

@property (nonatomic,retain) NSString * text; 
-(void)dealloc;
-(void)didMoveToWindow;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)update;
@end
