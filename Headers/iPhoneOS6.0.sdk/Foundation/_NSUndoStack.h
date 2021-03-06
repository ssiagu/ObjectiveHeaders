/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>

@class _NSUndoObject;

__attribute__((visibility("hidden")))
@interface _NSUndoStack : NSObject {
@private
	unsigned _max;
	unsigned _count;
	unsigned _nestingLevel;
	_NSUndoObject* _head;
}
-(id)init;
-(id)_beginMark;
-(void)_removeBottom;
-(unsigned)count;
-(void)dealloc;
-(id)description;
-(id)groupIdentifier;
-(BOOL)isDiscardable;
-(void)markBegin;
-(void)markEnd;
-(unsigned)max;
-(unsigned)nestingLevel;
-(BOOL)popAndInvoke;
-(id)popUndoObject;
-(void)push:(id)push;
-(void)removeAllObjects;
-(void)removeAllObjectsWithTarget:(id)target;
-(void)removeObject:(id)object;
-(void)setDiscardable:(BOOL)discardable;
-(void)setGroupIdentifier:(id)identifier;
-(void)setMax:(unsigned)max;
-(id)topUndoObject;
@end

