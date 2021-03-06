/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "UIPopoverControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol MFMailPopoverManagerDelegate;

@interface MFPopoverController : XXUnknownSuperclass <UIPopoverControllerDelegate> {
	id _mailDelegate;
	id _mailPopoverManager;
	BOOL _isRotating;
}
@property(assign, nonatomic) BOOL isRotating;	// @synthesize=_isRotating
@property(assign, nonatomic) id<MFMailPopoverManagerDelegate> mailDelegate;	// @synthesize=_mailDelegate
@property(assign, nonatomic) id mailPopoverManager;	// @synthesize=_mailPopoverManager
-(id)initWithContentViewController:(id)contentViewController;
-(void)dealloc;
-(void)dismissPopoverAnimated:(BOOL)animated;
// declared property getter: -(BOOL)isRotating;
// declared property getter: -(id)mailDelegate;
// declared property getter: -(id)mailPopoverManager;
-(void)popoverController:(id)controller animationCompleted:(int)completed;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(BOOL)popoverControllerShouldDismissPopover:(id)popoverController;
// declared property setter: -(void)setIsRotating:(BOOL)rotating;
// declared property setter: -(void)setMailDelegate:(id)delegate;
// declared property setter: -(void)setMailPopoverManager:(id)manager;
@end

