/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:56 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LKClassConfigurationProviding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData, NSMutableDictionary, NSDictionary;

@interface LKClassConfiguration : NSObject <LKClassConfigurationProviding, NSSecureCoding> {

	NSString* _schoolName;
	NSArray* _classes;
	NSArray* _students;
	NSData* _payloadCertificatePersistentID;
	NSArray* _classGroups;
	NSArray* _instructors;
	NSMutableDictionary* _classesByClassID;
	NSMutableDictionary* _usersWithAppleIDByIdentifier;
	NSMutableDictionary* _usersByUsername;
	NSMutableDictionary* _classesByClassGroupName;
	NSDictionary* _classRosterInformationDictionary;

}

@property (retain) NSMutableDictionary * classesByClassID;                           //@synthesize classesByClassID=_classesByClassID - In the implementation block
@property (retain) NSMutableDictionary * usersWithAppleIDByIdentifier;               //@synthesize usersWithAppleIDByIdentifier=_usersWithAppleIDByIdentifier - In the implementation block
@property (retain) NSMutableDictionary * usersByUsername;                            //@synthesize usersByUsername=_usersByUsername - In the implementation block
@property (retain) NSMutableDictionary * classesByClassGroupName;                    //@synthesize classesByClassGroupName=_classesByClassGroupName - In the implementation block
@property (retain) NSDictionary * classRosterInformationDictionary;                  //@synthesize classRosterInformationDictionary=_classRosterInformationDictionary - In the implementation block
@property (nonatomic,readonly) NSData * payloadCertificatePersistentID;              //@synthesize payloadCertificatePersistentID=_payloadCertificatePersistentID - In the implementation block
@property (nonatomic,retain) NSArray * classGroups;                                  //@synthesize classGroups=_classGroups - In the implementation block
@property (nonatomic,readonly) NSArray * instructors;                                //@synthesize instructors=_instructors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * students;                                       //@synthesize students=_students - In the implementation block
@property (nonatomic,copy,readonly) NSArray * classes;                               //@synthesize classes=_classes - In the implementation block
@property (nonatomic,copy,readonly) NSString * schoolName;                           //@synthesize schoolName=_schoolName - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)payloadCertificatePersistentID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)initWithPropertyList:(id)arg1 ;
-(NSArray *)classes;
-(NSArray *)students;
-(void)setStudents:(NSArray *)arg1 ;
-(NSArray *)instructors;
-(NSMutableDictionary *)usersWithAppleIDByIdentifier;
-(NSMutableDictionary *)usersByUsername;
-(NSString *)schoolName;
-(id)classInfoForClassID:(id)arg1 ;
-(id)studentForStudentIdentifier:(id)arg1 inClass:(id)arg2 ;
-(id)studentForStudentIdentifier:(id)arg1 ;
-(id)studentForUsername:(id)arg1 inClass:(id)arg2 ;
-(id)studentForUsername:(id)arg1 ;
-(id)classesByClassGroupNameDictionary;
-(NSArray *)classGroups;
-(void)setClassGroups:(NSArray *)arg1 ;
-(NSMutableDictionary *)classesByClassID;
-(void)setClassesByClassID:(NSMutableDictionary *)arg1 ;
-(void)setUsersWithAppleIDByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setUsersByUsername:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)classesByClassGroupName;
-(void)setClassesByClassGroupName:(NSMutableDictionary *)arg1 ;
-(NSDictionary *)classRosterInformationDictionary;
-(void)setClassRosterInformationDictionary:(NSDictionary *)arg1 ;
@end
