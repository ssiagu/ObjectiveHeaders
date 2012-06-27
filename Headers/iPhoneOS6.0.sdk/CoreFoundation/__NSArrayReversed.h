/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSArray.h"


__attribute__((visibility("hidden")))
@interface __NSArrayReversed : NSArray {
@private
	id _array;
	unsigned _cnt;
}
-(id)initWithArray:(id)array;
-(unsigned)count;
-(void)dealloc;
-(void)getObjects:(id*)objects range:(NSRange)range;
-(id)objectAtIndex:(unsigned)index;
@end
