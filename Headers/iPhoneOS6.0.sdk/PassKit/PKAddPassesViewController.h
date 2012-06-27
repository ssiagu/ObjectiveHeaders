/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, PKRemoteAddPassesViewController, NSURL, _UIAsyncInvocation, PKIngestibleCard;
@protocol PKAddPassesViewControllerDelegate;

@interface PKAddPassesViewController : XXUnknownSuperclass {
@private
	BOOL _viewHasAppeared;
	NSDate* _perfTestingForIngestion;
	PKRemoteAddPassesViewController* _remoteViewController;
	_UIAsyncInvocation* _cancelViewServiceRequest;
	PKIngestibleCard* _card;
	NSURL* _URL;
	int _previousStatusBarStyle;
	id<PKAddPassesViewControllerDelegate> _delegate;
}
@property(retain, getter=_URL, setter=_setURL:) NSURL* _URL;	// @synthesize
@property(retain, getter=_cancelViewServiceRequest, setter=_setCancelViewServiceRequest:) _UIAsyncInvocation* _cancelViewServiceRequest;	// @synthesize
@property(retain, getter=_card, setter=_setCard:) PKIngestibleCard* _card;	// @synthesize
@property(assign, getter=_previousStatusBarStyle, setter=_setPreviousStatusBarStyle:) int _previousStatusBarStyle;	// @synthesize
@property(retain, getter=_remoteViewController, setter=_setRemoteViewController:) PKRemoteAddPassesViewController* _remoteViewController;	// @synthesize
@property(assign, nonatomic) id<PKAddPassesViewControllerDelegate> delegate;	// @synthesize=_delegate
+(BOOL)isAvailable;
-(id)initWithData:(id)data;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithPass:(id)pass;
-(id)initWithPass:(id)pass orURL:(id)url;
-(id)initWithURL:(id)url;
// declared property getter: -(id)_URL;
// declared property getter: -(id)_cancelViewServiceRequest;
// declared property getter: -(id)_card;
// declared property getter: -(int)_previousStatusBarStyle;
// declared property getter: -(id)_remoteViewController;
// declared property setter: -(void)_setCancelViewServiceRequest:(id)request;
// declared property setter: -(void)_setCard:(id)card;
// declared property setter: -(void)_setPreviousStatusBarStyle:(int)style;
// declared property setter: -(void)_setRemoteViewController:(id)controller;
// declared property setter: -(void)_setURL:(id)url;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)ingestionDidFinishWithResult:(int)ingestion;
-(void)loadView;
-(int)modalPresentationStyle;
-(int)modalTransitionStyle;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end
