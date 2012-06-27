/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, CMAttitude, CMMotionManager, NSOperationQueue;

@interface MPMotionManager : XXUnknownSuperclass {
@private
	NSMutableSet* _accelerometerHandlerClients;
	BOOL _accelerometerUpdatesActive;
	CMAttitude* _attitude;
	CMMotionManager* _motionManager;
	NSOperationQueue* _operationQueue;
}
+(id)sharedMotionManager;
-(id)init;
-(void)_applicationDidBecomeActiveNotification:(id)_application;
-(void)_applicationWillResignActiveNotification:(id)_application;
-(void)_beginMotionUpdates;
-(id)addObserverWithAccelerometerHandler:(id)accelerometerHandler;
-(void)dealloc;
-(void)removeObserver:(id)observer;
@end
