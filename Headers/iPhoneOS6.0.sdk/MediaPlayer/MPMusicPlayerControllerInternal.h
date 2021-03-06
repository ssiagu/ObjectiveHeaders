/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMusicPlayerController.h"
#import "MPServerObjectProxy.h"

@class MPMediaItemCollection, MPMediaQuery, MPMusicPlayerController;

@interface MPMusicPlayerControllerInternal : MPServerObjectProxy <MPMusicPlayerController> {
@private
	unsigned _clientPort;
	int _inBlockHandlingPlaybackStateChangedMessageFromServer;
	MPMediaItemCollection* _itemCollection;
	MPMusicPlayerController* _musicPlayerController;
	int _playbackNotificationObservers;
	int _playbackState;
	BOOL _preparedToPlay;
	SBSProcessAssertionRef _processAssertion;
	MPMediaQuery* _query;
	CFRunLoopSourceRef _runLoopSource;
	unsigned _didCheckIn : 1;
	unsigned _useApplicationSpecificQueue : 1;
	unsigned _useCachedPlaybackState : 1;
	unsigned _cachedPlaybackStateIsValid : 1;
	unsigned _allowsRemoteUIAccess : 1;
}
@property(assign) BOOL inBlockHandlingPlaybackStateChangedMessageFromServer;
-(id)initWithMusicPlayerController:(id)musicPlayerController;
-(void)dealloc;
-(void)didPrepareForRemoteSelectorInvocation;
// declared property getter: -(BOOL)inBlockHandlingPlaybackStateChangedMessageFromServer;
-(BOOL)prepareForRemoteSelectorInvocation;
-(void)serverConnectionDied;
// declared property setter: -(void)setInBlockHandlingPlaybackStateChangedMessageFromServer:(BOOL)server;
@end

