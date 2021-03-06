/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSManagedObject;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableSet : XXUnknownSuperclass {
@private
	int _cd_rc;
	NSFaultingMutableSetFlags _flags;
	id _realSet;
	NSManagedObject* _source;
}
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)zone;
-(id)initWithSource:(id)source destinations:(id)destinations forRelationship:(id)relationship inContext:(id)context;
-(id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;
-(BOOL)_isDeallocating;
-(BOOL)_isIdenticalFault:(id)fault;
-(BOOL)_shouldProcessKVOChange;
-(BOOL)_tryRetain;
-(void)addObject:(id)object;
-(void)addObjectsFromArray:(id)array;
-(id)allObjects;
-(id)anyObject;
-(Class)classForArchiver;
-(Class)classForCoder;
-(BOOL)containsObject:(id)object;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(id)description;
-(id)descriptionWithLocale:(id)locale;
-(void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;
-(void)getObjects:(id*)objects;
-(void)intersectSet:(id)set;
-(BOOL)intersectsSet:(id)set;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToSet:(id)set;
-(BOOL)isFault;
-(BOOL)isSubsetOfSet:(id)set;
-(void)makeObjectsPerformSelector:(SEL)selector;
-(void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;
-(id)member:(id)member;
-(void)minusSet:(id)set;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)objectEnumerator;
-(id)objectsWithOptions:(unsigned)options passingTest:(id)test;
-(id)relationship;
-(oneway void)release;
-(void)removeAllObjects;
-(void)removeObject:(id)object;
-(id)replacementObjectForCoder:(id)coder;
-(id)retain;
-(unsigned)retainCount;
-(void)setSet:(id)set;
-(void)setValue:(id)value forKey:(id)key;
-(id)source;
-(void)turnIntoFault;
-(void)unionSet:(id)set;
-(id)valueForKey:(id)key;
-(id)valueForKeyPath:(id)keyPath;
-(void)willRead;
@end

