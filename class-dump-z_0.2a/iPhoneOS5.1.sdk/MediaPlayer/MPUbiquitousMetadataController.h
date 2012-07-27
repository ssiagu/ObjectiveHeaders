/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPUbiquitousLRUDictionaryObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface MPUbiquitousMetadataController : XXUnknownSuperclass <MPUbiquitousLRUDictionaryObserver> {
@private
	dispatch_queue_s* _updateQueue;
	NSArray* _entriesForUbiquitousUpdates;
	BOOL _updateUbiquitousValuesScheduled;
}
+(void)insertDAAPValueIntoDictionary:(id)dictionary mediaItem:(id)item mediaProperty:(id)property;
+(id)sharedUbiquitousMetadataController;
+(id)ubiquitousEnabledMediaPropertiesForMediaProperties:(id)mediaProperties;
-(id)init;
-(void)_onQueue_applyUbiquitousLRUStorageValuesForEntries:(id)entries;
-(void)_onQueue_applyUbiquitousValues:(id)values toMediaItem:(id)mediaItem;
-(void)_onQueue_scheduleApplyUbiquitousLRUStorageValuesForEntries:(id)entries;
-(void)_pushProperties:(id)properties mediaItem:(id)item;
-(void)_releaseAssertion:(id)assertion;
-(BOOL)_sagaPushMediaProperties:(id)properties mediaItem:(id)item;
-(BOOL)_shouldApplyUbiquitousEntry:(id)entry;
-(void)_takeAssertion:(id)assertion;
-(id)_ubiquitousMetadataStorage;
-(void)_ubiquitousPushMediaProperties:(id)properties mediaItem:(id)item;
-(BOOL)_useSagaForMediaItem:(id)mediaItem;
-(void)dealloc;
-(void)pushBookmarkingPropertiesForMediaItem:(id)mediaItem;
-(void)ubiquitousLRUStorageDidChangeExternally:(id)ubiquitousLRUStorage changedEntries:(id)entries;
-(void)ubiquitousLRUStorageDidCommitLocalChanges:(id)ubiquitousLRUStorage;
-(void)ubiquitousLRUStorageWillCommitLocalChanges:(id)ubiquitousLRUStorage;
@end
