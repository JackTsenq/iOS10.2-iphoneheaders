/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDTableRow;

@interface WMTableRowMapper : CMMapper {

	WDTableRow* mWdTableRow;
	double mHeight;

}
+(BOOL)isTableRowDeleted:(id)arg1 ;
-(double)height;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithWDTableRow:(id)arg1 parent:(id)arg2 ;
-(void)setRowProperties:(id)arg1 ;
@end
