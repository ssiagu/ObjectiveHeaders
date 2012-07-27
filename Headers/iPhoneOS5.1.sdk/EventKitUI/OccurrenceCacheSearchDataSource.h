/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import "CalSearchDataSink.h"
#import "OccurrenceCacheDataSource.h"
#import "OccurrenceCacheSearchDataSource.h"

@class CalSearch, NSMutableArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource <CalSearchDataSink> {
	CalSearch* _calSearch;
	BOOL _searching;
	BOOL _resetting;
	opaque_pthread_mutex_t _dataSourceLock;
	dispatch_queue_s* _searchQueue;
	dispatch_group_s* _searchQueueGroup;
	opaque_pthread_mutex_t _resultsLock;
	NSMutableArray* _results;
}
-(id)initWithDatabase:(CalDatabase*)database filter:(CalFilter*)filter;
-(void)_addResult:(id)result;
-(void)_clearResults;
-(void)_processResults;
-(int)cachedDayCount;
-(int)cachedOccurrenceCount;
-(int)cachedOccurrenceCountOnOrAfterDate:(double)date;
-(void)calSearch:(id)search foundOccurrences:(CFArrayRef)occurrences cachedDays:(CFArrayRef)days cachedDaysIndexes:(CFArrayRef)indexes;
-(void)calSearch:(id)search showResultsStartingOnDate:(double)date;
-(void)calSearchComplete:(id)complete;
-(int)countOfOccurrencesOnDay:(double)occurrencesOnDay;
-(int)dayCountBeforeDay:(double)day;
-(void)dealloc;
-(void)dumpInfo;
-(void)invalidateCachedDayIndexes;
-(void)invalidateCachedDays;
-(void)invalidateCachedOccurrences;
-(void)loadOccurrencesForRange:(XXStruct_K5nmsA)range;
-(void)releaseResources;
-(void)restartSearchWithTerm:(id)term;
-(void)setCachedDayRange:(NSRange)range;
-(void)startSearching;
-(void)stopSearching;
-(BOOL)supportsFakeTodaySection;
-(BOOL)supportsInvitations;
-(int)totalOccurrencesCount;
@end

@interface OccurrenceCacheSearchDataSource (Internal)
-(CFArrayRef)_cachedDayIndexes;
-(int)_lockedTotalOccurrencesCount;
-(void)_notifyThatTheDateToShowResultsWasFound:(id)showResultsWasFound;
-(void)_tellMobileCalToUpdateItsUI;
@end
