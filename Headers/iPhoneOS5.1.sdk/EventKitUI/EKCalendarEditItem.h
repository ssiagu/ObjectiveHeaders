/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKEventStore, EKCalendar;
@protocol EKStyleProvider, EKCalendarEditItemDelegate;

__attribute__((visibility("hidden")))
@interface EKCalendarEditItem : XXUnknownSuperclass {
@private
	EKEventStore* _store;
	EKCalendar* _calendar;
	id<EKCalendarEditItemDelegate> _delegate;
	id<EKStyleProvider> _styleProvider;
}
@property(assign) id<EKCalendarEditItemDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) id<EKStyleProvider> styleProvider;	// @synthesize=_styleProvider
-(BOOL)becomeFirstResponder;
-(void)calendarEditor:(id)editor didSelectSubitem:(int)subitem;
-(id)cellForSubitemAtIndex:(int)index;
-(void)dealloc;
-(float)defaultCellHeightForSubitemAtIndex:(int)index forWidth:(float)width;
// declared property getter: -(id)delegate;
-(id)headerTitle;
-(int)numberOfSubitems;
-(void)reset;
-(BOOL)saveStateToCalendar:(id)calendar;
-(void)setCalendar:(id)calendar store:(id)store;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setStyleProvider:(id)provider;
// declared property getter: -(id)styleProvider;
@end

