/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MFComposeHeaderView.h"

@class MFHeaderLabelView, UIView, NSString;

@interface MFComposeHeaderView : XXUnknownSuperclass {
	NSString* _label;
	NSString* _navTitle;
	MFHeaderLabelView* _labelView;
	id _delegate;
	UIView* _separator;
}
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)_canBecomeFirstResponder;
-(void)dealloc;
-(void)handleTouchesEnded;
-(CGColorRef)labelColor;
-(void)layoutSubviews;
-(float)maxLabelX;
-(id)navTitle;
-(void)setDelegate:(id)delegate;
-(void)setFrame:(CGRect)frame;
-(void)setLabel:(id)label;
-(void)setLabelHighlighted:(BOOL)highlighted;
-(void)setNavTitle:(id)title;
-(void)touchesEnded:(id)ended withEvent:(id)event;
@end

@interface MFComposeHeaderView (SyntheticEvents)
-(id)_automationID;
@end

