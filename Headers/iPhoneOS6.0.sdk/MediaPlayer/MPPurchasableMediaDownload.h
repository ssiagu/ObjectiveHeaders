/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MPMediaItem, NSObject, MPPurchasableMediaDownloadManager, NSError, NSMutableArray, NSOperation;
@protocol OS_dispatch_queue;

@interface MPPurchasableMediaDownload : XXUnknownSuperclass {
@private
	NSObject<OS_dispatch_queue>* _accessQueue;
	BOOL _canceled;
	unsigned long long _downloadIdentifier;
	NSString* _downloadPhaseIdentifier;
	NSError* _failureError;
	BOOL _finished;
	BOOL _hasCheckedRestoreDownload;
	MPPurchasableMediaDownloadManager* _manager;
	NSMutableArray* _observers;
	NSOperation* _operation;
	int _purchaseReason;
	long long _bytesDownloaded;
	double _downloadPercentComplete;
	MPMediaItem* _mediaItem;
	BOOL _purchased;
	BOOL _restoreDownload;
	BOOL _cancelled;
}
@property(readonly, assign, nonatomic) long long bytesDownloaded;	// @synthesize=_bytesDownloaded
@property(readonly, assign, nonatomic, getter=isCancelled) BOOL cancelled;	// @synthesize=_cancelled
@property(readonly, assign, nonatomic) double downloadPercentComplete;	// @synthesize=_downloadPercentComplete
@property(readonly, assign, nonatomic) NSString* downloadPhaseIdentifier;
@property(readonly, assign, nonatomic) NSError* failureError;
@property(readonly, assign, nonatomic, getter=isFinished) BOOL finished;
@property(readonly, assign, nonatomic) MPMediaItem* mediaItem;	// @synthesize=_mediaItem
@property(assign, nonatomic) int purchasePriority;	// @dynamic
@property(readonly, assign, nonatomic) int purchaseReason;	// @synthesize=_purchaseReason
@property(readonly, assign, nonatomic, getter=isPurchased) BOOL purchased;	// @synthesize=_purchased
@property(readonly, assign, nonatomic, getter=isRestoreDownload) BOOL restoreDownload;	// @synthesize=_restoreDownload
-(id)init;
-(id)initWithMediaItem:(id)mediaItem purchaseReason:(int)reason manager:(id)manager;
-(void)_notifyDidCancel;
-(void)_notifyDidFinishWithError:(id)_notify;
-(void)_notifyDidProgressWithPercentComplete:(double)_notify;
-(void)_notifyDidPurchaseWithPurchase:(id)_notify;
-(void)addObserver:(id)observer;
// declared property getter: -(long long)bytesDownloaded;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(unsigned long long)downloadIdentifier;
// declared property getter: -(double)downloadPercentComplete;
// declared property getter: -(id)downloadPhaseIdentifier;
// declared property getter: -(id)failureError;
-(BOOL)isCanceled;
// declared property getter: -(BOOL)isCancelled;
// declared property getter: -(BOOL)isFinished;
// declared property getter: -(BOOL)isPurchased;
// declared property getter: -(BOOL)isRestoreDownload;
-(id)manager;
// declared property getter: -(id)mediaItem;
-(id)operation;
// declared property getter: -(int)purchasePriority;
// declared property getter: -(int)purchaseReason;
-(void)removeObserver:(id)observer;
-(void)setBytesDownloaded:(long long)downloaded;
-(void)setCanceled:(BOOL)canceled;
-(void)setDownloadIdentifier:(unsigned long long)identifier;
-(void)setDownloadPercentComplete:(double)complete;
-(void)setDownloadPhaseIdentifier:(id)identifier;
-(void)setFailureError:(id)error;
-(void)setFinished:(BOOL)finished;
-(void)setManager:(id)manager;
-(void)setOperation:(id)operation;
// declared property setter: -(void)setPurchasePriority:(int)priority;
-(void)setPurchased:(BOOL)purchased;
-(void)setRestoreDownload:(BOOL)download;
@end

