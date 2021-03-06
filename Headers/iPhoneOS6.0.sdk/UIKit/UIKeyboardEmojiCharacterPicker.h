/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiPicker.h"
#import "UIKeyboardEmojiInput.h"

@class UIKeyboardEmojiInputController, UIKeyboardEmojiCategory;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCharacterPicker : UIKeyboardEmojiPicker <UIKeyboardEmojiInput> {
@private
	UIKeyboardEmojiCategory* _category;
	UIKeyboardEmojiInputController* _inputController;
}
@property(assign) UIKeyboardEmojiCategory* category;	// @synthesize=_category
-(id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;
// declared property getter: -(id)category;
-(id)charactersForRow:(int)row;
-(void)dealloc;
-(void)reloadForCategory:(id)category;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
// declared property setter: -(void)setCategory:(id)category;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
@end

