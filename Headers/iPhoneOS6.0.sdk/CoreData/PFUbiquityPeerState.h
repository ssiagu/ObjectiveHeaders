/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObject.h"
#import "CoreData-Structs.h"

@class NSString, NSNumber, PFUbiquityStoreMetadata, PFUbiquityPeer;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerState : NSManagedObject {
}
@property(retain, nonatomic) NSString* lastProcessedTransactionLogURL;	// @dynamic
@property(retain, nonatomic) PFUbiquityPeer* peer;	// @dynamic
@property(retain, nonatomic) PFUbiquityStoreMetadata* storeMetadata;	// @dynamic
@property(retain, nonatomic) NSString* storeName;	// @dynamic
@property(retain, nonatomic) NSNumber* transactionNumber;	// @dynamic
+(id)peerStateForStoreName:(id)storeName andPeerID:(id)anId inManagedObjectContext:(id)managedObjectContext;
+(id)peerStateForStoreName:(id)storeName andPeerID:(id)anId inManagedObjectContext:(id)managedObjectContext createIfMissing:(BOOL)missing;
+(id)peerStatesMatchingStoreName:(id)name inManagedObjectContext:(id)managedObjectContext;
+(id)peerStatesMatchingStoreName:(id)name inManagedObjectContext:(id)managedObjectContext omittingLocalPeerID:(id)anId;
-(id)initWithStoreName:(id)storeName insertIntoManagedObjectContext:(id)context;
@end
