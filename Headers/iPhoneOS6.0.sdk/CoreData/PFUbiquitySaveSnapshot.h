/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquitySaveSnapshot : XXUnknownSuperclass {
@private
	NSDate* _transactionDate;
	NSString* _modelVersionHash;
	NSString* _exportingPeerID;
	NSString* _localPeerID;
	NSMutableDictionary* _storeNameToStoreSaveSnapshots;
}
@property(readonly, assign, nonatomic) NSString* exportingPeerID;	// @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSString* localPeerID;	// @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString* modelVersionHash;	// @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray* storeNames;
@property(retain, nonatomic) NSDate* transacationDate;	// @synthesize=_transactionDate
-(id)initWithSaveNotification:(id)saveNotification withLocalPeerID:(id)localPeerID;
-(id)initWithTransactionLog:(id)transactionLog;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)exportingPeerID;
// declared property getter: -(id)localPeerID;
// declared property getter: -(id)modelVersionHash;
// declared property setter: -(void)setTransacationDate:(id)date;
// declared property getter: -(id)storeNames;
-(id)storeSaveSnapshotForStore:(id)store;
-(id)storeSaveSnapshotForStoreName:(id)storeName;
// declared property getter: -(id)transacationDate;
@end

