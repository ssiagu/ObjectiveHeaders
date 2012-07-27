/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "EKCalendarItemEditorDelegate.h"
#import "EKReminderEditorDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EKReminder, EKEventStore, EKReminderEditor;
@protocol EKStyleProvider, EKReminderViewControllerDelegate;

@interface EKReminderViewController : XXUnknownSuperclass <EKCalendarItemEditorDelegate, EKReminderEditorDelegate> {
	id<EKReminderViewControllerDelegate> _delegate;
@private
	EKReminderEditor* _editor;
}
@property(assign, nonatomic) id<EKReminderViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) EKReminderEditor* editor;	// @synthesize=_editor
@property(retain, nonatomic) EKEventStore* eventStore;
@property(retain, nonatomic) EKReminder* reminder;
@property(retain, nonatomic) id<EKStyleProvider> styleProvider;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)_eventStoreChanged:(id)changed;
-(BOOL)allowContextProvider:(id)provider;
-(CGSize)contentSizeForViewInPopover;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(id)editor;
-(void)eventEditor:(id)editor didCompleteWithAction:(int)action;
-(void)eventEditorDidChangeHeight:(id)eventEditor;
// declared property getter: -(id)eventStore;
-(id)getCurrentContext;
-(void)loadView;
-(id)navigationItem;
// declared property getter: -(id)reminder;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setEditor:(id)editor;
// declared property setter: -(void)setEventStore:(id)store;
// declared property setter: -(void)setReminder:(id)reminder;
// declared property setter: -(void)setStyleProvider:(id)provider;
// declared property getter: -(id)styleProvider;
-(id)viewForActionSheet;
-(void)viewSizeChanged;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
@end
