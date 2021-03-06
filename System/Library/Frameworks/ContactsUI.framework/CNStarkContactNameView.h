/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface CNStarkContactNameView : UIView {

	UILabel* _nameLabel;
	UIImageView* _photoImageView;

}

@property (nonatomic,retain) UILabel * nameLabel;                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * photoImageView;              //@synthesize photoImageView=_photoImageView - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setPhotoImageView:(UIImageView *)arg1 ;
-(UIImageView *)photoImageView;
@end

