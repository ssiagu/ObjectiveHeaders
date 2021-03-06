/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, EKDayGridView, NSCalendar, EKEvent, EKCalendarDate, NSTimeZone, NSMutableArray;
@protocol EKDayViewContentDelegate;

@interface EKDayViewContent : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	EKDayGridView* _grid;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	unsigned _daysToDisplay;
	NSMutableArray* _dayStarts;
	NSMutableArray* _itemsByDay;
	unsigned _loadingOccurrences : 1;
	unsigned _allowsOccurrenceSelection : 1;
	unsigned _putSelectionOnTop : 1;
	unsigned _showsGrid : 1;
	unsigned _darkensSelection : 1;
	unsigned _eventsFillGrid : 1;
	unsigned _dimsNonSelectedItems : 1;
	EKEvent* _selectedEvent;
	EKEvent* _dimmedOccurrence;
	id<EKDayViewContentDelegate> _delegate;
	float _lastHeight;
	float _lastDayWidth;
	float _fixedDayWidth;
	BOOL _darkensWeekends;
	UIView* _saturdayDarkeningView;
	UIView* _sundayDarkeningView;
@private
	NSCalendar* _calendar;
	BOOL _usesSmallText;
}
@property(assign, nonatomic) BOOL allowsOccurrenceSelection;
@property(copy, nonatomic) NSCalendar* calendar;	// @synthesize=_calendar
@property(assign, nonatomic) BOOL darkensSelection;
@property(assign, nonatomic) BOOL darkensWeekends;	// @synthesize=_darkensWeekends
@property(assign, nonatomic) id<EKDayViewContentDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) EKEvent* dimmedOccurrence;	// @synthesize=_dimmedOccurrence
@property(assign, nonatomic) BOOL dimsNonSelectedItems;
@property(readonly, assign, nonatomic) EKCalendarDate* endDate;	// @synthesize=_endDate
@property(assign, nonatomic) BOOL eventsFillGrid;
@property(readonly, assign, nonatomic) double firstEventSecond;
@property(assign, nonatomic) float fixedDayWidth;
@property(assign, nonatomic) BOOL showsGrid;
@property(assign, nonatomic) BOOL showsLeftBorder;
@property(copy, nonatomic) EKCalendarDate* startDate;	// @synthesize=_startDate
@property(copy, nonatomic) NSTimeZone* timeZone;
@property(assign, nonatomic) BOOL usesSmallText;	// @synthesize=_usesSmallText
-(id)initWithFrame:(CGRect)frame orientation:(int)orientation;
-(id)initWithFrame:(CGRect)frame orientation:(int)orientation backgroundColor:(id)color opaque:(BOOL)opaque numberOfDaysToDisplay:(unsigned)display;
-(void)_computeDayStartsAndEnds;
-(NSRange)_dayRangeForEvent:(id)event;
-(NSRange)_dayRangeForEventWithStartDate:(id)startDate endDate:(id)date;
-(id)_dayStarts;
-(float)_dayWidth;
-(void)_layoutContentItems:(id)items dayStart:(id)start dayEnd:(id)end xPosition:(float)position width:(float)width;
-(void)_selectedOccurrenceChanged:(id)changed;
// declared property getter: -(BOOL)allowsOccurrenceSelection;
// declared property getter: -(id)calendar;
-(BOOL)containsEvent:(id)event;
// declared property getter: -(BOOL)darkensSelection;
// declared property getter: -(BOOL)darkensWeekends;
-(double)dateForPoint:(CGPoint)point;
-(void)dayOccurrenceViewClicked:(id)clicked atPoint:(CGPoint)point;
-(void)dayOccurrenceViewDragExited:(id)exited;
-(void)dayOccurrenceViewStartTouch:(id)touch atPoint:(CGPoint)point;
-(void)dealloc;
// declared property getter: -(id)delegate;
// declared property getter: -(id)dimmedOccurrence;
// declared property getter: -(BOOL)dimsNonSelectedItems;
// declared property getter: -(id)endDate;
// declared property getter: -(BOOL)eventsFillGrid;
-(BOOL)eventsIntersectRect:(CGRect)rect;
// declared property getter: -(double)firstEventSecond;
// declared property getter: -(float)fixedDayWidth;
-(id)grid;
-(void)layoutSubviews;
-(id)occurrenceViewForEvent:(id)event;
-(id)occurrenceViewForEvent:(id)event onDate:(double)date;
-(id)occurrenceViews;
-(CGPoint)pointForDate:(double)date;
-(void)selectEvent:(id)event;
-(id)selectedEvent;
// declared property setter: -(void)setAllowsOccurrenceSelection:(BOOL)selection;
// declared property setter: -(void)setCalendar:(id)calendar;
// declared property setter: -(void)setDarkensSelection:(BOOL)selection;
// declared property setter: -(void)setDarkensWeekends:(BOOL)weekends;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDimmedOccurrence:(id)occurrence;
// declared property setter: -(void)setDimsNonSelectedItems:(BOOL)items;
// declared property setter: -(void)setEventsFillGrid:(BOOL)grid;
// declared property setter: -(void)setFixedDayWidth:(float)width;
-(void)setHoursToPadTop:(int)padTop;
-(void)setOccurrences:(id)occurrences;
-(void)setOrientation:(int)orientation;
// declared property setter: -(void)setShowsGrid:(BOOL)grid;
// declared property setter: -(void)setShowsLeftBorder:(BOOL)border;
// declared property setter: -(void)setStartDate:(id)date;
-(void)setStartDateWithDateComponents:(id)dateComponents;
// declared property setter: -(void)setTimeZone:(id)zone;
// declared property setter: -(void)setUsesSmallText:(BOOL)text;
-(void)setViewsDimmed:(BOOL)dimmed forEvent:(id)event;
// declared property getter: -(BOOL)showsGrid;
// declared property getter: -(BOOL)showsLeftBorder;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(id)startDate;
// declared property getter: -(id)timeZone;
-(void)touchesEnded:(id)ended withEvent:(id)event;
// declared property getter: -(BOOL)usesSmallText;
@end

