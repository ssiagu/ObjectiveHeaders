/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKTurnBasedMatchesViewController;
@protocol GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchmakerViewController : XXUnknownSuperclass {
@private
	GKTurnBasedMatchesViewController* _privateViewController;
}
@property(retain, nonatomic) GKTurnBasedMatchesViewController* privateViewController;	// @synthesize=_privateViewController
@property(assign, nonatomic) BOOL showExistingMatches;	// @dynamic
@property(assign, nonatomic) id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;	// @dynamic
-(id)initWithMatchRequest:(id)matchRequest;
-(void)dealloc;
// declared property getter: -(id)privateViewController;
// declared property setter: -(void)setPrivateViewController:(id)controller;
// declared property setter: -(void)setShowExistingMatches:(BOOL)matches;
// declared property setter: -(void)setTurnBasedMatchmakerDelegate:(id)delegate;
// declared property getter: -(BOOL)showExistingMatches;
// declared property getter: -(id)turnBasedMatchmakerDelegate;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end
