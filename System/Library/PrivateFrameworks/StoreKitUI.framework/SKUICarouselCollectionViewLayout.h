/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:04 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;

@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout {

	NSIndexPath* _startScrollingIndexPath;

}

@property (nonatomic,retain) NSIndexPath * startScrollingIndexPath;              //@synthesize startScrollingIndexPath=_startScrollingIndexPath - In the implementation block
+(Class)layoutAttributesClass;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)prepareForTransitionToLayout:(id)arg1 ;
-(void)_panGestureRecognized:(id)arg1 ;
-(NSIndexPath *)startScrollingIndexPath;
-(CGPoint)_collectionViewBoundsCenter;
-(void)setStartScrollingIndexPath:(NSIndexPath *)arg1 ;
@end

