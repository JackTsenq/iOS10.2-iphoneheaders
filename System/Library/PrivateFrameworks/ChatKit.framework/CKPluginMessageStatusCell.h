/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:08 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptMultilineLabelCell.h>

@class NSString, UIView, UIImageView;

@interface CKPluginMessageStatusCell : CKTranscriptMultilineLabelCell {

	NSString* _balloonBundleID;
	UIView* _previousPluginSnapshot;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * balloonBundleID;                     //@synthesize balloonBundleID=_balloonBundleID - In the implementation block
@property (nonatomic,retain) UIView * previousPluginSnapshot;              //@synthesize previousPluginSnapshot=_previousPluginSnapshot - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(NSString *)balloonBundleID;
-(void)configureForChatItem:(id)arg1 ;
-(void)setPreviousPluginSnapshot:(UIView *)arg1 ;
-(void)performInsertion:(/*^block*/id)arg1 ;
-(void)setBalloonBundleID:(NSString *)arg1 ;
-(void)_updateBalloonPluginIconImage;
-(UIView *)previousPluginSnapshot;
@end
