/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:42 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSString, UILabel;

@interface SLFacebookAccountVerificationFooterView : UIView <PSHeaderFooterView> {

	NSString* _verificationMessage;
	UILabel* _verificationMessageLabel;

}
-(void)layoutSubviews;
-(id)_font;
-(double)_heightForMessageConstrainedToWidth:(double)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end
