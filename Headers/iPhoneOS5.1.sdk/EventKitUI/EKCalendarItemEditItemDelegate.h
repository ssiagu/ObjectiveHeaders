/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "NSObject.h"


@protocol EKCalendarItemEditItemDelegate <NSObject>
-(id)defaultAlertTitleForEditItem:(id)editItem;
@optional
-(void)editItem:(id)item wantsKeyboardPinned:(BOOL)pinned;
-(void)editItemDidCommit:(id)editItem;
-(void)editItemDidEndEditing:(id)editItem;
-(void)editItemDidStartEditing:(id)editItem;
-(void)editItemRequiresHeightChange:(id)change;
-(void)editItemTextChanged:(id)changed;
-(id)viewControllerForEditItem:(id)editItem;
@end

