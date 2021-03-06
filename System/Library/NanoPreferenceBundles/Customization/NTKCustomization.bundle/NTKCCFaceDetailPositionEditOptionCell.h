/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:36 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCCDetailTableViewCell.h>

@class NTKEditOption;

@interface NTKCCFaceDetailPositionEditOptionCell : NTKCCDetailTableViewCell {

	BOOL _active;
	NTKEditOption* _editOption;

}

@property (nonatomic,readonly) NTKEditOption * editOption;              //@synthesize editOption=_editOption - In the implementation block
@property (assign,nonatomic) BOOL active;                               //@synthesize active=_active - In the implementation block
+(id)reuseIdentifier;
-(id)initWithPositionEditOption:(id)arg1 ;
-(NTKEditOption *)editOption;
-(double)rowHeight;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
@end

