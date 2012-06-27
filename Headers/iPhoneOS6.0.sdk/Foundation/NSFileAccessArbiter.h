/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessArbiter.h"
#import </libxml2.2.h>
#import "NSObject.h"

@class NSFileAccessNode, NSMutableDictionary;
@protocol OS_xpc_object, OS_dispatch_queue;

@protocol NSFileAccessArbiter <NSObject>
-(void)cancelAccessClaimForID:(id)anId;
-(id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;
-(void)grantSubarbitrationClaim:(id)claim withServer:(id)server;
-(void)revokeAccessClaimForID:(id)anId;
-(void)revokeSubarbitrationClaimForID:(id)anId;
-(void)tiePresenterForID:(id)anId toItemAtURL:(id)url;
-(void)writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;
-(void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;
-(void)writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;
-(void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;
@end

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter> {
@private
	NSObject<OS_dispatch_queue>* _queue;
	BOOL _isSubarbiter;
	NSMutableDictionary* _accessClaimsByID;
	NSMutableDictionary* _subarbitrationClaimsByID;
	NSMutableDictionary* _reactorsByID;
	NSMutableDictionary* _watchersByPresenterID;
	NSFileAccessNode* _rootNode;
	NSObject<OS_xpc_object>* _superarbitrationServer;
}
-(id)initWithQueue:(id)queue isSubarbiter:(BOOL)subarbiter listener:(id)listener;
-(void)_addPresenter:(id)presenter ofItemAtURL:(id)url withLastEventID:(id)lastEventID;
-(void)_addProvider:(id)provider ofItemsAtURL:(id)url;
-(void)_cancelAccessClaimForID:(id)anId;
-(void)_grantAccessClaim:(id)claim;
-(void)_grantSubarbitrationClaim:(id)claim withServer:(id)server;
-(void)_handleCanceledClient:(id)client;
-(void)_handleMessage:(id)message forSubarbitrationClaim:(id)subarbitrationClaim server:(id)server;
-(void)_handleMessage:(id)message fromClient:(id)client;
-(BOOL)_handleMessage:(id)message ofKind:(id)kind withParameters:(id)parameters embeddedServer:(id)server fromClient:(id)client;
-(void)_removeReactorForID:(id)anId;
-(void)_revokeAccessClaim:(id)claim;
-(void)_revokeAccessClaimForID:(id)anId fromLocal:(BOOL)local;
-(void)_sendSubarbitersMessageWithKind:(id)kind parameters:(id)parameters;
-(void)_startArbitratingItemsAtURLs:(id)urls withSuperarbitrationServer:(id)superarbitrationServer;
-(void)_startWatchingItemAtURL:(id)url forPresenter:(id)presenter withLastEventID:(id)lastEventID;
-(void)_stopWatchingItemForPresenterForID:(id)anId;
-(void)_tiePresenter:(id)presenter toItemAtURL:(id)url;
-(void)_tiePresenterForID:(id)anId toItemAtURL:(id)url;
-(void)_writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;
-(void)_writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;
-(void)_writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;
-(void)_writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;
-(void)cancelAccessClaimForID:(id)anId;
-(void)dealloc;
-(void)finalize;
-(id)grantAccessClaim:(id)claim synchronouslyIfPossible:(BOOL)possible;
-(void)grantSubarbitrationClaim:(id)claim withServer:(id)server;
-(void)revokeAccessClaimForID:(id)anId;
-(void)revokeSubarbitrationClaimForID:(id)anId;
-(id)rootNode;
-(void)stopArbitrating;
-(void)tiePresenterForID:(id)anId toItemAtURL:(id)url;
-(void)writerWithPurposeID:(id)purposeID didDisconnectItemAtURL:(id)url;
-(void)writerWithPurposeID:(id)purposeID didMoveItemAtURL:(id)url toURL:(id)url3;
-(void)writerWithPurposeID:(id)purposeID didReconnectItemAtURL:(id)url;
-(void)writerWithPurposeID:(id)purposeID didVersionChangeOfKind:(id)kind toItemAtURL:(id)url withClientID:(id)clientID name:(id)name;
@end
