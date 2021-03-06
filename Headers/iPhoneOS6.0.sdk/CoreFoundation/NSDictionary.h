/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import </libobjc.A.h>
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"
#import "NSFastEnumeration.h"


@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration> {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)dictionary;
+(id)dictionaryWithDictionary:(id)dictionary;
+(id)dictionaryWithDictionary:(id)dictionary copyItems:(BOOL)items;
+(id)dictionaryWithObject:(id)object forKey:(id)key;
+(id)dictionaryWithObjects:(id)objects forKeys:(id)keys;
+(id)dictionaryWithObjects:(const id*)objects forKeys:(const id*)keys count:(unsigned)count;
+(id)dictionaryWithObjectsAndKeys:(id)objectsAndKeys;
+(id)newDictionaryWithObjects:(const id*)objects forKeys:(const id*)keys count:(unsigned)count;
+(id)sharedKeySetForKeys:(id)keys;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)coder;
-(id)initWithDictionary:(id)dictionary;
-(id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;
-(id)initWithObject:(id)object forKey:(id)key;
-(id)initWithObjects:(id)objects forKeys:(id)keys;
-(id)initWithObjects:(const id*)objects forKeys:(const id*)keys count:(unsigned)count;
-(id)initWithObjectsAndKeys:(id)objectsAndKeys;
-(void)__apply:(/*function-pointer*/ void*)apply context:(void*)context;
-(BOOL)__getValue:(id*)value forKey:(id)key;
-(unsigned long)_cfTypeID;
-(id)allKeys;
-(id)allKeysForObject:(id)object;
-(id)allObjects;
-(id)allValues;
-(BOOL)containsKey:(id)key;
-(BOOL)containsObject:(id)object;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(unsigned)countForKey:(id)key;
-(unsigned)countForObject:(id)object;
-(id)description;
-(id)descriptionWithLocale:(id)locale;
-(id)descriptionWithLocale:(id)locale indent:(unsigned)indent;
-(void)encodeWithCoder:(id)coder;
-(void)enumerateKeysAndObjectsUsingBlock:(id)block;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned)options usingBlock:(id)block;
-(void)getKeys:(id*)keys;
-(void)getObjects:(id*)objects;
-(void)getObjects:(id*)objects andKeys:(id*)keys;
-(void)getObjects:(id*)objects andKeys:(id*)keys count:(unsigned)count;
-(unsigned)hash;
-(id)invertedDictionary;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToDictionary:(id)dictionary;
-(BOOL)isNSDictionary__;
-(id)keyEnumerator;
-(id)keysOfEntriesPassingTest:(id)entriesPassingTest;
-(id)keysOfEntriesWithOptions:(unsigned)options passingTest:(id)test;
-(id)keysSortedByValueUsingComparator:(id)comparator;
-(id)keysSortedByValueUsingSelector:(SEL)selector;
-(id)keysSortedByValueWithOptions:(unsigned)options usingComparator:(id)comparator;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)objectEnumerator;
-(id)objectForKey:(id)key;
-(id)objectForKeyedSubscript:(id)keyedSubscript;
-(id)objectsForKeys:(id)keys notFoundMarker:(id)marker;
@end

