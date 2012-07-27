/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EKEditItemViewControllerDelegate.h"
#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EKEventStore, EKCalendarItem, UIViewController;
@protocol EKEditItemViewControllerProtocol, EKCalendarItemEditItemDelegate, EKStyleProvider;

__attribute__((visibility("hidden")))
@interface EKCalendarItemEditItem : XXUnknownSuperclass <EKEditItemViewControllerDelegate> {
@private
	EKEventStore* _store;
	id<EKCalendarItemEditItemDelegate> _delegate;
	UIViewController<EKEditItemViewControllerProtocol>* _viewController;
	id<EKStyleProvider> _styleProvider;
	EKCalendarItem* _calendarItem;
}
@property(assign) id<EKCalendarItemEditItemDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) id<EKStyleProvider> styleProvider;	// @synthesize=_styleProvider
-(void)addStylingToCell:(id)cell forSubitemAtIndex:(int)index;
-(BOOL)applicationDidResume;
-(id)calendarItem;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)calendarConstraints;
-(id)cellForSubitemAtIndex:(int)index;
-(BOOL)configureForCalendarConstraints:(id)calendarConstraints;
-(void)dealloc;
-(float)defaultCellHeightForSubitemAtIndex:(int)index forWidth:(float)width;
// declared property getter: -(id)delegate;
-(id)detailViewControllerWithFrame:(CGRect)frame forSubitemAtIndex:(int)index;
-(void)editItemViewController:(id)controller didCompleteWithAction:(int)action;
-(BOOL)editItemViewControllerCommit:(id)commit;
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)pinned;
-(void)eventEditor:(id)editor didSelectSubitem:(int)subitem;
-(void)eventEditor:(id)editor didTapAccessoryButtonForSubitem:(int)subitem;
-(float)footerHeightForWidth:(float)width;
-(id)footerView;
-(BOOL)isInline;
-(void)notifyDidEndEditing;
-(void)notifyDidStartEditing;
-(void)notifyRequiresHeightChange;
-(void)notifySubitemDidCommit:(int)notifySubitem;
-(void)notifyTextChanged;
-(int)numberOfSubitems;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)requiresReconfigurationOnCommit;
-(void)reset;
-(BOOL)saveAndDismissWithForce:(BOOL)force;
-(id)selectedTextField;
-(void)setCalendarItem:(id)item store:(id)store;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setStyleProvider:(id)provider;
-(BOOL)shouldAppearForCalendarItem:(id)calendarItem;
-(BOOL)shouldAppearWithVisibility:(int)visibility;
// declared property getter: -(id)styleProvider;
-(id)viewForActionSheet;
@end
