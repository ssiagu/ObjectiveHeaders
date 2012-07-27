/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "UITextViewDelegate.h"
#import "EKEventEditItem.h"
#import "EventKitUI-Structs.h"

@class UIResponder, CalendarNotesCell;

__attribute__((visibility("hidden")))
@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate> {
@private
	CalendarNotesCell* _cell;
	UIResponder* _selectedTextField;
}
@property(retain, nonatomic) UIResponder* selectedResponder;	// @synthesize=_selectedTextField
-(id)cellForSubitemAtIndex:(int)index;
-(void)dealloc;
-(float)defaultCellHeightForSubitemAtIndex:(int)index forWidth:(float)width;
-(BOOL)isInline;
-(void)reset;
-(BOOL)saveAndDismissWithForce:(BOOL)force;
// declared property getter: -(id)selectedResponder;
-(id)selectedTextField;
// declared property setter: -(void)setSelectedResponder:(id)responder;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidBeginEditing:(id)textView;
-(void)textViewDidEndEditing:(id)textView;
@end
