/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {
@private
	UIResponder<UITextInput>* _textView;
}
@property(assign) UIResponder<UITextInput>* textView;	// @synthesize=_textView
-(void)invalidate;
-(BOOL)isCloseToCaret;
// declared property setter: -(void)setTextView:(id)view;
-(void)startTimer;
// declared property getter: -(id)textView;
@end
