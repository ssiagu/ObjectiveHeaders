/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertView.h"


__attribute__((visibility("hidden")))
@interface _UIUserNotificationAlertView : UIAlertView {
@private
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _userNotificationRunLoopSource;
	BOOL _runsModal;
	BOOL _runningModal;
}
+(void)initialize;
-(void)_cancelUserNotification;
-(int)addButtonWithTitle:(id)title;
-(void)cancelAlertView;
-(void)dealloc;
-(void)dismissWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;
-(BOOL)isVisible;
-(BOOL)runsModal;
-(void)setRemoteViewController:(id)controller;
-(void)setRunsModal:(BOOL)modal;
-(void)show;
-(id)textFieldAtIndex:(int)index;
@end
