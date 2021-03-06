/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class EKCalendar, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface EKInviteReplyNotification : EKObject {
}
@property(readonly, assign, nonatomic) BOOL alerted;
@property(readonly, assign, nonatomic) EKCalendar* calendar;
@property(readonly, assign, nonatomic) NSString* calendarName;
@property(readonly, assign, nonatomic) NSDate* creationDate;
@property(readonly, assign, nonatomic) NSString* shareeAddress;
@property(readonly, assign, nonatomic) NSString* shareeName;
@property(readonly, assign, nonatomic) int status;
-(id)_persistentInviteReplyNotification;
// declared property getter: -(BOOL)alerted;
// declared property getter: -(id)calendar;
// declared property getter: -(id)calendarName;
-(void)clearAlertedStatus;
// declared property getter: -(id)creationDate;
-(id)lazyLoadRelationForKey:(id)key;
// declared property getter: -(id)shareeAddress;
// declared property getter: -(id)shareeName;
// declared property getter: -(int)status;
@end

