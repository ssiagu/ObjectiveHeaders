/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPredicate.h"
#import "EventKit-Structs.h"

@class NSDate, NSTimeZone, NSString;

@interface EKEventPredicate : EKPredicate {
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _uuid;
	NSTimeZone* _timeZone;
	BOOL _shouldLoadDefaultProperties;
}
@property(readonly, assign, nonatomic) NSDate* endDate;
@property(readonly, assign, nonatomic) NSString* eventUUID;
@property(readonly, assign, nonatomic) BOOL shouldLoadDefaultProperties;
@property(readonly, assign, nonatomic) NSDate* startDate;
@property(readonly, assign, nonatomic) NSTimeZone* timeZone;
+(id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;
+(id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars loadDefaultProperties:(BOOL)properties;
+(id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;
-(id)initWithCoder:(id)coder;
-(id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;
-(id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars loadDefaultProperties:(BOOL)properties;
-(id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)endDate;
-(BOOL)evaluateWithObject:(id)object;
// declared property getter: -(id)eventUUID;
-(BOOL)isEqual:(id)equal;
-(id)predicateFormat;
// declared property getter: -(BOOL)shouldLoadDefaultProperties;
// declared property getter: -(id)startDate;
// declared property getter: -(id)timeZone;
@end
