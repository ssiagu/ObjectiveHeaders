/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSManagedObjectContext, NSString, NSPersistentStoreCoordinator, NSNotification;

__attribute__((visibility("hidden")))
@interface _PFUbiquityRecordsHelper : XXUnknownSuperclass {
@private
	NSDictionary* _transactionRecordContent;
	NSDictionary* _transactionObjectsData;
	NSString* _externalRecordsPath;
	NSString* _transactionLogPath;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSString* _storeIdentifier;
	NSMutableDictionary* _deletedObjectsByPK;
	NSMutableDictionary* _updatedObjectsByPK;
	NSMutableDictionary* _insertedObjectsByPK;
	NSMutableDictionary* _allWorkingObjectsByPK;
	NSMutableDictionary* _externalAttributesByEntityName;
	NSMutableDictionary* _externalRelationshipsByEntityName;
	NSNotification* _importContextSaveNotification;
	int _ubiquity_import_debug_level;
	BOOL _importAllRecords;
}
@property(readonly, assign) NSDictionary* deletedObjectsByPK;	// @synthesize=_deletedObjectsByPK
@property(retain) NSString* externalRecordsPath;	// @synthesize=_externalRecordsPath
@property(assign) BOOL importAllRecords;	// @synthesize=_importAllRecords
@property(retain) NSNotification* importContextSaveNotification;	// @synthesize=_importContextSaveNotification
@property(readonly, assign) NSDictionary* insertedObjectsByPK;	// @synthesize=_insertedObjectsByPK
@property(assign) NSManagedObjectContext* managedObjectContext;	// @synthesize=_managedObjectContext
@property(assign) NSPersistentStoreCoordinator* persistentStoreCoordinator;	// @synthesize=_persistentStoreCoordinator
@property(retain) NSString* storeIdentifier;	// @synthesize=_storeIdentifier
@property(retain) NSString* transactionLogPath;	// @synthesize=_transactionLogPath
@property(retain) NSDictionary* transactionObjectsData;	// @synthesize=_transactionObjectsData
@property(retain) NSDictionary* transactionRecordContent;	// @synthesize=_transactionRecordContent
@property(readonly, assign) NSDictionary* updatedObjectsByPK;	// @synthesize=_updatedObjectsByPK
-(id)initForImportWithExternalRecordsPath:(id)externalRecordsPath persistentStoreCoordinator:(id)coordinator;
-(void)_importContextDidSave:(id)_importContext;
-(id)_initializeTransactionRecord:(id*)record;
-(id)_objectsWithPrimaryKeys:(id)primaryKeys error:(id*)error;
-(id)_prepareFullImportTransactionContent:(id*)content;
-(BOOL)_prepareTransactionObjects:(id*)objects;
-(BOOL)_processDeletedObjects:(id*)objects;
-(BOOL)_processInsertedObjects:(id*)objects;
-(BOOL)_processUpdatedObjects:(id*)objects;
-(BOOL)_setStateForObject:(id)object error:(id*)error;
-(void)dealloc;
// declared property getter: -(id)deletedObjectsByPK;
-(id)externalAttributesForEntity:(id)entity;
// declared property getter: -(id)externalRecordsPath;
-(id)externalRelationshipsForEntity:(id)entity;
// declared property getter: -(BOOL)importAllRecords;
// declared property getter: -(id)importContextSaveNotification;
-(id)importUbiquityExternalRecords:(id*)records;
// declared property getter: -(id)insertedObjectsByPK;
// declared property getter: -(id)managedObjectContext;
-(id)objectForEntityName:(id)entityName primaryKey:(id)key;
// declared property getter: -(id)persistentStoreCoordinator;
// declared property setter: -(void)setExternalRecordsPath:(id)path;
// declared property setter: -(void)setImportAllRecords:(BOOL)records;
// declared property setter: -(void)setImportContextSaveNotification:(id)notification;
// declared property setter: -(void)setManagedObjectContext:(id)context;
// declared property setter: -(void)setPersistentStoreCoordinator:(id)coordinator;
// declared property setter: -(void)setStoreIdentifier:(id)identifier;
// declared property setter: -(void)setTransactionLogPath:(id)path;
// declared property setter: -(void)setTransactionObjectsData:(id)data;
// declared property setter: -(void)setTransactionRecordContent:(id)content;
// declared property getter: -(id)storeIdentifier;
// declared property getter: -(id)transactionLogPath;
// declared property getter: -(id)transactionObjectsData;
// declared property getter: -(id)transactionRecordContent;
// declared property getter: -(id)updatedObjectsByPK;
@end

