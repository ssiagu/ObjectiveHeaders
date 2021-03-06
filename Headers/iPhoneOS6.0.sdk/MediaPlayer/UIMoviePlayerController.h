/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MPMovieAccessLog, MPMovieErrorLog, MPVideoViewController, MPAVItem, NSDate, UIMovieSnapshotView, NSString, UIImage, UIViewController, UINavigationController, MPVideoView, NSArray, UIMovieView, UIView, MPTransitionController, MPSystemNowPlayingController, MPAVController;

@interface UIMoviePlayerController : XXUnknownSuperclass {
	id _delegate;
	MPAVItem* _item;
	NSString* _moviePath;
	MPAVController* _player;
	UIImage* _posterImage;
	NSString* _youTubeVideoID;
	UIViewController* _topViewController;
	MPVideoViewController* _activeVideoController;
	MPVideoView* _videoView;
	MPTransitionController* _transitionController;
	int _transitionCount;
	UINavigationController* _portraitNavigationController;
	CFBagRef _ignoredChangeTypes;
	int _pendingInterfaceOrientation;
	MPAVItem* _pendingItem;
	MPAVItem* _pendingItemWithDifferentType;
	CGRect _layoutRect;
	int _lastSetUIInterfaceOrientation;
	int _interfaceOrientation;
	int _interfaceOrientationFromDevice;
	NSString* _playbackErrorDescription;
	unsigned _autoRotationMask;
	unsigned _displayableParts;
	unsigned _unmodifiedDisplayableParts;
	unsigned _desiredParts;
	unsigned _audioControlsStyle;
	unsigned _playableContentTypeOverride;
	double _timeWhenResignedActive;
	double _timeToSnapshot;
	UIMovieSnapshotView* _snapshotView;
	NSArray* _closedCaptionData;
	MPSystemNowPlayingController* _nowPlayingController;
	struct {
		unsigned canShowControlsOverlay : 1;
		unsigned wantsControlsOverlayVis : 1;
		unsigned wantsControlsOverlayAnim : 1;
		unsigned wantsControlsOverlayDisableAutohide : 1;
		unsigned wantsFullscreen : 1;
		unsigned alwaysFullscreen : 1;
		unsigned canAnimateControlsOverlay : 1;
		unsigned autoplayWhenLikelyToKeepUp : 1;
		unsigned externalSourceManagesStatusBar : 1;
		unsigned disallowsVideoOut : 1;
		unsigned exited : 1;
		unsigned generatingOrientationNotifications : 1;
		unsigned forStreaming : 1;
		unsigned isExternalTransformationActive : 1;
		unsigned controlsVisibleBeforeExternalTransformation : 1;
		unsigned isActive : 1;
		unsigned resigningActive : 1;
		unsigned didResignActive : 1;
		unsigned uiPrepared : 1;
		unsigned useLegacyControls : 1;
		unsigned isChangingMoviePath : 1;
		unsigned alwaysAllowHidingControlsOverlay : 1;
		unsigned schedulePortraitLoadingIndicator : 1;
		unsigned clientClearedMoviePath : 1;
		unsigned canCommitStatusBarAndOverlayChanges : 1;
		unsigned videoFrameDisplayOnResumeDisabled : 1;
		unsigned usingDebugTestPath : 1;
		unsigned allowsWirelessPlayback : 1;
		unsigned useHostedWindowWhenFullscreen : 1;
	} _mpcBitfield;
}
@property(readonly, assign, nonatomic) MPMovieAccessLog* accessLog;
@property(assign, nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property(readonly, assign, nonatomic) BOOL areClosedCaptionsAvailable;
@property(assign, nonatomic) unsigned audioControlsStyle;	// @synthesize=_audioControlsStyle
@property(retain, nonatomic) NSString* audioSessionModeOverride;
@property(retain, nonatomic) UIImage* backgroundPlaceholderImage;
@property(readonly, assign, nonatomic) unsigned bufferingState;
@property(readonly, assign, nonatomic) BOOL canContinuePlayingInBackground;
@property(readonly, assign, nonatomic) BOOL canContinuePlayingWhenLocked;
@property(assign, nonatomic) BOOL closedCaptioningEnabled;
@property(readonly, assign, nonatomic) NSDate* currentDate;
@property(assign, nonatomic) double currentTime;
@property(assign, nonatomic) id delegate;	// @synthesize=_delegate
@property(assign, nonatomic) BOOL disallowsVideoOut;
@property(readonly, assign, nonatomic) double duration;
@property(readonly, assign, nonatomic) MPMovieErrorLog* errorLog;
@property(readonly, assign, nonatomic) long long fileSize;
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(readonly, assign, nonatomic) UIView* fullscreenView;
@property(readonly, assign, nonatomic) unsigned hostedWindowContextID;
@property(readonly, assign, nonatomic) BOOL isPreparedForPlayback;
@property(retain, nonatomic) MPAVItem* item;	// @synthesize=_item
@property(copy, nonatomic) NSString* moviePath;
@property(copy, nonatomic) NSString* movieSubtitle;
@property(copy, nonatomic) NSString* movieTitle;
@property(readonly, assign, nonatomic) UIMovieView* movieView;
@property(readonly, assign, nonatomic) BOOL muted;
@property(readonly, assign, nonatomic) CGSize naturalSize;
@property(assign, nonatomic) unsigned options;
@property(assign, nonatomic) unsigned playableContentType;
@property(readonly, assign, nonatomic) double playableDuration;
@property(readonly, assign, nonatomic) double playableEndTime;
@property(readonly, assign, nonatomic) double playableStartTime;
@property(copy, nonatomic) NSString* playbackErrorDescription;	// @synthesize=_playbackErrorDescription
@property(assign, nonatomic) float playbackRate;
@property(readonly, assign, nonatomic) unsigned playbackState;
@property(retain, nonatomic) UIImage* posterImage;
@property(readonly, assign, nonatomic) double seekableEndTime;
@property(readonly, assign, nonatomic) double seekableStartTime;
@property(assign, nonatomic) BOOL stopAtEnd;
@property(assign, nonatomic) BOOL useApplicationAudioSession;
@property(assign, nonatomic) BOOL useHostedWindowWhenFullscreen;
@property(assign, nonatomic) BOOL useLegacyControls;
@property(assign, nonatomic) BOOL videoFrameDisplayOnResumeDisabled;
@property(readonly, assign, nonatomic) BOOL videoOutActive;
@property(readonly, assign, nonatomic) UIView* view;
@property(readonly, assign, nonatomic) float volume;
@property(copy, nonatomic) NSString* youTubeVideoID;	// @synthesize=_youTubeVideoID
+(void)allInstancesResignActive;
+(CGSize)fillSizeForMovieBounds:(CGRect)movieBounds movieNaturalSize:(CGSize)size interfaceOrientation:(int)orientation destinationTVOut:(BOOL)anOut;
+(Class)preferredWindowClass;
-(id)initWithPlayerSize:(CGSize)playerSize;
-(id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen;
-(id)initWithPlayerSize:(CGSize)playerSize isFullScreen:(BOOL)screen options:(unsigned)options;
-(id)initWithPlayerSize:(CGSize)playerSize options:(unsigned)options;
-(id)_activeVideoController;
-(void)_addSnapshotViewForTime:(double)time;
-(void)_autoRotateToCurrentOrientationAnimated:(BOOL)currentOrientationAnimated;
-(void)_autoRotateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;
-(id)_backgroundPlaceholderView;
-(void)_beginDeviceOrientationNotifications;
-(void)_bufferingStateChangedNotification:(id)notification;
-(BOOL)_canAutoRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)_commitFinishInitializeActiveViewController:(id)controller animate:(BOOL)animate;
-(unsigned long long)_convertedPartsMask:(unsigned)mask;
-(unsigned long long)_convertedVisiblePartsMask:(unsigned)mask;
-(void)_deviceOrientationChanged:(id)changed;
-(void)_didEnterBackgroundNotification:(id)notification;
-(void)_endDeviceOrientationNotifications;
-(void)_ensureActive;
-(void)_exitPlayer:(int)player;
-(int)_exitReasonForMPViewControllerExitReason:(int)mpviewControllerExitReason;
-(void)_finishInitializeActiveViewController:(id)controller forTransition:(BOOL)transition;
-(void)_initializeVideoViewController:(id)controller orientation:(int)orientation;
-(void)_itemChangedNotification:(id)notification;
-(void)_itemDurationAvailableNotification:(id)notification;
-(void)_itemPlaybackDidEndNotification:(id)_itemPlayback;
-(void)_itemReadyToPlayNotification:(id)playNotification;
-(void)_moviePlayerDidBecomeActiveNotification:(id)_moviePlayer;
-(void)_moviePlayerWillBecomeActiveNotification:(id)_moviePlayer;
-(void)_movieTypeAvailableNotification:(id)notification;
-(void)_mutedDidChangeNotification:(id)_muted;
-(BOOL)_noteStoppedIgnoringChangeType:(unsigned)type;
-(id)_parentViewControllerForController:(id)controller;
-(void)_pausePlaybackForNotification:(id)notification;
-(void)_performTransition:(id)transition toController:(id)controller;
-(void)_playbackStateChanged:(id)changed;
-(id)_portraitNavigationController:(BOOL)controller;
-(void)_prepareAndSetupUI;
-(void)_prepareAndSetupUIForClient;
-(void)_rateDidChangeNotification:(id)_rate;
-(void)_reconfigurePortraitNavigationItem:(id)item time:(double)time animate:(BOOL)animate;
-(void)_registerForNotifications;
-(void)_reloadForTransitionFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 animated:(BOOL)animated;
-(void)_removeSnapshotView;
-(void)_serverDeathNotification:(id)notification;
-(void)_setActiveViewController:(id)controller forTransition:(BOOL)transition;
-(void)_setTVOutEnabled:(BOOL)enabled;
-(BOOL)_shouldIgnoreChangeType:(unsigned)type;
-(void)_simpleRemoteNotification:(id)notification;
-(void)_tickNotification:(id)notification;
-(void)_timeDidJumpNotification:(id)_time;
-(void)_timedMetadataAvailableNotification:(id)notification;
-(id)_topViewController;
-(void)_transitionFinished:(id)finished;
-(void)_tvOutCapabilityChanged:(id)changed;
-(void)_unregisterForNotifications;
-(void)_updateEnabledParts;
-(void)_updateForStreamingOptions;
-(void)_updatePlayableContentTypeOverride;
-(void)_validityChangedNotification:(id)notification;
-(void)_videoViewPathWillChangeNotification:(id)_videoViewPath;
-(void)_volumeDidChangeNotification:(id)_volume;
-(void)_willBeginSuspendAnimationNotification:(id)notification;
-(void)_willEnterForegroundNotification:(id)notification;
-(void)_willResignNotification:(id)notification;
-(void)_willSuspendNotification:(id)notification;
// declared property getter: -(id)accessLog;
// declared property getter: -(BOOL)alwaysAllowHidingControlsOverlay;
// declared property getter: -(BOOL)areClosedCaptionsAvailable;
// declared property getter: -(unsigned)audioControlsStyle;
// declared property getter: -(id)audioSessionModeOverride;
-(unsigned)autoRotationMask;
// declared property getter: -(id)backgroundPlaceholderImage;
-(id)backgroundView;
-(void)beginExternalTransformation;
-(void)beginIgnoringChangeTypes:(unsigned)types;
-(void)beginTransition;
// declared property getter: -(unsigned)bufferingState;
// declared property getter: -(BOOL)canContinuePlayingInBackground;
// declared property getter: -(BOOL)canContinuePlayingWhenLocked;
// declared property getter: -(BOOL)closedCaptioningEnabled;
// declared property getter: -(id)currentDate;
// declared property getter: -(double)currentTime;
-(void)dealloc;
-(void)debugSetup;
-(void)delayedDebugSetup;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)disallowsVideoOut;
// declared property getter: -(double)duration;
-(void)endExternalTransformation;
-(void)endIgnoringChangeTypes:(unsigned)types;
-(void)endTransition;
// declared property getter: -(id)errorLog;
// declared property getter: -(long long)fileSize;
// declared property getter: -(id)fullscreenView;
// declared property getter: -(unsigned)hostedWindowContextID;
-(int)interfaceOrientation;
-(BOOL)isFullScreen;
// declared property getter: -(BOOL)isFullscreen;
// declared property getter: -(BOOL)isPreparedForPlayback;
// declared property getter: -(id)item;
-(void)layoutUIInRect:(CGRect)rect;
-(void)layoutUIInRect:(CGRect)rect fullScreen:(BOOL)screen;
// declared property getter: -(id)moviePath;
-(CGRect)moviePlaceholderImageRectForMovieWithAspectRatio:(float)aspectRatio;
// declared property getter: -(id)movieSubtitle;
// declared property getter: -(id)movieTitle;
// declared property getter: -(id)movieView;
// declared property getter: -(BOOL)muted;
// declared property getter: -(CGSize)naturalSize;
-(id)newTransitionControllerForChangeToInterfaceOrientation:(int)interfaceOrientation fromInterfaceOrientation:(int)interfaceOrientation2;
-(id)newViewControllerForItem:(id)item interfaceOrientation:(int)orientation reusingController:(id)controller;
// declared property getter: -(unsigned)options;
-(void)pause;
-(void)performTransition:(id)transition;
-(void)play;
// declared property getter: -(unsigned)playableContentType;
// declared property getter: -(double)playableDuration;
// declared property getter: -(double)playableEndTime;
// declared property getter: -(double)playableStartTime;
// declared property getter: -(id)playbackErrorDescription;
// declared property getter: -(float)playbackRate;
// declared property getter: -(unsigned)playbackState;
-(id)playerView;
-(void)portraitDoneButtonAction:(id)action;
-(void)portraitScaleButtonAction:(id)action;
// declared property getter: -(id)posterImage;
-(void)prepareAndSetupUI;
-(void)prepareForPlayback;
-(void)resignActive;
-(BOOL)seekToDate:(id)date;
// declared property getter: -(double)seekableEndTime;
// declared property getter: -(double)seekableStartTime;
-(void)setAllowsDetailScrubbing:(BOOL)scrubbing;
-(void)setAllowsWirelessPlayback:(BOOL)playback;
// declared property setter: -(void)setAlwaysAllowHidingControlsOverlay:(BOOL)overlay;
-(void)setAttemptAutoPlayWhenControlsHidden:(BOOL)hidden;
// declared property setter: -(void)setAudioControlsStyle:(unsigned)style;
// declared property setter: -(void)setAudioSessionModeOverride:(id)override;
-(void)setAutoPlayWhenLikelyToKeepUp:(BOOL)keepUp;
-(void)setAutoRotationMask:(unsigned)mask;
// declared property setter: -(void)setBackgroundPlaceholderImage:(id)image;
-(void)setCanAnimateControlsOverlay:(BOOL)overlay;
-(void)setCanShowControlsOverlay:(BOOL)overlay;
// declared property setter: -(void)setClosedCaptioningEnabled:(BOOL)enabled;
-(void)setClosedCaptions:(id)captions;
-(void)setControlsOverlayVisible:(BOOL)visible disableAutohide:(BOOL)autohide animate:(BOOL)animate;
// declared property setter: -(void)setCurrentTime:(double)time;
-(void)setCurrentTime:(double)time timeSnapOption:(unsigned)option;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)setDesiredMovieParts:(unsigned)parts animated:(BOOL)animated;
// declared property setter: -(void)setDisallowsVideoOut:(BOOL)anOut;
-(void)setDisplayable:(BOOL)displayable movieParts:(unsigned)parts animated:(BOOL)animated;
-(void)setDisplayableMovieParts:(unsigned)parts animated:(BOOL)animated;
// declared property setter: -(void)setFullscreen:(BOOL)fullscreen;
-(void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;
-(void)setInlinePlaybackUsesTVOut:(BOOL)anOut;
-(BOOL)setInterfaceOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;
// declared property setter: -(void)setItem:(id)item;
-(void)setItem:(id)item animated:(BOOL)animated;
-(void)setManagesStatusBar:(BOOL)bar;
// declared property setter: -(void)setMoviePath:(id)path;
// declared property setter: -(void)setMovieSubtitle:(id)subtitle;
// declared property setter: -(void)setMovieTitle:(id)title;
// declared property setter: -(void)setOptions:(unsigned)options;
-(BOOL)setOrientation:(int)orientation animated:(BOOL)animated forced:(BOOL)forced;
// declared property setter: -(void)setPlayableContentType:(unsigned)type;
// declared property setter: -(void)setPlaybackErrorDescription:(id)description;
// declared property setter: -(void)setPlaybackRate:(float)rate;
// declared property setter: -(void)setPosterImage:(id)image;
// declared property setter: -(void)setStopAtEnd:(BOOL)end;
// declared property setter: -(void)setUseApplicationAudioSession:(BOOL)session;
// declared property setter: -(void)setUseHostedWindowWhenFullscreen:(BOOL)fullscreen;
// declared property setter: -(void)setUseLegacyControls:(BOOL)controls;
// declared property setter: -(void)setVideoFrameDisplayOnResumeDisabled:(BOOL)disabled;
// declared property setter: -(void)setYouTubeVideoID:(id)anId;
-(void)snapshotViewWasTapped:(id)tapped;
-(void)stop;
// declared property getter: -(BOOL)stopAtEnd;
-(void)tearDownUI;
-(void)unlockMoviePlaybackResources;
// declared property getter: -(BOOL)useApplicationAudioSession;
// declared property getter: -(BOOL)useHostedWindowWhenFullscreen;
// declared property getter: -(BOOL)useLegacyControls;
-(BOOL)videoController:(id)controller tappedButtonPart:(unsigned long long)part;
-(void)videoController:(id)controller willHideOverlayWithDuration:(double)duration;
-(void)videoController:(id)controller willShowOverlayWithDuration:(double)duration;
-(void)videoControllerDidCreateFullscreenView:(id)videoController;
-(void)videoControllerDidEnterFullscreen:(id)videoController;
-(void)videoControllerDidExitFullscreen:(id)videoController;
-(void)videoControllerDidHideOverlay:(id)videoController;
-(void)videoControllerDidShowOverlay:(id)videoController;
-(CGRect)videoControllerFrameAfterFullscreenExit:(id)exit;
-(BOOL)videoControllerShouldAutohide:(id)videoController;
-(void)videoControllerWillEnterFullscreen:(id)videoController;
-(void)videoControllerWillExitFullscreen:(id)videoController reason:(int)reason;
// declared property getter: -(BOOL)videoFrameDisplayOnResumeDisabled;
// declared property getter: -(BOOL)videoOutActive;
// declared property getter: -(id)view;
-(void)viewController:(id)controller beginIgnoringChangeTypes:(unsigned)types;
-(void)viewController:(id)controller endIgnoringChangeType:(unsigned)type;
-(void)viewControllerFailedToPlay:(id)play withError:(id)error;
-(void)viewControllerRequestsExit:(id)exit reason:(int)reason;
// declared property getter: -(float)volume;
// declared property getter: -(id)youTubeVideoID;
@end

