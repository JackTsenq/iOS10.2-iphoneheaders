/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:09 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier;

@interface CRKSetActiveControlGroupRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _groupIdentifier;

}

@property (nonatomic,copy) DMFControlGroupIdentifier * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroupIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(DMFControlGroupIdentifier *)groupIdentifier;
@end

