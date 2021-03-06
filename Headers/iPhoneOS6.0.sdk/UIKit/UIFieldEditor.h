/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAutoscrollContainer.h"
#import "UIWebDocumentView.h"

@class NSString, UIView, DOMDocument, DOMHTMLElement;
@protocol UITextInput;

@interface UIFieldEditor : UIWebDocumentView <UIAutoscrollContainer> {
	DOMDocument* _document;
	DOMHTMLElement* _textElement;
	DOMHTMLElement* _sizeElement;
	NSString* _currentStyle;
	UIView<UITextInput>* _proxiedView;
@private
	unsigned _baseWritingDirectionIsRTL : 1;
	unsigned _changingView : 1;
	unsigned _disableNotifications : 1;
	unsigned _delegateRespondsToFieldEditorDidChange : 1;
	unsigned _delegateRespondsToShouldInsertText : 1;
	unsigned _delegateRespondsToShouldReplaceWithText : 1;
	unsigned _fieldEditorReentrancyGuard : 1;
	unsigned _clearOnDelete : 1;
}
@property(assign, nonatomic) CGPoint autoscrollContentOffset;
+(id)activeFieldEditor;
+(id)excludedElementsForHTML;
+(void)releaseSharedInstance;
+(id)sharedFieldEditor;
-(id)initWithFrame:(CGRect)frame;
-(void)_deleteBackwardAndNotify:(BOOL)notify;
-(id)_responderForBecomeFirstResponder;
-(void)_selectNSRange:(NSRange)range;
-(void)_setTextElementAttributedText:(id)text;
-(void)_setTextElementString:(id)string;
-(void)_setTextElementStyle:(id)style;
-(id)_textSelectingContainer;
-(id)attributedText;
-(id)automaticallySelectedOverlay;
// declared property getter: -(CGPoint)autoscrollContentOffset;
-(void)autoscrollWillNotStart;
-(void)becomeFieldEditorForView:(id)view;
-(void)beginSelectionChange;
-(CGRect)caretRect;
-(CGRect)caretRectForVisiblePosition:(id)visiblePosition;
-(unsigned)characterOffsetAtPoint:(CGPoint)point;
-(CGRect)contentFrameForView:(id)view;
-(CGSize)contentSize;
-(id)customOverlayContainer;
-(void)dealloc;
-(void)deleteBackward;
-(void)disableClearsOnInsertion;
-(BOOL)hasMarkedText;
-(id)interactionAssistant;
-(BOOL)isEditing;
-(BOOL)isInsideRichlyEditableTextWidget;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)keyboardInputChanged:(id)changed;
-(void)keyboardInputChangedSelection:(id)selection;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(BOOL)mouseEventsChangeSelection;
-(void)mouseUp:(GSEventRef)up;
-(BOOL)notificationsDisabled;
-(id)proxiedView;
-(BOOL)resignFirstResponder;
-(void)resumeWithNotification:(id)notification;
-(void)revealSelection;
-(void)scrollSelectionToVisible:(BOOL)visible;
-(void)scrollToMakeInlineHoleVisible;
-(int)scrollXOffset;
-(int)scrollYOffset;
-(void)selectAll;
-(void)selectionChanged;
-(NSRange)selectionRange;
-(id)selectionView;
-(void)setAttributedText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;
// declared property setter: -(void)setAutoscrollContentOffset:(CGPoint)offset;
-(void)setBaseWritingDirection:(int)direction;
-(void)setBaseWritingDirection:(int)direction forRange:(id)range;
-(void)setFrame:(CGRect)frame;
-(void)setNotificationsDisabled:(BOOL)disabled;
-(void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;
-(void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;
-(void)setSelection:(NSRange)selection;
-(void)setStyle:(id)style;
-(void)setText:(id)text andSetCaretSelectionAfterText:(BOOL)text2;
-(void)setTextSelectionBehavior:(int)behavior;
-(id)sizeStyleForRect:(CGRect)rect;
-(void)startAutoscroll:(CGPoint)autoscroll;
-(id)style;
-(id)text;
-(id)textColorForCaretSelection;
-(id)textInputTraits;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)updateAutoscroll:(id)autoscroll;
-(BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;
-(BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;
-(BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;
-(void)webViewDidChange:(id)webView;
@end

