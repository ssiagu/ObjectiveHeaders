/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue;

@interface MPNetworkPlayabilityMonitor : XXUnknownSuperclass {
@private
	int _effectiveNetworkTypeForPlayback;
	int _networkType;
	NSObject<OS_dispatch_queue>* _queue;
}
@property(readonly, assign, nonatomic) int effectiveNetworkTypeForPlayback;
@property(readonly, assign, nonatomic) int networkType;
+(id)sharedNetworkPlayabilityMonitor;
-(id)init;
-(int)_effectiveNetworkTypeForAverageBitrate:(double)averageBitrate;
-(void)_networkTypeDidChangeNotification:(id)_networkType;
-(void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)item;
-(void)dealloc;
// declared property getter: -(int)effectiveNetworkTypeForPlayback;
// declared property getter: -(int)networkType;
@end
