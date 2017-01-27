/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITraitCollection, UILayoutGuide, _UIStackedImageContainerView, UIImage, NSArray, UIColor;

@interface UIImageView : UIView {

	id _storage;
	UIEdgeInsets _cachedEdgeInsetsForEffects;
	UITraitCollection* _lastResolvedTraitCollection;
	long long _lastResolvedLayoutDirectionTrait;
	BOOL _templateSettingsAreInvalid;
	BOOL _edgeInsetsForEffectsAreValid;
	BOOL _adjustsImageWhenAncestorFocused;
	BOOL __animatesContents;
	UILayoutGuide* _focusedFrameGuide;

}

@property (assign,setter=_setDefaultRenderingMode:,nonatomic) long long _defaultRenderingMode; 
@property (nonatomic,readonly) UIEdgeInsets _edgeInsetsForEffects; 
@property (assign,setter=_setEdgeInsetsForEffectsAreValid:,nonatomic) BOOL _edgeInsetsForEffectsAreValid;                              //@synthesize edgeInsetsForEffectsAreValid=_edgeInsetsForEffectsAreValid - In the implementation block
@property (assign,setter=_setMasksTemplateImages:,nonatomic) BOOL _masksTemplateImages; 
@property (nonatomic,readonly) BOOL _templateSettingsAreInvalid;                                                                       //@synthesize templateSettingsAreInvalid=_templateSettingsAreInvalid - In the implementation block
@property (assign,nonatomic) int drawMode; 
@property (assign,setter=_setTemplateImageRenderingEffects:,nonatomic) unsigned long long _templateImageRenderingEffects; 
@property (assign,setter=_setAnimatesContents:,nonatomic) BOOL _animatesContents;                                                      //@synthesize _animatesContents=__animatesContents - In the implementation block
@property (assign,setter=_setLayeredImageCornerRadius:,nonatomic) double _layeredImageCornerRadius; 
@property (nonatomic,readonly) _UIStackedImageContainerView * _layeredImageContainer; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * highlightedImage; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,copy) NSArray * animationImages; 
@property (nonatomic,copy) NSArray * highlightedAnimationImages; 
@property (assign,nonatomic) double animationDuration; 
@property (assign,nonatomic) long long animationRepeatCount; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
@property (assign,nonatomic) BOOL adjustsImageWhenAncestorFocused;                                                                     //@synthesize adjustsImageWhenAncestorFocused=_adjustsImageWhenAncestorFocused - In the implementation block
@property (readonly) UILayoutGuide * focusedFrameGuide;                                                                                //@synthesize focusedFrameGuide=_focusedFrameGuide - In the implementation block
+(id)_surfacePropertiesForRenderingCIImageWithSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 bytesPerElement:(unsigned long long)arg3 ;
+(BOOL)_canReuseIOSurface:(IOSurfaceRef)arg1 forRenderingCIImageWithIOSurfaceProperties:(id)arg2 ;
-(CGSize)alignmentSize;
-(CGRect)alignmentRect;
-(void)setAlignmentRect:(CGRect)arg1 ;
-(void)ic_enableLetterpressIfSupported;
-(id)pu_extractPlayOverlayBackgroundImageFromCenter:(CGPoint)arg1 asynchronously:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)nc_applyVibrantStyling:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(UIImage *)image;
-(UIEdgeInsets)alignmentRectInsets;
-(CGImageRef)imageRef;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)useBlockyMagnificationInClassic;
-(BOOL)_canDrawContent;
-(id)_generateBackdropMaskImage;
-(void)tintColorDidChange;
-(void)_ancestorWillUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setAnimationRepeatCount:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(unsigned long long)_templateImageRenderingEffects;
-(void)_setDefaultRenderingMode:(long long)arg1 ;
-(void)_setTemplateImageRenderingEffects:(unsigned long long)arg1 ;
-(BOOL)isHighlighted;
-(NSArray *)animationImages;
-(NSArray *)highlightedAnimationImages;
-(UIImage *)highlightedImage;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(long long)_defaultRenderingMode;
-(BOOL)_masksTemplateImages;
-(id)_currentImage;
-(id)_currentHighlightedImage;
-(BOOL)_shouldDrawImage:(id)arg1 ;
-(id)_cachedPretiledImageForImage:(id)arg1 ;
-(void)_updateLayerContentsForCIImageBackedImage:(id)arg1 ;
-(BOOL)_needsImageEffectsForImage:(id)arg1 ;
-(id)_effectiveTintColorWithImage:(id)arg1 ;
-(BOOL)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(BOOL)arg2 ;
-(void)_drawImageEffectsForImage:(id)arg1 inRect:(CGRect)arg2 ;
-(BOOL)isAnimating;
-(BOOL)_setImageViewContents:(id)arg1 ;
-(BOOL)_displayImageAsLayered:(id)arg1 ;
-(void)_configureForLayeredImage:(id)arg1 ;
-(_UIStackedImageContainerView *)_layeredImageContainer;
-(void)_teardownLayeredImage;
-(void)_setDecompressingImage:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)stopAnimating;
-(void)_clearPretiledImageCacheForImage:(id)arg1 ;
-(void)_updateImageViewForOldImage:(id)arg1 newImage:(id)arg2 ;
-(void)_updatePretiledImageCacheForImage:(id)arg1 ;
-(void)_updateState;
-(void)_updateTemplateProperties;
-(BOOL)_recomputePretilingState;
-(void)_setViewGeometry:(CGRect)arg1 forMetric:(int)arg2 ;
-(UIEdgeInsets)_edgeInsetsForEffects;
-(id)_activeImage;
-(id)_decompressingImageForType:(unsigned long long)arg1 ;
-(void)_resolveImageForTrait:(id)arg1 ;
-(BOOL)_shouldTreatImageAsTemplate:(id)arg1 ;
-(void)_updateMasking;
-(void)_templateSettingsDidChange;
-(void)_invalidateTemplateSettings;
-(BOOL)_getDrawModeCompositeOperation:(int*)arg1 color:(id*)arg2 andAlpha:(double*)arg3 ;
-(void)startAnimating;
-(BOOL)_animatesContents;
-(id)_adaptiveImageForImage:(id)arg1 assignedImage:(id)arg2 currentImage:(id)arg3 hasAdapted:(BOOL*)arg4 ;
-(void)_updateLayeredImageIsFocusedWithFocusedView:(id)arg1 focusAnimationCoordinator:(id)arg2 ;
-(void)_setLayeredImageContainer:(id)arg1 ;
-(id)_applyImageEffectsToCIImage:(id)arg1 effectiveTintColor:(id)arg2 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setAnimationImages:(NSArray *)arg1 ;
-(void)setHighlightedAnimationImages:(NSArray *)arg1 ;
-(id)_currentAnimationKeyframeImage;
-(double)animationDuration;
-(long long)animationRepeatCount;
-(void)_setMasksTemplateImages:(BOOL)arg1 ;
-(int)drawMode;
-(void)setDrawMode:(int)arg1 ;
-(void)setCGImageRef:(CGImageRef)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(id)_checkImageForAdaptation:(id)arg1 hasAdapted:(BOOL*)arg2 ;
-(id)_checkHighlightedImageForAdaptation:(id)arg1 hadAdapted:(BOOL*)arg2 ;
-(double)_layeredImageCornerRadius;
-(void)_setLayeredImageCornerRadius:(double)arg1 ;
-(BOOL)_templateSettingsAreInvalid;
-(BOOL)_edgeInsetsForEffectsAreValid;
-(void)_setEdgeInsetsForEffectsAreValid:(BOOL)arg1 ;
-(BOOL)adjustsImageWhenAncestorFocused;
-(void)setAdjustsImageWhenAncestorFocused:(BOOL)arg1 ;
-(UILayoutGuide *)focusedFrameGuide;
-(void)_setAnimatesContents:(BOOL)arg1 ;
-(unsigned long long)defaultAccessibilityTraits;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_applySettingsForLegibilityStyle:(long long)arg1 ;
@end
