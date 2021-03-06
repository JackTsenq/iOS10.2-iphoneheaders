/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:06 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonImageView.h>
#import <libobjc.A.dylib/CKInvisibleInkEffectHostView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CKBalloonViewDelegate;
@class UIImage, UITapGestureRecognizer, UILongPressGestureRecognizer, NSMutableArray, CABackdropLayer, CKInvisibleInkEffectController, CKManualUpdater, UIImageView, UIColor, NSString;

@interface CKBalloonView : CKBalloonImageView <CKInvisibleInkEffectHostView, UIGestureRecognizerDelegate> {

	char _orientation;
	BOOL _hasTail;
	BOOL _filled;
	BOOL _showingMenu;
	BOOL _canUseOpaqueMask;
	BOOL _hasOverlay;
	BOOL _wantsSkinnyMask;
	BOOL _useLargeAsset;
	char _balloonShape;
	char _balloonTailShape;
	BOOL _invisibleInkEffectPaused;
	id<CKBalloonViewDelegate> _delegate;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSMutableArray* _filters;
	unsigned long long _balloonCorners;
	CABackdropLayer* _backdropFilterLayer;
	CKInvisibleInkEffectController* _invisibleInkEffectController;
	UITapGestureRecognizer* _tapGestureRecognizer;
	CKManualUpdater* _displayUpdater;
	UIImageView* _overlay;
	UIEdgeInsets _textAlignmentInsets;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * doubleTapGestureRecognizer;                        //@synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;                  //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) CKManualUpdater * displayUpdater;                                           //@synthesize displayUpdater=_displayUpdater - In the implementation block
@property (nonatomic,retain) UIImageView * overlay;                                                      //@synthesize overlay=_overlay - In the implementation block
@property (nonatomic,retain) CKInvisibleInkEffectController * invisibleInkEffectController;              //@synthesize invisibleInkEffectController=_invisibleInkEffectController - In the implementation block
@property (assign,nonatomic,__weak) id<CKBalloonViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char orientation;                                                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) BOOL hasTail;                                                               //@synthesize hasTail=_hasTail - In the implementation block
@property (assign,getter=isFilled,nonatomic) BOOL filled;                                                //@synthesize filled=_filled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textAlignmentInsets;                                           //@synthesize textAlignmentInsets=_textAlignmentInsets - In the implementation block
@property (getter=isShowingMenu,nonatomic,readonly) BOOL showingMenu;                                    //@synthesize showingMenu=_showingMenu - In the implementation block
@property (assign,nonatomic) BOOL canUseOpaqueMask;                                                      //@synthesize canUseOpaqueMask=_canUseOpaqueMask - In the implementation block
@property (assign,nonatomic) BOOL hasOverlay;                                                            //@synthesize hasOverlay=_hasOverlay - In the implementation block
@property (nonatomic,readonly) UIColor * overlayColor; 
@property (assign,nonatomic) BOOL wantsSkinnyMask;                                                       //@synthesize wantsSkinnyMask=_wantsSkinnyMask - In the implementation block
@property (assign,nonatomic) BOOL useLargeAsset;                                                         //@synthesize useLargeAsset=_useLargeAsset - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                                                   //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) CKBalloonDescriptor_t balloonDescriptor; 
@property (assign,nonatomic) char balloonShape;                                                          //@synthesize balloonShape=_balloonShape - In the implementation block
@property (assign,nonatomic) char balloonTailShape;                                                      //@synthesize balloonTailShape=_balloonTailShape - In the implementation block
@property (assign,nonatomic) unsigned long long balloonCorners;                                          //@synthesize balloonCorners=_balloonCorners - In the implementation block
@property (nonatomic,readonly) BOOL needsGroupOpacity; 
@property (nonatomic,retain) CABackdropLayer * backdropFilterLayer;                                      //@synthesize backdropFilterLayer=_backdropFilterLayer - In the implementation block
@property (assign,nonatomic) BOOL invisibleInkEffectEnabled; 
@property (assign,nonatomic) BOOL invisibleInkEffectPaused;                                              //@synthesize invisibleInkEffectPaused=_invisibleInkEffectPaused - In the implementation block
@property (nonatomic,readonly) Class invisibleInkEffectViewClass; 
@property (nonatomic,readonly) UIImage * imageForInvisibleInkEffectView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<CKBalloonViewDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CKBalloonViewDelegate>)delegate;
-(void)setOrientation:(char)arg1 ;
-(char)orientation;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(NSMutableArray *)filters;
-(void)prepareForReuse;
-(UIImageView *)overlay;
-(void)prepareForDisplay;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setFilled:(BOOL)arg1 ;
-(UIColor *)overlayColor;
-(BOOL)isFilled;
-(CKInvisibleInkEffectController *)invisibleInkEffectController;
-(void)setHasOverlay:(BOOL)arg1 autoDismiss:(BOOL)arg2 ;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)cullSubviewsWithVisibleBounds:(CGRect)arg1 ;
-(unsigned long long)balloonCorners;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)doubleTapGestureRecognized:(id)arg1 ;
-(void)longPressGestureRecognized:(id)arg1 ;
-(void)setDoubleTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setDisplayUpdater:(CKManualUpdater *)arg1 ;
-(void)setBalloonTailShape:(char)arg1 ;
-(void)setHasTail:(BOOL)arg1 ;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(void)setBalloonCorners:(unsigned long long)arg1 ;
-(void)setNeedsPrepareForDisplay;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)setTextAlignmentInsets:(UIEdgeInsets)arg1 ;
-(CKManualUpdater *)displayUpdater;
-(void)setHasOverlay:(BOOL)arg1 ;
-(void)setInvisibleInkEffectEnabled:(BOOL)arg1 ;
-(void)setInvisibleInkEffectPaused:(BOOL)arg1 ;
-(void)setOverlay:(UIImageView *)arg1 ;
-(void)_dismissOverlay;
-(BOOL)invisibleInkEffectPaused;
-(void)setInvisibleInkEffectController:(CKInvisibleInkEffectController *)arg1 ;
-(void)updateRasterizationForInvisibleInkEffect;
-(void)prepareForDisplayIfNeeded;
-(BOOL)wantsSkinnyMask;
-(void)setBalloonShape:(char)arg1 ;
-(void)setWantsSkinnyMask:(BOOL)arg1 ;
-(void)setUseLargeAsset:(BOOL)arg1 ;
-(char)balloonShape;
-(char)balloonTailShape;
-(BOOL)canUseOpaqueMask;
-(BOOL)hasTail;
-(BOOL)useLargeAsset;
-(BOOL)invisibleInkEffectEnabled;
-(void)invisibleInkEffectViewWasSuspended;
-(void)invisibleInkEffectViewWasResumed;
-(UIImage *)imageForInvisibleInkEffectView;
-(void)setHasOverlay:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)needsGroupOpacity;
-(void)setBackdropFilterLayer:(CABackdropLayer *)arg1 ;
-(void)setBalloonDescriptor:(CKBalloonDescriptor_t)arg1 ;
-(UIEdgeInsets)textAlignmentInsets;
-(BOOL)isShowingMenu;
-(BOOL)hasOverlay;
-(CABackdropLayer *)backdropFilterLayer;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)configureForComposition:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
-(void)configureForChatItem:(id)arg1 ;
@end

