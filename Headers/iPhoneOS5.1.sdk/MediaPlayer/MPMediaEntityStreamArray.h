/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, MPMediaLibrary, MPMediaQueryCriteria, MPMediaQuerySectionInfo;

@interface MPMediaEntityStreamArray : XXUnknownSuperclass <NSCopying> {
	Class _entityClass;
	dispatch_queue_s* _queue;
	MPMediaQueryCriteria* _queryCriteria;
	MPMediaLibrary* _library;
	int _containedMediaTypes;
	NSMutableArray* _entities;
	CFArrayRef _entitiesSemaphores;
	unsigned _entitiesSemaphoreIndex;
	unsigned _count;
	MPMediaQuerySectionInfo* _sectionInfo;
	CFArrayRef _countAndSectionInfoSemaphores;
	unsigned _hasCountAndSectionInfo : 1;
	CFArrayRef _isEmptySemaphores;
	int _retainCount;
	unsigned _isEmpty : 1;
	unsigned _hasIsEmpty : 1;
	unsigned _hasStartedLoadingIsEmpty : 1;
	unsigned _hasStartedLoadingEntities : 1;
	unsigned _isImmediate : 1;
}
@property(assign, nonatomic) int containedMediaTypes;	// @synthesize=_containedMediaTypes
@property(readonly, assign, nonatomic) MPMediaLibrary* library;
@property(readonly, assign, nonatomic) MPMediaQueryCriteria* queryCriteria;	// @synthesize=_queryCriteria
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo* sectionInfo;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library;
-(id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library immediate:(BOOL)immediate;
-(BOOL)MPIsEmpty;
-(void)_commonInitMPMediaEntityStreamArray;
-(void)_onQueueAddObject:(id)object;
-(void)_onQueueStartLoadingEntities;
-(void)_onQueueStartLoadingIsEmpty;
-(void)addCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;
-(void)addItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;
// declared property getter: -(int)containedMediaTypes;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)count;
-(void)dealloc;
// declared property getter: -(id)library;
-(id)objectAtIndex:(unsigned)index;
-(id)propertiesToFetch;
// declared property getter: -(id)queryCriteria;
// declared property getter: -(id)sectionInfo;
// declared property setter: -(void)setContainedMediaTypes:(int)types;
-(void)setCount:(unsigned)count sectionInfo:(id)info;
-(void)setIsEmpty:(BOOL)empty;
@end

