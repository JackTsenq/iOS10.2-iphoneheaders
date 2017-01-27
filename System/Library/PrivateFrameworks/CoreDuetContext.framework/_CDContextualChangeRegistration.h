/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:19 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _CDContextualPredicate;

@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _mustWake;
	BOOL _isDeserialized;
	NSString* _identifier;
	_CDContextualPredicate* _predicate;
	_CDContextualPredicate* _dismissalPolicy;
	/*^block*/id _callback;
	unsigned long long _deviceSet;

}

@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) _CDContextualPredicate * predicate;                    //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) _CDContextualPredicate * dismissalPolicy;              //@synthesize dismissalPolicy=_dismissalPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long deviceSet;                          //@synthesize deviceSet=_deviceSet - In the implementation block
@property (assign,nonatomic) BOOL mustWake;                                         //@synthesize mustWake=_mustWake - In the implementation block
@property (assign,nonatomic) BOOL isDeserialized;                                   //@synthesize isDeserialized=_isDeserialized - In the implementation block
@property (copy) id callback;                                                       //@synthesize callback=_callback - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(/*^block*/id)arg3 ;
+(id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(/*^block*/id)arg3 ;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPredicate:(_CDContextualPredicate *)arg1 ;
-(_CDContextualPredicate *)predicate;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(_CDContextualPredicate *)dismissalPolicy;
-(void)setDismissalPolicy:(_CDContextualPredicate *)arg1 ;
-(unsigned long long)deviceSet;
-(void)setDeviceSet:(unsigned long long)arg1 ;
-(BOOL)mustWake;
-(void)setMustWake:(BOOL)arg1 ;
-(BOOL)isDeserialized;
-(void)setIsDeserialized:(BOOL)arg1 ;
@end
