/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:18 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UISlidingBarStateRequest : NSObject <NSCopying> {

	BOOL _userInitiated;
	double _leadingWidth;
	double _trailingWidth;
	double _bounce;

}

@property (assign,nonatomic) double leadingWidth;               //@synthesize leadingWidth=_leadingWidth - In the implementation block
@property (assign,nonatomic) double trailingWidth;              //@synthesize trailingWidth=_trailingWidth - In the implementation block
@property (assign,nonatomic) double bounce;                     //@synthesize bounce=_bounce - In the implementation block
@property (assign,nonatomic) BOOL userInitiated;                //@synthesize userInitiated=_userInitiated - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLeadingWidth:(double)arg1 ;
-(void)setTrailingWidth:(double)arg1 ;
-(void)setBounce:(double)arg1 ;
-(double)leadingWidth;
-(double)trailingWidth;
-(double)bounce;
-(BOOL)userInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
@end

