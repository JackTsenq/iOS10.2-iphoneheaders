/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:24 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPreviewInteractionControllerDelegate <NSObject>
@optional
-(void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(BOOL)arg3;
-(void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(CGPoint)arg3 inSourceView:(id)arg4;

@required
-(void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;
-(id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id*)arg4;

@end

