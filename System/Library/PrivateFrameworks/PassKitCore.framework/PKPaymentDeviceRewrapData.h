/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKSecureElementCertificateSet;

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding> {

	NSString* _deviceIdentifier;
	PKSecureElementCertificateSet* _certificates;

}

@property (nonatomic,copy) NSString * deviceIdentifier;                               //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) PKSecureElementCertificateSet * certificates;              //@synthesize certificates=_certificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setCertificates:(PKSecureElementCertificateSet *)arg1 ;
-(PKSecureElementCertificateSet *)certificates;
@end
