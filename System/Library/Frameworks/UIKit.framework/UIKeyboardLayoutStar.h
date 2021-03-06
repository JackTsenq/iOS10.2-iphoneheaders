/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKeyboardLayout.h>
#import <UIKit/UIKBEmojiHitTestResponder.h>

@class UIKBTree, NSString, UIKBKeyplaneView, UIKBBackgroundView, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, NSMutableDictionary, NSMutableSet, UISwipeGestureRecognizer, UIKeyboardKeyplaneTransition, UIKeyboardSplitTransitionView, CADisplayLink, UIDelayedAction, UIView, NSTimer, _UIKeyboardTypingSpeedLogger, UIKBRenderConfig, NSMutableArray, NSNumber, NSDate, _UIFeedbackRetargetBehavior;

@interface UIKeyboardLayoutStar : UIKeyboardLayout <UIKBEmojiHitTestResponder> {

	UIKBTree* _keyboard;
	UIKBTree* _keyplane;
	NSString* _keyboardName;
	NSString* _keyplaneName;
	long long _appearance;
	UIKBTree* _activeKey;
	UIKBTree* _inactiveLanguageIndicator;
	UIKBKeyplaneView* _keyplaneView;
	UIKBBackgroundView* _backgroundView;
	UIKBKeyViewAnimator* _keyViewAnimator;
	UIKeyboardEmojiKeyDisplayController* _emojiKeyManager;
	double _prevTouchUpTime;
	double _prevTouchUpFinishedTime;
	double _prevTouchDownTime;
	unsigned long long _prevUpActions;
	NSMutableDictionary* _keyboards;
	NSMutableDictionary* _allKeyplaneViews;
	NSMutableSet* _allKeyplaneKeycaps;
	NSMutableSet* _validInputStrings;
	NSString* _localizedInputKey;
	CFDictionaryRef _extendedTouchInfoMap;
	int _preferredTrackingChangeCount;
	int _shiftTrackingChangeCount;
	NSMutableSet* _accentInfo;
	NSMutableSet* _hasAccents;
	id _spaceTarget;
	SEL _spaceAction;
	SEL _spaceLongAction;
	id _returnTarget;
	SEL _returnAction;
	SEL _returnLongAction;
	id _deleteTarget;
	SEL _deleteAction;
	SEL _deleteLongAction;
	BOOL _shift;
	BOOL _autoshift;
	BOOL _settingShift;
	BOOL _holdingShift;
	BOOL _didLongPress;
	NSString* _preTouchKeyplaneName;
	BOOL _revertKeyplaneAfterTouch;
	BOOL _wasShifted;
	BOOL _swipeDetected;
	BOOL _showIntlKey;
	BOOL _showDictationKey;
	BOOL _suppressDeactivateKeys;
	BOOL _suppressKeyplaneAnimation;
	BOOL _isTrackpadMode;
	BOOL _shiftLockReady;
	double _shiftLockFirstTapTime;
	UISwipeGestureRecognizer* _rightSwipeRecognizer;
	UISwipeGestureRecognizer* _leftSwipeRecognizer;
	UISwipeGestureRecognizer* _upSwipeRecognizer;
	UIKeyboardKeyplaneTransition* _keyplaneTransition;
	UIKeyboardSplitTransitionView* _transitionView;
	double _initialSplitProgress;
	double _finalSplitProgress;
	double _initialPinchSeparation;
	double _pinchSeparationValues[4];
	BOOL _pinchDetected;
	double _autoSplitLastUpdate;
	double _autoSplitElapsedTime;
	CADisplayLink* _displayLink;
	BOOL _ghostKeysEnabled;
	UIDelayedAction* _delayedCentroidUpdate;
	BOOL _isRebuilding;
	long long _initialBias;
	long long _transitionTargetBias;
	BOOL _edgeSwipeDetected;
	double _initialEdgeTranslation;
	double _edgeSwipeProgress;
	double _edgeSwipeVelocity;
	NSString* _layoutTag;
	BOOL _preRotateShift;
	NSString* _preRotateKeyplaneName;
	BOOL _preRotateTrackpadMode;
	UIDelayedAction* _multitapAction;
	BOOL _unshiftAfterMultitap;
	int _multitapCount;
	UIKBTree* _multitapKey;
	UIView* _flickPopupView;
	NSMutableDictionary* _compositeImages;
	NSTimer* _flickPopuptimer;
	id _touchInfo;
	UIView* _dimKeyboardImageView;
	BOOL _keyboardImageViewIsDim;
	BOOL _isOutOfBounds;
	NSMutableSet* _keysUnderIndicator;
	_UIKeyboardTypingSpeedLogger* _typingSpeedLogger;
	UIKBRenderConfig* _passcodeRenderConfig;
	long long _setKeyplaneViewCount;
	BOOL _inputTraitsPreventInitialReuse;
	BOOL _settingFloat;
	NSMutableSet* _leftKeySet;
	NSMutableSet* _rightKeySet;
	CGPoint _leftDriftOffset;
	CGPoint _rightDriftOffset;
	NSMutableArray* _leftSideReachability;
	NSMutableArray* _rightSideReachability;
	NSNumber* _homeRowHint;
	double _touchDownTimeSpan;
	NSDate* _prevTouchMoreKeyTime;
	NSString* _lastInputMode;
	BOOL _pendingDictationReload;
	BOOL _muteNextKeyClickSound;
	int playKeyClickSoundOn;
	int _rightSwipeFunction;
	int _leftSwipeFunction;
	int _downSwipeFunction;
	UIKBRenderConfig* _renderConfig;
	UIView* _modalDisplayView;
	_UIFeedbackRetargetBehavior* _slideBehaviour;
	double _lastTwoFingerTapTimestamp;

}

@property (assign,nonatomic) int playKeyClickSoundOn; 
@property (assign,nonatomic) BOOL muteNextKeyClickSound;                                //@synthesize muteNextKeyClickSound=_muteNextKeyClickSound - In the implementation block
@property (assign) int rightSwipeFunction;                                              //@synthesize rightSwipeFunction=_rightSwipeFunction - In the implementation block
@property (assign) int leftSwipeFunction;                                               //@synthesize leftSwipeFunction=_leftSwipeFunction - In the implementation block
@property (assign) int downSwipeFunction;                                               //@synthesize downSwipeFunction=_downSwipeFunction - In the implementation block
@property (nonatomic,retain) _UIFeedbackRetargetBehavior * slideBehaviour;              //@synthesize slideBehaviour=_slideBehaviour - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyboard;                                     //@synthesize keyboard=_keyboard - In the implementation block
@property (nonatomic,readonly) UIKBTree * keyplane;                                     //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,copy) NSString * keyboardName;                                     //@synthesize keyboardName=_keyboardName - In the implementation block
@property (nonatomic,copy) NSString * keyplaneName;                                     //@synthesize keyplaneName=_keyplaneName - In the implementation block
@property (nonatomic,readonly) NSString * localizedInputMode; 
@property (nonatomic,copy) NSString * localizedInputKey;                                //@synthesize localizedInputKey=_localizedInputKey - In the implementation block
@property (nonatomic,retain) UIKBTree * activeKey;                                      //@synthesize activeKey=_activeKey - In the implementation block
@property (assign,nonatomic) BOOL shift;                                                //@synthesize shift=_shift - In the implementation block
@property (assign,nonatomic) BOOL autoShift;                                            //@synthesize autoshift=_autoshift - In the implementation block
@property (assign,nonatomic) BOOL didLongPress;                                         //@synthesize didLongPress=_didLongPress - In the implementation block
@property (getter=isRotating,nonatomic,readonly) BOOL rotating; 
@property (nonatomic,readonly) BOOL showsInternationalKey;                              //@synthesize showIntlKey=_showIntlKey - In the implementation block
@property (nonatomic,readonly) BOOL showsDictationKey;                                  //@synthesize showDictationKey=_showDictationKey - In the implementation block
@property (nonatomic,copy) NSString * preTouchKeyplaneName;                             //@synthesize preTouchKeyplaneName=_preTouchKeyplaneName - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                           //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) NSString * layoutTag;                                      //@synthesize layoutTag=_layoutTag - In the implementation block
@property (nonatomic,retain) UIView * modalDisplayView;                                 //@synthesize modalDisplayView=_modalDisplayView - In the implementation block
@property (assign,nonatomic) double lastTwoFingerTapTimestamp;                          //@synthesize lastTwoFingerTapTimestamp=_lastTwoFingerTapTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3 ;
+(Class)_subclassForScreenTraits:(id)arg1 ;
+(void)accessibilitySensitivityChanged;
+(id)keyboardFromFactoryWithName:(id)arg1 screen:(id)arg2 ;
+(id)keyboardWithName:(id)arg1 screenTraits:(id)arg2 ;
+(id)sharedRivenKeyplaneGenerator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShift:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIKBRenderConfig *)renderConfig;
-(id)emojiKeyManager;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)deactivateActiveKey;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(double)lastTouchUpTimestamp;
-(BOOL)isRotating;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(void)setDidLongPress:(BOOL)arg1 ;
-(BOOL)didLongPress;
-(UIKBTree *)keyboard;
-(void)setSplitProgress:(double)arg1 ;
-(void)logHandwritingData;
-(id)candidateList;
-(CGRect)dragGestureRectInView:(id)arg1 ;
-(void)clearUnusedObjects:(BOOL)arg1 ;
-(void)clearTransientState;
-(BOOL)isAlphabeticPlane;
-(BOOL)hasCandidateKeys;
-(BOOL)hasAccentKey;
-(BOOL)canMultitap;
-(BOOL)diacriticForwardCompose;
-(NSString *)layoutTag;
-(void)setLayoutTag:(NSString *)arg1 ;
-(id)currentKeyplane;
-(void)deactivateActiveKeys;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(BOOL)pinchDetected;
-(BOOL)pinchSplitGestureEnabled;
-(void)showSplitTransitionView:(BOOL)arg1 ;
-(BOOL)shouldShowIndicator;
-(id)activationIndicatorView;
-(void)setHideKeysUnderIndicator:(BOOL)arg1 ;
-(BOOL)keyplaneContainsEmojiKey;
-(void)willRotate;
-(void)didRotate;
-(BOOL)performReturnAction;
-(void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3 ;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)setAutoshift:(BOOL)arg1 ;
-(void)fadeWithInvocation:(id)arg1 ;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(void)deleteHandwritingStrokesAtIndexes:(id)arg1 ;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)updateKeyCentroids;
-(void)restoreDefaultsForKey:(id)arg1 ;
-(unsigned long long)textEditingKeyMask;
-(void)setTextEditingTraits:(id)arg1 ;
-(void)triggerSpaceKeyplaneSwitchIfNecessary;
-(void)didClearInput;
-(void)restoreDefaultsForAllKeys;
-(void)updateBackgroundCorners;
-(void)setTarget:(id)arg1 forKey:(id)arg2 ;
-(void)setAction:(SEL)arg1 forKey:(id)arg2 ;
-(void)setLongPressAction:(SEL)arg1 forKey:(id)arg2 ;
-(BOOL)canProduceString:(id)arg1 ;
-(double)hitBuffer;
-(void)longPressAction;
-(void)setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(BOOL)usesAutoShift;
-(BOOL)ignoresShiftState;
-(BOOL)isShiftKeyPlaneChooser;
-(BOOL)isShiftKeyBeingHeld;
-(void)updateLocalizedKeys:(BOOL)arg1 ;
-(void)setSplit:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)finishSplitTransitionWithProgress:(double)arg1 ;
-(NSString *)keyplaneName;
-(NSString *)keyboardName;
-(NSString *)localizedInputMode;
-(void)setDisableInteraction:(BOOL)arg1 ;
-(void)setPreferredHeight:(double)arg1 ;
-(void)setPasscodeOutlineAlpha:(double)arg1 ;
-(id)baseKeyForString:(id)arg1 ;
-(id)keyplaneForKey:(id)arg1 ;
-(id)keyplaneNamed:(id)arg1 ;
-(void)changeToKeyplane:(id)arg1 ;
-(id)simulateTouch:(CGPoint)arg1 ;
-(id)simulateTouchForCharacter:(id)arg1 errorVector:(CGPoint)arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4 ;
-(SEL)handlerForNotification:(id)arg1 ;
-(void)touchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)touchDragged:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)canForceTouchUUIDCommit:(id)arg1 inWindow:(id)arg2 ;
-(void)didFinishScreenGestureRecognition;
-(void)touchUp:(id)arg1 executionContext:(id)arg2 ;
-(void)touchCancelled:(id)arg1 forResting:(BOOL)arg2 executionContext:(id)arg3 ;
-(void)touchChanged:(id)arg1 executionContext:(id)arg2 ;
-(void)handRestRecognizerNotifyRestForBegin:(BOOL)arg1 location:(CGPoint)arg2 timestamp:(double)arg3 pathIndex:(int)arg4 touchUUID:(id)arg5 context:(id)arg6 ;
-(BOOL)handRestRecognizerShouldNeverIgnoreTouchState:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 forRestingState:(unsigned long long)arg4 otherRestedTouchLocations:(id)arg5 ;
-(BOOL)_handRestRecognizerCancelShouldBeEnd;
-(CGSize)handRestRecognizerStandardKeyPixelSize;
-(CGPoint)getCenterForKeyUnderLeftIndexFinger;
-(CGPoint)getCenterForKeyUnderRightIndexFinger;
-(id)getHorizontalOffsetFromHomeRowForRowRelativeToHomeRow:(long long)arg1 ;
-(unsigned long long)targetEdgesForScreenGestureRecognition;
-(unsigned char)getHandRestRecognizerState;
-(void)didRecognizeGestureOnEdge:(unsigned long long)arg1 withDistance:(double)arg2 ;
-(void)setNeedsVirtualDriftUpdate;
-(BOOL)performSpaceAction;
-(void)deactivateActiveKeysClearingTouchInfo:(BOOL)arg1 clearingDimming:(BOOL)arg2 ;
-(void)touchCancelled:(id)arg1 executionContext:(id)arg2 ;
-(/*^block*/id)handRestRecognizerSilenceNextTouchDown;
-(void)willBeginIndirectSelectionGesture;
-(void)didEndIndirectSelectionGesture;
-(void)cancelTouchesForTwoFingerTapGesture:(id)arg1 ;
-(BOOL)keyplaneContainsDismissKey;
-(BOOL)isEmojiKeyplane;
-(BOOL)supportsEmoji;
-(void)installGestureRecognizers;
-(CGImageRef)renderedImageWithToken:(id)arg1 ;
-(BOOL)showsInternationalKey;
-(BOOL)showsDictationKey;
-(UIKBTree *)keyplane;
-(void)refreshForDictationAvailablityDidChange;
-(void)nextToUseInputModeDidChange:(id)arg1 ;
-(void)setRightSwipeFunction:(int)arg1 ;
-(void)setLeftSwipeFunction:(int)arg1 ;
-(void)setDownSwipeFunction:(int)arg1 ;
-(void)uninstallGestureRecognizers;
-(void)cancelMultitapTimer;
-(void)accessibilitySensitivityChanged;
-(BOOL)shouldDeactivateWithoutWindow;
-(UIView *)modalDisplayView;
-(void)setModalDisplayView:(UIView *)arg1 ;
-(void)cancelDelayedCentroidUpdate;
-(void)clearAllTouchInfo;
-(void)handleDismissFlickView:(id)arg1 ;
-(void)setActiveKey:(UIKBTree *)arg1 ;
-(void)setPreTouchKeyplaneName:(NSString *)arg1 ;
-(id)defaultNameForKeyplaneName:(id)arg1 ;
-(id)splitNameForKeyplaneName:(id)arg1 ;
-(CGRect)frameForKeylayoutName:(id)arg1 onKeyplaneName:(id)arg2 ;
-(int)visualStyleForKeyboardIfSplit:(BOOL)arg1 ;
-(void)updateBackgroundIfNeeded;
-(void)setLocalizedInputKey:(NSString *)arg1 ;
-(void)setKeyplaneName:(NSString *)arg1 ;
-(void)refreshForRivenPreferences;
-(void)updateLocalizedDisplayStringOnEmojiInternationalWithKeyplane:(id)arg1 withInputMode:(id)arg2 ;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(int)displayTypeHintForShiftKey;
-(int)displayTypeHintForMoreKey;
-(BOOL)shouldMatchCaseForDomainKeys;
-(void)setCurrencyKeysForCurrentLocaleOnKeyplane:(id)arg1 ;
-(void)setPercentSignKeysForCurrentLocaleOnKeyplane:(id)arg1 ;
-(void)updateLocalizedKeysOnKeyplane:(id)arg1 ;
-(CGImageRef)cachedCompositeImageWithCacheKey:(id)arg1 ;
-(CGImageRef)renderedImageWithStateFallbacksForToken:(id)arg1 ;
-(int)stateForKey:(id)arg1 ;
-(void)willBeginIndirectSelectionGesture:(BOOL)arg1 ;
-(void)clearHandwritingStrokesIfNeededAndNotify:(BOOL)arg1 ;
-(void)didEndIndirectSelectionGesture:(BOOL)arg1 ;
-(BOOL)shouldShowDictationKey;
-(BOOL)handwritingPlane;
-(id)keyHitTestClosestToPoint:(CGPoint)arg1 ;
-(UIKBTree *)activeKey;
-(unsigned long long)downActionFlagsForKey:(id)arg1 ;
-(long long)defaultSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 ;
-(void)setLastTwoFingerTapTimestamp:(double)arg1 ;
-(BOOL)globeKeyDisplaysAsEmojiKey;
-(BOOL)canReuseKeyplaneView;
-(BOOL)shouldAllowCurrentKeyplaneReload;
-(unsigned long long)keyplaneShiftState;
-(id)keyViewAnimator;
-(id)splitNameForKeyplane:(id)arg1 ;
-(BOOL)useScaledGeometrySet;
-(void)updateKeyboardForKeyplane:(id)arg1 ;
-(id)cacheTokenForKeyplane:(id)arg1 caseAlternates:(BOOL)arg2 ;
-(id)defaultKeyplaneForKeyplane:(id)arg1 ;
-(void)clearKeyAnnotationsIfNecessary;
-(void)annotateKeysWithDeveloperPunctuation;
-(void)annotateKeysForGestures;
-(void)annotateWriteboardDisplayTypeHintForKeyIfNeeded;
-(id)cacheIdentifierForKeyplaneNamed:(id)arg1 ;
-(void)mergeKeysIfNeeded;
-(int)stateForShiftKey:(id)arg1 ;
-(int)stateForKeyplaneSwitchKey:(id)arg1 ;
-(int)stateForMultitapReverseKey:(id)arg1 ;
-(int)stateForCandidateListKey:(id)arg1 ;
-(int)stateForDictationKey:(id)arg1 ;
-(int)stateForStylingKey:(id)arg1 ;
-(int)stateForManipulationKey:(id)arg1 ;
-(void)updateLayoutTags;
-(void)updateCachedKeyplaneKeycaps;
-(void)updateGlobeKeyDisplayString;
-(void)setKeyboardDim:(BOOL)arg1 ;
-(void)rebuildSplitTransitionView;
-(BOOL)useDismissForMessagesWriteboard;
-(BOOL)useUndoForMessagesWriteboard;
-(void)_setReturnKeyEnabled:(BOOL)arg1 withDisplayName:(id)arg2 withType:(int)arg3 ;
-(void)updateTransitionWithFlags:(unsigned long long)arg1 ;
-(BOOL)_stringContainsCurrencyCharacters:(id)arg1 ;
-(void)updateCurrencySymbolForKey:(id)arg1 withCurrencyString:(id)arg2 ;
-(id)keyWithRepresentedString:(id)arg1 ;
-(BOOL)supportStylingWithKey:(id)arg1 ;
-(id)highlightedVariantListForStylingKey:(id)arg1 ;
-(void)relayoutForWriteboardKey;
-(void)updateMoreAndInternationalKeys;
-(void)updateReturnKeysIfNeeded;
-(BOOL)shouldMergeKey:(id)arg1 ;
-(id)keylistContainingKey:(id)arg1 ;
-(id)inputModeToMergeCapsLockKey;
-(void)cleanupPreviousKeyboardWithNewInputTraits:(id)arg1 ;
-(void)setKeyboardName:(id)arg1 appearance:(long long)arg2 ;
-(void)setToInitialKeyplane;
-(BOOL)shouldUseDefaultShiftStateFromLayout;
-(id)initialKeyplaneNameWithKBStarName:(id)arg1 ;
-(_UIFeedbackRetargetBehavior *)slideBehaviour;
-(void)setSlideBehaviour:(_UIFeedbackRetargetBehavior *)arg1 ;
-(BOOL)shouldHitTestKey:(id)arg1 ;
-(id)keyViewHitTestForPoint:(CGPoint)arg1 ;
-(id)keyHitTestContainingPoint:(CGPoint)arg1 ;
-(id)keyHitTestWithoutCharging:(CGPoint)arg1 ;
-(id)keyHitTest:(CGPoint)arg1 ;
-(BOOL)shouldPreventInputManagerHitTestingForKey:(id)arg1 ;
-(int)keycodeForKey:(id)arg1 ;
-(BOOL)isLongPressedKey:(id)arg1 ;
-(BOOL)isDeadkeyInput:(id)arg1 ;
-(void)updatePhysicalKeyboardEvent:(id)arg1 withMarkedInput:(id)arg2 ;
-(id)multitapCompleteKeys;
-(void)multitapInterrupted;
-(void)endMultitapForKey:(id)arg1 ;
-(void)multitapExpired;
-(void)handleMultitapTimerFired;
-(id)activeMultitapCompleteKey;
-(id)touchInfoForKey:(id)arg1 ;
-(void)showPopupVariantsForKey:(id)arg1 ;
-(void)showMenu:(id)arg1 forKey:(id)arg2 ;
-(void)playKeyClickSoundForKey:(id)arg1 ;
-(void)completeCommitTouchesPrecedingTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(id)_appendingSecondaryStringToVariantsTop:(id)arg1 secondaryString:(id)arg2 withDirection:(id)arg3 ;
-(id)_keyplaneVariantsKeyForString:(id)arg1 ;
-(id)_variantsByAppendingDualStringKey:(id)arg1 toVariants:(id)arg2 ;
-(void)setKeyboardDim:(BOOL)arg1 amount:(double)arg2 withDuration:(double)arg3 ;
-(BOOL)keyHasAccentedVariants:(id)arg1 ;
-(unsigned long long)upActionFlagsForKey:(id)arg1 ;
-(id)handRestRecognizerGetHomeRowHint;
-(id)getSortedKeysForDisplayRowHint:(int)arg1 ;
-(void)setMuteNextKeyClickSound:(BOOL)arg1 ;
-(long long)biasForKeyboard:(id)arg1 ;
-(id)keyboardLayoutWithBias:(long long)arg1 ;
-(BOOL)edgeSwipeGestureEnabled;
-(long long)currentKeyboardBias;
-(void)rebuildKeyplaneTransitionWithTargetBias:(long long)arg1 ;
-(void)finishHandBiasTransition;
-(void)flushKeyCache:(id)arg1 ;
-(void)prepareForSplitTransition;
-(void)setPlayKeyClickSoundOn:(int)arg1 ;
-(void)finishSplitTransitionWithCompletion:(/*^block*/id)arg1 ;
-(double)interpretPinchSeparationValues;
-(void)finishSplitWithCompletion:(/*^block*/id)arg1 ;
-(void)finishSplitTransition;
-(void)_autoSplit:(id)arg1 ;
-(double)lastTwoFingerTapTimestamp;
-(id)generateInfoForTouch:(id)arg1 ;
-(void)completeHitTestForTouchDown:(id)arg1 executionContext:(id)arg2 ;
-(void)performHitTestForTouchInfo:(id)arg1 touchStage:(int)arg2 executionContextPassingUIKBTree:(id)arg3 ;
-(void)calculateReachabilityScoreWithKey:(id)arg1 keyError:(CGPoint)arg2 ;
-(void)clearInfoForTouch:(id)arg1 ;
-(id)flickPopupStringForKey:(id)arg1 withString:(id)arg2 ;
-(void)handlePopupView:(id)arg1 ;
-(void)touchDownWithKey:(id)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(BOOL)muteNextKeyClickSound;
-(int)playKeyClickSoundOn;
-(BOOL)shouldSkipResponseToGlobeKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)hideMenu:(id)arg1 forKey:(id)arg2 ;
-(void)updateSelectedVariantIndexForKey:(id)arg1 withActions:(unsigned long long)arg2 withPoint:(CGPoint)arg3 ;
-(void)playKeyClickSoundOnDownForKey:(id)arg1 ;
-(BOOL)shouldCommitPrecedingTouchesForTouchDownWithActions:(unsigned long long)arg1 ;
-(id)createKeyEventForStringAction:(id)arg1 forKey:(id)arg2 isPopupVariant:(BOOL)arg3 isMultitap:(BOOL)arg4 isFlick:(BOOL)arg5 ;
-(void)incrementPunctuationIfNeeded:(id)arg1 ;
-(void)completeSendStringActionForTouchDownWithKey:(id)arg1 withActions:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(NSString *)preTouchKeyplaneName;
-(id)keyplaneNameForRevertAfterTouch;
-(void)downActionShiftWithKey:(id)arg1 ;
-(id)synthesizeTouchUpEventForKey:(id)arg1 ;
-(void)completeDeleteActionForTouchDownWithActions:(unsigned long long)arg1 executionContext:(id)arg2 ;
-(id)infoForTouchUUID:(id)arg1 ;
-(id)infoForTouch:(id)arg1 ;
-(void)interpretTouchesForSplit;
-(BOOL)touchPassesDragThreshold:(id)arg1 ;
-(void)updatePanAlternativesForTouchInfo:(id)arg1 ;
-(void)handleFlick:(id)arg1 ;
-(BOOL)shouldRetestTouchDraggedFromKey:(id)arg1 ;
-(void)completeHitTestForTouchDragged:(id)arg1 hitKey:(id)arg2 ;
-(void)refreshGhostKeyState;
-(void)resetPanAlternativesForEndedTouch:(id)arg1 ;
-(BOOL)shouldRetestKey:(id)arg1 withKeyplane:(id)arg2 ;
-(id)activeTouchInfoForShift;
-(void)completeRetestForTouchUp:(id)arg1 timestamp:(double)arg2 interval:(double)arg3 executionContext:(id)arg4 ;
-(BOOL)shouldSendTouchUpToInputManager:(id)arg1 ;
-(void)touchMultitapTimer;
-(int)downSwipeFunction;
-(int)leftSwipeFunction;
-(int)rightSwipeFunction;
-(BOOL)shouldSendStringForFlick:(id)arg1 ;
-(id)flickStringForInputKey:(id)arg1 direction:(int)arg2 ;
-(void)completeSendStringActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(BOOL)shouldYieldToControlCenterForFlickWithInitialPoint:(CGPoint)arg1 finalPoint:(CGPoint)arg2 ;
-(void)continueFromInternationalActionForTouchUp:(id)arg1 withActions:(unsigned long long)arg2 timestamp:(double)arg3 interval:(double)arg4 didLongPress:(BOOL)arg5 prevActions:(unsigned long long)arg6 executionContext:(id)arg7 ;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 ;
-(void)upActionShift;
-(void)fadeMenu:(id)arg1 forKey:(id)arg2 withDelay:(double)arg3 ;
-(void)setMultitapReverseKeyState;
-(void)handleKeyboardMenusForTouch:(id)arg1 ;
-(void)clearInfoForTouch:(id)arg1 forResting:(BOOL)arg2 ;
-(void)updateShiftKeyState;
-(void)swipeDetected:(id)arg1 ;
-(void)cancelTouchIfNecessaryForInfo:(id)arg1 forResting:(BOOL)arg2 ;
-(void)divideKeysIntoLeft:(id)arg1 right:(id)arg2 ;
-(CGPoint)applyError:(CGPoint)arg1 toKey:(id)arg2 ;
-(CGImageRef)renderedKeyplaneWithToken:(id)arg1 split:(BOOL)arg2 ;
-(void)handleDelayedCentroidUpdate;
-(id)currentKeyplaneView;
-(void)setKeyboardName:(NSString *)arg1 ;
-(BOOL)shift;
-(BOOL)autoShift;
-(void)setAutoShift:(BOOL)arg1 ;
-(NSString *)localizedInputKey;
-(CGRect)frameForKeyWithRepresentedString:(id)arg1 ;
-(CGRect)frameForLastKeyWithRepresentedString:(id)arg1 ;
-(id)popupKeyViews;
-(void)setKeyForTouchInfo:(id)arg1 key:(id)arg2 ;
-(void)showPopupView:(int)arg1 withKey:(id)arg2 popupInfo:(id)arg3 force:(BOOL)arg4 ;
-(void)showFlickView:(int)arg1 withKey:(id)arg2 flickString:(id)arg3 ;
-(void)populateFlickPopupsForKey:(id)arg1 ;
-(void)handlePopupView;
-(void)handleDismissFlickView;
@end

