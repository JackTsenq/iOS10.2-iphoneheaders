/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:47 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface __NSSingleObjectArrayI : NSArray {

	id _object;

}
+(id)__new:(id)arg1 :(BOOL)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS25*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
