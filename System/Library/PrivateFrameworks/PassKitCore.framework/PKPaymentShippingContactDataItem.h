/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class NSString;

@interface PKPaymentShippingContactDataItem : PKPaymentDataItem

@property (nonatomic,readonly) NSString * email; 
@property (nonatomic,readonly) NSString * phone; 
@property (nonatomic,readonly) NSString * name; 
+(long long)dataType;
-(NSString *)name;
-(NSString *)email;
-(NSString *)phone;
-(BOOL)isValidWithError:(id*)arg1 ;
@end
