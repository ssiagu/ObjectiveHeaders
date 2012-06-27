/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import "EventKitUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (AccessibilityAccessors)
+(void)_accessibilityCalDetailStringForEvent:(id)event inDateString:(id*)dateString inTimeString:(id*)timeString;
+(void)_accessibilityCalGetHourDesignatorsForAM:(id*)am andPM:(id*)pm;
+(BOOL)_accessibilityCalHourDesignatorsAreBeforeHour;
+(BOOL)_accessibilityCalShow24Hours;
+(BOOL)_accessibilityCalSpaceBetweenDesignatorsAndHour;
+(id)_accessibilityStringForDate:(XXStruct_lQVxyC)date;
+(id)_accessibilityStringForDayOfWeek:(int)week;
@end

@interface XXUnknownSuperclass (CalendarTextRendering)
-(void)drawUsingMetrics:(id)metrics inRect:(CGRect)rect usingFont:(GSFontRef)font ellipsisStyle:(int)style firstLineX:(float)x;
-(void)drawUsingMetrics:(id)metrics inRect:(CGRect)rect usingFont:(GSFontRef)font ellipsisStyle:(int)style firstLineX:(float)x strikethrough:(BOOL)strikethrough;
-(id)stringMetricsForDrawingInRect:(CGRect)rect usingFont:(GSFontRef)font ellipsisStyle:(int)style flowingFromX:(float)x lastLineEnd:(CGPoint*)end startOnSecondLineIfPossible:(BOOL)possible;
-(id)stringMetricsForDrawingInRect:(CGRect)rect usingFont:(GSFontRef)font ellipsisStyle:(int)style flowingFromX:(float)x lastLineEnd:(CGPoint*)end startOnSecondLineIfPossible:(BOOL)possible withTopRightCornerInset:(CGSize)topRightCornerInset;
@end

@interface XXUnknownSuperclass (AttendeeSorting)
-(id)_sortedEKParticipantsForSortingIgnoringNonHumans:(id)sortingIgnoringNonHumans;
-(BOOL)hasHumanInviteesToDisplay;
-(id)sortEKParticipantsIgnoringNonHumans:(id)humans;
-(id)sortedEKParticipantsDisplayStringsIgnoringNonHumans:(id)humans;
@end

@interface XXUnknownSuperclass (NameDecomposition)
+(id)_attendeeNameExtensions;
+(id)_attendeePartialSurnames;
-(BOOL)_attendeeAppearsToBeAnInitial;
-(id)_attendeeTrimCommasSpacesQuotes;
-(void)attendeeFirstName:(id*)name middleName:(id*)name2 lastName:(id*)name3 extension:(id*)extension;
@end

@interface XXUnknownSuperclass (MobileCal)
-(id)displayName;
-(id)displayNameWithDecomposedFirstName:(id*)decomposedFirstName lastName:(id*)name department:(id*)department;
@end

@interface XXUnknownSuperclass (MobileCal)
-(id)colorForCalendar:(id)calendar;
-(id)defaultCalendarColors;
-(id)defaultCalendarColorsInRainbowOrder;
-(id)stringForColor:(id)color;
@end

@interface XXUnknownSuperclass (MobileCal)
-(id)uiColor;
@end

@interface XXUnknownSuperclass (MobileCal)
-(float)blueComponent;
-(float)brightnessComponent;
-(id)burnWithColor:(id)color;
-(float)differenceFromColor:(id)color;
-(float)greenComponent;
-(float)hueComponent;
-(BOOL)isGreenOrYellow;
-(float)luminance;
-(id)overlayWithColor:(id)color;
-(float)redComponent;
-(float)saturationComponent;
-(id)soverWithColor:(id)color;
@end

@interface XXUnknownSuperclass (HTMLEntities)
-(id)stringByReplacingMarkupCharactersWithHTMLEntities;
@end

@interface XXUnknownSuperclass (MobileCal)
-(id)displayTitle;
@end

@interface XXUnknownSuperclass (MobileCal)
-(id)_localizedDescription:(BOOL)description forEvent:(BOOL)event isAllDay:(BOOL)day;
-(id)localizedAllDayDescription;
-(id)localizedDescription;
-(id)localizedDescriptionForReminder;
-(id)longLocalizedAllDayDescription;
-(id)longLocalizedDescription;
@end

@interface XXUnknownSuperclass (RecurrenceEndEditItem)
-(XXStruct_lQVxyC)endDatePinnedForAllDay;
-(XXStruct_lQVxyC)startDatePinnedForAllDay;
@end

@interface XXUnknownSuperclass (AlphaCategory)
-(void)setContentAlpha:(float)alpha;
@end

@interface XXUnknownSuperclass (AttachmentUtils)
-(id)sortedEKAttachmentsDisplayStrings;
@end

@interface XXUnknownSuperclass (daySpan)
-(int)daySpan;
@end

@interface XXUnknownSuperclass (EventKit)
+(id)dateComponentsFromGregorianDate:(XXStruct_lQVxyC)gregorianDate;
-(void)clearTimeComponents;
-(id)dateComponents:(unsigned)components byAddingComponents:(id)components2 calendar:(id)calendar;
-(id)dateComponents:(unsigned)components byAddingDays:(int)days calendar:(id)calendar;
-(id)dateComponentsForDateOnly;
-(id)dateComponentsForEndOfDay;
-(XXStruct_lQVxyC)gregorianDate;
-(BOOL)hasTimeComponents;
@end

@interface XXUnknownSuperclass (EventKitUI)
-(id)cityName;
-(void)setCityName:(id)name;
@end

@interface XXUnknownSuperclass (roundedCorners)
-(id)roundCorners:(unsigned)corners withRadiusPercent:(float)radiusPercent;
@end

@interface XXUnknownSuperclass (MobileCal)
-(id)humanReadableContactString;
@end
