/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <UIKit/UIResponder.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIFocusItem.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSArray, SKReachConstraints, GKEntity, NSDictionary, SKScene, SKPhysicsBody, UIView;

@interface SKNode : UIResponder <NSCopying, NSCoding, UIFocusItem> {

	SKCNode* _skcNode;
	SKNode* _parent;
	NSMutableArray* _children;
	NSMutableArray* _actions;
	NSMutableDictionary* _keyedActions;
	NSMutableDictionary* _keyedSubSprites;
	NSMutableDictionary* _info;
	NSMutableDictionary* _attributeValues;
	NSString* _name;
	NSMutableDictionary* _userData;
	NSArray* _constraints;
	unsigned _version;
	BOOL _userInteractionEnabled;
	BOOL _performFullCapture;
	SKReachConstraints* _reachConstraints;
	GKEntity* _entity;

}

@property (assign,nonatomic,__weak) GKEntity * entity; 
@property (nonatomic,readonly) SCD_Struct_SK5 globalBoundingVerts; 
@property (nonatomic,readonly) SCD_Struct_SK5 globalAccumulatedBoundingVerts; 
@property (nonatomic,readonly) const CGPathRef outline; 
@property (assign,nonatomic) BOOL _showBounds; 
@property (nonatomic,readonly) CGRect _untransformedBounds; 
@property (assign,nonatomic) CGPoint _anchorPoint; 
@property (nonatomic,readonly) CGSize _size; 
@property (nonatomic,retain) NSMutableDictionary * _info; 
@property (nonatomic,readonly) NSArray * _allActions; 
@property (nonatomic,readonly) shared_ptr<PKCAether>* _aether; 
@property (assign,nonatomic,__weak) GKEntity * entity;                                                 //@synthesize entity=_entity - In the implementation block
@property (assign) BOOL performFullCapture;                                                            //@synthesize performFullCapture=_performFullCapture - In the implementation block
@property (nonatomic,readonly) SKCNode* _backingNode; 
@property (assign,nonatomic) double xRotation; 
@property (assign,nonatomic) double yRotation; 
@property (nonatomic,copy) NSDictionary * attributeValues; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double zPosition; 
@property (assign,nonatomic) double zRotation; 
@property (assign,nonatomic) double xScale; 
@property (assign,nonatomic) double yScale; 
@property (assign,nonatomic) double speed; 
@property (assign,nonatomic) double alpha; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (nonatomic,readonly) SKNode * parent; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,copy) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SKScene * scene; 
@property (nonatomic,retain) SKPhysicsBody * physicsBody; 
@property (nonatomic,retain) NSMutableDictionary * userData;                                           //@synthesize userData=_userData - In the implementation block
@property (nonatomic,copy) SKReachConstraints * reachConstraints;                                      //@synthesize reachConstraints=_reachConstraints - In the implementation block
@property (nonatomic,copy) NSArray * constraints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
+(id)obstaclesFromSpriteTextures:(id)arg1 accuracy:(float)arg2 ;
+(id)obstaclesFromNodeBounds:(id)arg1 ;
+(id)obstaclesFromNodePhysicsBodies:(id)arg1 ;
+(id)node;
+(id)nodeWithFileNamed:(id)arg1 ;
+(id)nodeFromCaptureData:(id)arg1 ;
-(NSDictionary *)attributeValues;
-(id)init;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(void)setAlpha:(double)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(CGRect)frame;
-(NSString *)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)copy;
-(void)setSpeed:(double)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setScale:(double)arg1 ;
-(id)containingView;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(double)alpha;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setNeedsFocusUpdate;
-(BOOL)isUserInteractionEnabled;
-(double)speed;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(void)updateFocusIfNeeded;
-(id)_parentFocusEnvironment;
-(NSArray *)constraints;
-(CGPoint)position;
-(BOOL)_isEligibleForFocus;
-(BOOL)canBecomeFocused;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(CGSize)_size;
-(void)setZPosition:(double)arg1 ;
-(NSMutableDictionary *)_info;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)removeAllActions;
-(void)removeChild:(id)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(NSMutableDictionary *)userData;
-(void)setUserData:(NSMutableDictionary *)arg1 ;
-(BOOL)hasActions;
-(void)_update:(double)arg1 ;
-(BOOL)isPaused;
-(GKEntity *)entity;
-(void)setEntity:(GKEntity *)arg1 ;
-(NSArray *)_allActions;
-(BOOL)hasChildren;
-(BOOL)intersectsNode:(id)arg1 ;
-(NSArray *)children;
-(SKNode *)parent;
-(void)setParent:(SKNode *)arg1 ;
-(void)setPhysicsBody:(SKPhysicsBody *)arg1 ;
-(SKPhysicsBody *)physicsBody;
-(double)zPosition;
-(SKCNode*)_backingNode;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)removeChildrenInArray:(id)arg1 ;
-(void)_removeChild:(id)arg1 ;
-(void)_removeAction:(id)arg1 ;
-(void)enumerateChildNodesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_descendants;
-(CGPoint)convertPoint:(CGPoint)arg1 fromNode:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toNode:(id)arg2 ;
-(id)_descendantsWithPredicate:(/*^block*/id)arg1 ;
-(CGPoint)convertPointFromParent:(CGPoint)arg1 ;
-(CGPoint)convertPointToParent:(CGPoint)arg1 ;
-(void)set_anchorPoint:(CGPoint)arg1 ;
-(double)xRotation;
-(void)setXRotation:(double)arg1 ;
-(double)yRotation;
-(void)setYRotation:(double)arg1 ;
-(SKReachConstraints *)reachConstraints;
-(void)runAction:(id)arg1 withKey:(id)arg2 ;
-(BOOL)performFullCapture;
-(id)_copyImageData;
-(void)setPerformFullCapture:(BOOL)arg1 ;
-(id)archiveToFile:(id)arg1 ;
-(void)debugPrint;
-(void)_initAccessibility;
-(Class)swiftClassFromString:(id)arg1 moduleName:(id)arg2 ;
-(void)setAttributeValues:(NSDictionary *)arg1 ;
-(void)_runAction:(id)arg1 ;
-(void)addChild:(id)arg1 withKey:(id)arg2 ;
-(void)setReachConstraints:(SKReachConstraints *)arg1 ;
-(void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(/*^block*/id)arg2 stopPointer:(BOOL*)arg3 ;
-(void)_processSearchTokens:(vector<Token, std::__1::allocator<Token> >*)arg1 visited:(set<SKNode *, std::__1::less<SKNode *>, std::__1::allocator<SKNode *> >*)arg2 usingBlock:(/*^block*/id)arg3 stopPointer:(BOOL*)arg4 ;
-(void)_descendantsToMutableArray:(id)arg1 ;
-(void)_descendantsWithPredicate:(/*^block*/id)arg1 toMutableArray:(id)arg2 ;
-(BOOL)intersectsNode:(id)arg1 useAlphaTest:(BOOL)arg2 ;
-(shared_ptr<PKCAether>*)_aether;
-(void)moveToParent:(id)arg1 ;
-(BOOL)inParentHierarchy:(id)arg1 ;
-(void)removeChildAtIndex:(long long)arg1 ;
-(void)removeAllChildren;
-(void)_performCleanup;
-(void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2 ;
-(void)_flippedChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(BOOL)containsPoint:(CGPoint)arg1 withRadius:(double)arg2 ;
-(id)nodeAtPoint:(CGPoint)arg1 ;
-(id)nodesAtPoint:(CGPoint)arg1 ;
-(BOOL)hasUniformAlphaAndIsVisible;
-(SCD_Struct_SK5)globalBoundingVerts;
-(SCD_Struct_SK5)globalAccumulatedBoundingVerts;
-(id)valueForAttributeNamed:(id)arg1 ;
-(void)setValue:(id)arg1 forAttributeNamed:(id)arg2 ;
-(void)_debugPrint:(int)arg1 mask:(unsigned long long)arg2 ;
-(void)_debugPrint:(int)arg1 ;
-(id)childrenInRect:(CGRect)arg1 ;
-(id)createFullCaptureData;
-(void)_getWorldTransform:(float*)arg1 positionY:(float*)arg2 rotation:(float*)arg3 xScale:(float*)arg4 yScale:(float*)arg5 ;
-(void)_getBasePhysicsScale:(float*)arg1 yScale:(float*)arg2 ;
-(void)updatePhysicsPositionAndScaleFromSprite;
-(void)set_showBounds:(BOOL)arg1 ;
-(BOOL)_showBounds;
-(CGRect)_untransformedBounds;
-(id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(BOOL)arg2 ;
-(id)_subnodeFromIndexPath:(id)arg1 ;
-(BOOL)_pathFromPhysicsBodyToPoints:(1*)arg1 outSize:(unsigned long long*)arg2 ;
-(CGRect)_convertFrameToView:(id)arg1 ;
-(id)nodeAtPoint:(CGPoint)arg1 recursive:(BOOL)arg2 ;
-(id)physicsField;
-(void)removeActionForKey:(id)arg1 ;
-(id)childNodeWithName:(id)arg1 ;
-(BOOL)needsUpdate;
-(void)setZRotation:(double)arg1 ;
-(SKScene *)scene;
-(double)zRotation;
-(void)runAction:(id)arg1 ;
-(CGRect)calculateAccumulatedFrame;
-(void)removeFromParent;
-(void)runAction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addChild:(id)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(long long)arg2 ;
-(void)setXScale:(double)arg1 ;
-(void)setYScale:(double)arg1 ;
-(double)xScale;
-(double)yScale;
-(const CGPathRef)outline;
-(BOOL)isEqualToNode:(id)arg1 ;
-(CGPoint)_anchorPoint;
@end

