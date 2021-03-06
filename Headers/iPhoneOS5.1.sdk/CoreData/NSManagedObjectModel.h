/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSCoding.h"
#import "NSManagedObjectModel.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSSet;

@interface NSManagedObjectModel : XXUnknownSuperclass <NSCoding, NSCopying, NSFastEnumeration> {
@private
	id _dataForOptimization;
	id* _optimizationHints;
	id _localizationPolicy;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _configurations;
	NSMutableDictionary* _fetchRequestTemplates;
	NSSet* _versionIdentifiers;
	managedObjectModelFlags _managedObjectModelFlags;
}
+(void)initialize;
+(id)mergedModelFromBundles:(id)bundles;
+(id)mergedModelFromBundles:(id)bundles forStoreMetadata:(id)storeMetadata;
+(id)modelByMergingModels:(id)models;
+(id)modelByMergingModels:(id)models forStoreMetadata:(id)storeMetadata;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithContentsOfURL:(id)url;
-(id)configurations;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)entities;
-(id)entitiesByName;
-(id)entitiesForConfiguration:(id)configuration;
-(id)entityVersionHashesByName;
-(id)fetchRequestFromTemplateWithName:(id)name substitutionVariables:(id)variables;
-(id)fetchRequestTemplateForName:(id)name;
-(id)fetchRequestTemplatesByName;
-(unsigned)hash;
-(BOOL)isConfiguration:(id)configuration compatibleWithStoreMetadata:(id)storeMetadata;
-(BOOL)isEqual:(id)equal;
-(id)localizationDictionary;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(void)setEntities:(id)entities;
-(void)setEntities:(id)entities forConfiguration:(id)configuration;
-(void)setFetchRequestTemplate:(id)aTemplate forName:(id)name;
-(void)setLocalizationDictionary:(id)dictionary;
-(void)setVersionIdentifiers:(id)identifiers;
-(id)versionIdentifiers;
@end

@interface NSManagedObjectModel (_NSInternalMethods)
+(void)_deepCollectEntitiesInArray:(id)array entity:(id)entity;
+(id)_modelPathsFromBundles:(id)bundles;
-(void)_addEntities:(id)entities toConfiguration:(id)configuration;
-(void)_addVersionIdentifiers:(id)identifiers;
-(id)_configurationsByName;
-(void)_createCachesAndOptimizeState;
-(id)_entitiesByVersionHash;
-(id)_entityForName:(id)name;
-(void)_flattenProperties;
-(BOOL)_hasPrecomputedKeyOrder;
-(id)_initWithEntities:(id)entities;
-(BOOL)_isOptimizedForEncoding;
-(id)_localizationPolicy;
-(id)_precomputedKeysForEntity:(id)entity;
-(void)_removeEntities:(id)entities fromConfiguration:(id)configuration;
-(void)_removeEntity:(id)entity;
-(void)_removeEntityNamed:(id)named;
-(void)_restoreValidation;
-(void)_setIsEditable:(BOOL)editable;
-(void)_setIsEditable:(BOOL)editable optimizationStyle:(unsigned)style;
-(void)_setLocalizationPolicy:(id)policy;
-(id)_sortedEntitiesForConfiguration:(id)configuration;
-(void)_stripForMigration;
-(void)_throwIfNotEditable;
-(id)_versionIdentifiersAsArray;
-(BOOL)isEditable;
@end

@interface NSManagedObjectModel (_NSManagedObjectModelPrivateMethods)
+(id)_newModelFromOptimizedEncoding:(id)optimizedEncoding error:(id*)error;
-(id)initWithContentsOfOptimizedURL:(id)optimizedURL;
-(id)initWithContentsOfURL:(id)url forStoreMetadata:(id)storeMetadata;
-(void)_addEntity:(id)entity;
-(id)_modelForVersionHashes:(id)versionHashes;
-(id)_optimizedEncoding:(id*)encoding;
-(id)versionHash;
@end

