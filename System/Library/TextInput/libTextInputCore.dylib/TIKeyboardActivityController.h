/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:35:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardAssertionManagerDelegate.h>

@protocol OS_dispatch_source;
@class NSObject, NSTimer, NSHashTable;

@interface TIKeyboardActivityController : NSObject <TIKeyboardAssertionManagerDelegate> {

	BOOL _isDirty;
	BOOL _hadRecentActivity;
	BOOL _hasBackgroundActivity;
	unsigned long long _activityState;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	long long _inactiveMemoryPressureCount;
	NSTimer* _inactivityTimer;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSTimer * inactivityTimer;                       //@synthesize inactivityTimer=_inactivityTimer - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                       //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned long long activityState; 
+(id)sharedController;
+(double)keyboardIdleTimeoutInterval;
-(id)init;
-(void)dealloc;
-(NSHashTable *)observers;
-(void)keyboardAssertionsDidChange;
-(void)backgroundActivityAssertionsDidChange;
-(void)addActivityObserver:(id)arg1 ;
-(void)removeActivityObserver:(id)arg1 ;
-(void)notifyTransitionWithContext:(id)arg1 ;
-(void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2 ;
-(id)createMemoryPressureSource;
-(void)handleMemoryStatusPressure:(unsigned long long)arg1 ;
-(unsigned long long)getExcessMemoryInBytes;
-(unsigned long long)activityState;
-(void)updateActivityState;
-(void)keyboardAssertionsDidChange:(id)arg1 ;
-(void)keyboardBackgroundActivityAssertionsDidChange:(id)arg1 ;
-(void)touchInactivityTimer;
-(void)inactivityTimerFired:(id)arg1 ;
-(void)setKeyboardDirtyIfNecessary;
-(BOOL)shouldBecomeDirty;
-(void)setKeyboardCleanIfNecessary;
-(BOOL)shouldBecomeClean;
-(NSTimer *)inactivityTimer;
-(void)setInactivityTimer:(NSTimer *)arg1 ;
@end
