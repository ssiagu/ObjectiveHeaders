/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIBarButtonItem, UIColor, NSArray;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView {
@private
	id _delegate;
	UIBarButtonItem* _highlightedBarButtonItem;
	UIImageView* _highlightedImageView;
	UIImageView* _backgroundGlow;
	NSArray* _passthroughViews;
	BOOL _ignoresTouches;
	BOOL _displayed;
	BOOL _inPassthroughHitTest;
	UIColor* _dimmingColor;
}
@property(assign, nonatomic) id delegate;	// @synthesize=_delegate
@property(retain, nonatomic) UIColor* dimmingColor;	// @synthesize=_dimmingColor
@property(assign, nonatomic) BOOL displayed;	// @synthesize=_displayed
@property(retain, nonatomic) UIBarButtonItem* highlightedBarButtonItem;
@property(assign, nonatomic) BOOL ignoresTouches;	// @synthesize=_ignoresTouches
@property(retain, nonatomic) NSArray* passthroughViews;	// @synthesize=_passthroughViews
+(id)defaultDimmingColor;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(id)dimmingColor;
-(void)dimmingRemovalAnimationDidStop;
-(void)display:(BOOL)display withAnimationDuration:(float)animationDuration afterDelay:(float)delay;
// declared property getter: -(BOOL)displayed;
// declared property getter: -(id)highlightedBarButtonItem;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
// declared property getter: -(BOOL)ignoresTouches;
-(void)mouseUp:(GSEventRef)up;
// declared property getter: -(id)passthroughViews;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDimmingColor:(id)color;
// declared property setter: -(void)setDisplayed:(BOOL)displayed;
// declared property setter: -(void)setHighlightedBarButtonItem:(id)item;
// declared property setter: -(void)setIgnoresTouches:(BOOL)touches;
// declared property setter: -(void)setPassthroughViews:(id)views;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end

