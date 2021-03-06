/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GKCellBackgroundView, UIImageView, UITextView;

@interface GKComposeMessageView : XXUnknownSuperclass {
@private
	UIImageView* _backgroundView;
	GKCellBackgroundView* _outlineView;
	UITextView* _textView;
}
@property(retain, nonatomic) UIImageView* backgroundView;	// @synthesize=_backgroundView
@property(retain, nonatomic) GKCellBackgroundView* outlineView;	// @synthesize=_outlineView
@property(retain, nonatomic) UITextView* textView;	// @synthesize=_textView
-(id)initWithFrame:(CGRect)frame;
// declared property getter: -(id)backgroundView;
-(void)dealloc;
-(void)layoutSubviews;
// declared property getter: -(id)outlineView;
// declared property setter: -(void)setBackgroundView:(id)view;
// declared property setter: -(void)setOutlineView:(id)view;
// declared property setter: -(void)setTextView:(id)view;
// declared property getter: -(id)textView;
@end

