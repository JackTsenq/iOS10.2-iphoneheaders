/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath, UITableViewUpdateGap;

@interface UIUpdateItem : NSObject {

	int _action;
	NSIndexPath* _indexPath;
	long long _animation;
	double _offset;
	BOOL _headerFooterOnly;
	BOOL _skipAnimation;
	UITableViewUpdateGap* _gap;

}

@property (assign,nonatomic,__weak) UITableViewUpdateGap * gap;              //@synthesize gap=_gap - In the implementation block
@property (nonatomic,readonly) int action;                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                      //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) long long animation;                            //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) double offset;                                  //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) BOOL headerFooterOnly;                          //@synthesize headerFooterOnly=_headerFooterOnly - In the implementation block
@property (assign,nonatomic) BOOL skipAnimation;                             //@synthesize skipAnimation=_skipAnimation - In the implementation block
-(NSIndexPath *)indexPath;
-(int)action;
-(long long)animation;
-(long long)inverseCompareIndexPaths:(id)arg1 ;
-(long long)compareIndexPaths:(id)arg1 ;
-(BOOL)isSectionOperation;
-(id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(long long)arg3 ;
-(BOOL)headerFooterOnly;
-(void)setHeaderFooterOnly:(BOOL)arg1 ;
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(void)setGap:(UITableViewUpdateGap *)arg1 ;
-(void)setAnimation:(long long)arg1 ;
-(id)_actionDescription;
-(UITableViewUpdateGap *)gap;
-(BOOL)skipAnimation;
-(void)setSkipAnimation:(BOOL)arg1 ;
@end

