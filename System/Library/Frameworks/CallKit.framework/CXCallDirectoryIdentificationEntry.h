/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CXCallDirectoryIdentificationEntry : NSObject <NSSecureCoding> {

	NSString* _extensionIdentifier;
	NSString* _localizedExtensionName;
	NSString* _localizedExtensionContainingAppName;
	NSString* _localizedLabel;

}

@property (nonatomic,copy) NSString * extensionIdentifier;                              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * localizedExtensionName;                           //@synthesize localizedExtensionName=_localizedExtensionName - In the implementation block
@property (nonatomic,copy) NSString * localizedExtensionContainingAppName;              //@synthesize localizedExtensionContainingAppName=_localizedExtensionContainingAppName - In the implementation block
@property (nonatomic,copy) NSString * localizedLabel;                                   //@synthesize localizedLabel=_localizedLabel - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)extensionIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedLabel;
-(NSString *)localizedExtensionContainingAppName;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(NSString *)localizedExtensionName;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)setLocalizedExtensionName:(NSString *)arg1 ;
-(void)setLocalizedExtensionContainingAppName:(NSString *)arg1 ;
@end

