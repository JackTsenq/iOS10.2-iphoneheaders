/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIVisualEffectLayerConfig, NSString;

@interface _UIVisualEffectSubview : UIView {

	_UIVisualEffectLayerConfig* _layerConfig;

}

@property (setter=_setGroupName:,nonatomic,copy) NSString * _groupName; 
@property (setter=_setLayerConfig:,nonatomic,retain) _UIVisualEffectLayerConfig * _layerConfig;              //@synthesize layerConfig=_layerConfig - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_setGroupName:(id)arg1 ;
-(NSString *)_groupName;
-(void)_setLayerConfig:(id)arg1 ;
-(_UIVisualEffectLayerConfig *)_layerConfig;
@end

