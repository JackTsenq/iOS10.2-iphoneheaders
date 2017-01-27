/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface UpNextWidget.Location : NSObject <NSSecureCoding> {

	 title;
	 address;
	 coordinate;
	 radius;
	 mapItemHandle;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * address; 
@property (copy,nonatomic) NSData * mapItemHandle; 
@property (readonly,nonatomic) BOOL hasKnownSpatialData; 
@property (readonly,nonatomic) NSString * shallowDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)hasKnownSpatialData;
-(NSString *)address;
-(NSString *)shallowDescription;
-(NSData *)mapItemHandle;
-(void)setMapItemHandle:(NSData *)arg1 ;
@end
