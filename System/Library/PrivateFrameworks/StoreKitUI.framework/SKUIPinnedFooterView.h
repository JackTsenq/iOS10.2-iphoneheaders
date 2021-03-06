/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:03 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>

@class NSAttributedString, UITextView;

@interface SKUIPinnedFooterView : UITableViewHeaderFooterView {

	NSAttributedString* _attributedText;
	double _horizontalPadding;
	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                            //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (assign,nonatomic) double horizontalPadding;                         //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setHorizontalPadding:(double)arg1 ;
-(double)horizontalPadding;
-(UITextView *)textView;
-(void)_initializeTextView;
-(void)_configureTextViewTextStyling;
@end

