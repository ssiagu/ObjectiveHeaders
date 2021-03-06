/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboard.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard {
@private
	BOOL showsCandidateBar;
	BOOL showsCandidateInline;
}
@property(assign, nonatomic) BOOL showsCandidateBar;	// @synthesize
@property(assign, nonatomic) BOOL showsCandidateInline;	// @synthesize
-(id)initWithFrame:(CGRect)frame;
-(BOOL)_isAutomaticKeyboard;
-(void)activate;
-(void)dealloc;
-(void)didSuspend:(id)suspend;
-(UIPeripheralAnimationGeometry)geometryForHeightDelta:(float)heightDelta;
-(void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;
-(BOOL)isActive;
-(void)maximize;
-(void)minimize;
-(void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;
// declared property setter: -(void)setShowsCandidateBar:(BOOL)bar;
// declared property setter: -(void)setShowsCandidateInline:(BOOL)anInline;
// declared property getter: -(BOOL)showsCandidateBar;
// declared property getter: -(BOOL)showsCandidateInline;
-(void)willResume:(id)resume;
@end

