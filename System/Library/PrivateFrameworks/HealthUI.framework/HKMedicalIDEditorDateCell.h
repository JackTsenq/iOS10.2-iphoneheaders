/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:44 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKMedicalIDEditorCell.h>

@class UIDatePicker, NSDate;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell {

	UIDatePicker* _picker;
	NSDate* _dateValue;

}

@property (nonatomic,retain) NSDate * dateValue;              //@synthesize dateValue=_dateValue - In the implementation block
-(void)beginEditing;
-(void)commitEditing;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSDate *)dateValue;
-(void)_dateChanged:(id)arg1 ;
-(void)_configureDatePicker;
-(void)_showDatePicker;
-(void)_hideDatePicker;
-(id)formattedValue;
@end

