/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:29 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Support/pasted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBClientToServerProtocol <NSObject>
@required
-(void)deletePersistentPasteboardWithName:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)savePasteboard:(id)arg1 dataProviderEndpoint:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)localGeneralPasteboardCompletionBlock:(/*^block*/id)arg1;
-(void)helloCompletionBlock:(/*^block*/id)arg1;
-(void)pasteboardWithName:(id)arg1 createIfNeeded:(BOOL)arg2 completionBlock:(/*^block*/id)arg3;
-(void)requestItemFromPasteboardWithName:(id)arg1 UUID:(id)arg2 itemIndex:(unsigned long long)arg3 typeIdentifier:(id)arg4 completionBlock:(/*^block*/id)arg5;
-(void)didPasteContentsFromPasteboardWithName:(id)arg1 UUID:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)performJanitorialTasksCompletionBlock:(/*^block*/id)arg1;
-(void)getAllPasteboardsCompletionBlock:(/*^block*/id)arg1;

@end

