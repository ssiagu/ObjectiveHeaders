/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebFormControl.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UIKit-Structs.h"
#import "UIPickerView.h"

@class DOMHTMLSelectElement, NSArray;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebSelectPicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
@private
	DOMHTMLSelectElement* _selectionNode;
	NSArray* _cachedItems;
	id<UIWebSelectedItemPrivate> _singleSelectionItem;
	unsigned _singleSelectionIndex;
	float _fontSize;
	float _maximumTextWidth;
	int _textAlignment;
	float _layoutWidth;
}
@property(retain, nonatomic) NSArray* _cachedItems;	// @synthesize
@property(retain, nonatomic) DOMHTMLSelectElement* _selectionNode;	// @synthesize
@property(retain, nonatomic) id<UIWebSelectedItemPrivate> _singleSelectionItem;	// @synthesize
-(id)initWithDOMHTMLSelectElement:(id)domhtmlselectElement cachedItems:(id)items singleSelectionItem:(id)item singleSelectionIndex:(unsigned)index multipleSelection:(BOOL)selection;
// declared property getter: -(id)_cachedItems;
-(int)_itemIndexForRowIndex:(int)rowIndex;
// declared property getter: -(id)_selectionNode;
// declared property getter: -(id)_singleSelectionItem;
-(void)controlBeginEditing;
-(id)controlView;
-(void)dealloc;
-(void)layoutSubviews;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(void)pickerView:(id)view row:(int)row column:(int)column checked:(BOOL)checked;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
// declared property setter: -(void)set_cachedItems:(id)items;
// declared property setter: -(void)set_selectionNode:(id)node;
// declared property setter: -(void)set_singleSelectionItem:(id)item;
@end

