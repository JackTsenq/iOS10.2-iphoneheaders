/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:41 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct sqlite3* sqlite3Ref;

typedef struct CXCallUpdateHasSet {
	unsigned remoteHandle : 1;
	unsigned localizedCallerName : 1;
	unsigned emergency : 1;
	unsigned usingBaseband : 1;
	unsigned blocked : 1;
	unsigned ttyType : 1;
	unsigned mayRequireBreakBeforeMake : 1;
	unsigned hasVideo : 1;
	unsigned audioCategory : 1;
	unsigned audioMode : 1;
	unsigned audioInterruptionProvider : 1;
	unsigned audioInterruptionOperationMode : 1;
	unsigned requiresInCallSounds : 1;
	unsigned inCallSoundRegion : 1;
	unsigned supportsHolding : 1;
	unsigned supportsGrouping : 1;
	unsigned supportsUngrouping : 1;
	unsigned supportsDTMF : 1;
	unsigned supportsUnambiguousMultiPartyState : 1;
	unsigned supportsAddCall : 1;
	unsigned supportsSendingToVoicemail : 1;
	unsigned videoStreamToken : 1;
	unsigned crossDeviceIdentifier : 1;
	unsigned handoffContext : 1;
	unsigned context : 1;
} CXCallUpdateHasSet;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

