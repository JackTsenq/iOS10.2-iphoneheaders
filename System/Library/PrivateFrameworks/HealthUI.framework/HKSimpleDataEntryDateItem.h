/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKSimpleDataEntryItemType.h>

@protocol HKSimpleDataEntryItemDelegate;
@class HKSimpleDataEntryPlainTextCell, NSString, NSDate, HKValueRange, UIDatePicker, NSDateFormatter;

@interface HKSimpleDataEntryDateItem : NSObject <HKSimpleDataEntryItemType> {

	HKSimpleDataEntryPlainTextCell* _cell;
	NSString* _title;
	NSString* _registrantModelKey;
	NSDate* _date;
	NSDate* _defaultDate;
	HKValueRange* _dateRange;
	UIDatePicker* _datePicker;
	NSDateFormatter* _exportFormatter;
	id<HKSimpleDataEntryItemDelegate> _delegate;
	unsigned long long _placeholderType;

}

@property (assign,nonatomic,__weak) id<HKSimpleDataEntryItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderType;                             //@synthesize placeholderType=_placeholderType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dateFormatter;
+(id)gregorianGMTCalendar;
-(void)setDelegate:(id<HKSimpleDataEntryItemDelegate>)arg1 ;
-(id<HKSimpleDataEntryItemDelegate>)delegate;
-(void)beginEditing;
-(id)cell;
-(void)localeDidChange:(id)arg1 ;
-(unsigned long long)placeholderType;
-(void)doneButtonTapped:(id)arg1 ;
-(void)updateCellDisplay;
-(void)_setTextForInputTextField:(id)arg1 ;
-(id)formattedKeyAndValue;
-(void)setPlaceholderType:(unsigned long long)arg1 ;
-(void)datePickerValueChanged:(id)arg1 ;
-(id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 date:(id)arg3 defaultDate:(id)arg4 dateRange:(id)arg5 exportFormatter:(id)arg6 ;
@end
