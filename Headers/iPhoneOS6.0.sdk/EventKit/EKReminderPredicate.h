/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPredicate.h"
#import "EventKit-Structs.h"

@class NSDate, NSString;

@interface EKReminderPredicate : EKPredicate {
@private
	NSString* _title;
	NSString* _listTitle;
	BOOL _limitToCompletedOrIncomplete;
	BOOL _completed;
	NSDate* _dueAfter;
	NSDate* _dueBefore;
	BOOL _useDueDateAsCompletionDate;
	NSString* _searchTerm;
	int _sortOrder;
	unsigned _maxResults;
	BOOL _useCompletionDateAsAlternate;
}
@property(assign, nonatomic) BOOL completed;	// @synthesize=_completed
@property(retain, nonatomic) NSDate* dueAfter;	// @synthesize=_dueAfter
@property(retain, nonatomic) NSDate* dueBefore;	// @synthesize=_dueBefore
@property(assign, nonatomic) BOOL limitToCompletedOrIncomplete;	// @synthesize=_limitToCompletedOrIncomplete
@property(retain, nonatomic) NSString* listTitle;	// @synthesize=_listTitle
@property(assign, nonatomic) unsigned maxResults;	// @synthesize=_maxResults
@property(retain, nonatomic) NSString* searchTerm;	// @synthesize=_searchTerm
@property(assign, nonatomic) int sortOrder;	// @synthesize=_sortOrder
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
@property(assign, nonatomic) BOOL useCompletionDateAsAlternate;	// @synthesize=_useCompletionDateAsAlternate
@property(assign, nonatomic) BOOL useDueDateAsCompletionDate;	// @synthesize=_useDueDateAsCompletionDate
+(id)predicateWithCalendars:(id)calendars;
-(id)initWithCalendars:(id)calendars;
-(id)initWithCoder:(id)coder;
// declared property getter: -(BOOL)completed;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
// declared property getter: -(id)dueAfter;
// declared property getter: -(id)dueBefore;
-(void)encodeWithCoder:(id)coder;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(BOOL)limitToCompletedOrIncomplete;
// declared property getter: -(id)listTitle;
// declared property getter: -(unsigned)maxResults;
// declared property getter: -(id)searchTerm;
// declared property setter: -(void)setCompleted:(BOOL)completed;
// declared property setter: -(void)setDueAfter:(id)after;
// declared property setter: -(void)setDueBefore:(id)before;
// declared property setter: -(void)setLimitToCompletedOrIncomplete:(BOOL)completedOrIncomplete;
// declared property setter: -(void)setListTitle:(id)title;
// declared property setter: -(void)setMaxResults:(unsigned)results;
// declared property setter: -(void)setSearchTerm:(id)term;
// declared property setter: -(void)setSortOrder:(int)order;
// declared property setter: -(void)setTitle:(id)title;
// declared property setter: -(void)setUseCompletionDateAsAlternate:(BOOL)alternate;
// declared property setter: -(void)setUseDueDateAsCompletionDate:(BOOL)date;
// declared property getter: -(int)sortOrder;
// declared property getter: -(id)title;
// declared property getter: -(BOOL)useCompletionDateAsAlternate;
// declared property getter: -(BOOL)useDueDateAsCompletionDate;
@end

