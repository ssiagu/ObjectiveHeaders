/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface ABActionSheet : XXUnknownSuperclass {
@private
	CFArrayRef _tags;
	CFArrayRef _tag2s;
	CFArrayRef _tag3s;
	CFArrayRef _tag4s;
	void* _ab_context;
}
@property(assign, nonatomic) void* ab_context;	// @synthesize=_ab_context
-(id)init;
-(id)initWithTitle:(id)title delegate:(id)delegate cancelButtonTitle:(id)title3 destructiveButtonTitle:(id)title4 otherButtonTitles:(id)titles;
-(int)_addButtonWithTitle:(id)title;
-(id)_addButtonWithTitle:(id)title label:(id)label;
-(id)ab_addButtonWithTitle:(id)title label:(id)label tag:(int)tag;
-(id)ab_addButtonWithTitle:(id)title label:(id)label tag:(int)tag tag2:(int)a2;
-(id)ab_addButtonWithTitle:(id)title label:(id)label tag:(int)tag tag2:(int)a2 tag3:(const void*)a3;
-(id)ab_addButtonWithTitle:(id)title label:(id)label tag:(int)tag tag2:(int)a2 tag3:(const void*)a3 tag4:(const void*)a4;
-(int)ab_addButtonWithTitle:(id)title tag:(int)tag;
-(int)ab_addButtonWithTitle:(id)title tag:(int)tag tag2:(int)a2;
// declared property getter: -(void*)ab_context;
-(int)ab_tag2AtIndex:(int)index;
-(const void*)ab_tag3AtIndex:(int)index;
-(const void*)ab_tag4AtIndex:(int)index;
-(int)ab_tagAtIndex:(int)index;
-(void)dealloc;
// declared property setter: -(void)setAb_context:(void*)context;
@end

