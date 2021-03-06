/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"
#import "NSSecureCoding.h"


@interface NSCalendar : NSObject <NSCopying, NSSecureCoding> {
}
+(id)allocWithZone:(NSZone*)zone;
+(id)currentCalendar;
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCalendarIdentifier:(id)calendarIdentifier;
-(id)initWithCoder:(id)coder;
-(id)AMSymbol;
-(id)PMSymbol;
-(unsigned char)_addComponents:(double*)components :(unsigned long)arg2 :(const char*)arg3 :(void*)arg4;
-(unsigned long)_cfTypeID;
-(unsigned char)_composeAbsoluteTime:(double*)time :(const char*)arg2 :(void*)arg3;
-(id)_copyLocale;
-(id)_copyTimeZone;
-(unsigned char)_decomposeAbsoluteTime:(double)time :(const char*)arg2 :(void*)arg3;
-(unsigned char)_diffComponents:(double)components :(double)arg2 :(unsigned long)arg3 :(const char*)arg4 :(void*)arg5;
-(id)_gregorianStartDate;
-(XXStruct_K5nmsA)_maximumRangeOfUnit:(unsigned)unit;
-(XXStruct_K5nmsA)_minimumRangeOfUnit:(unsigned)unit;
-(long)_ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forAT:(double)at;
-(XXStruct_K5nmsA)_rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forAT:(double)at;
-(unsigned char)_rangeOfUnit:(unsigned)unit startTime:(double*)time interval:(double*)interval forAT:(double)at;
-(void)_setGregorianStartDate:(id)date;
-(id)calendarIdentifier;
-(id)components:(unsigned)components fromDate:(id)date;
-(id)components:(unsigned)components fromDate:(id)date toDate:(id)date3 options:(unsigned)options;
-(id)copyWithZone:(NSZone*)zone;
-(id)dateByAddingComponents:(id)components toDate:(id)date options:(unsigned)options;
-(id)dateFromComponents:(id)components;
-(void)encodeWithCoder:(id)coder;
-(id)eraSymbols;
-(unsigned)firstWeekday;
-(id)gregorianStartDate;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)locale;
-(id)longEraSymbols;
-(NSRange)maximumRangeOfUnit:(unsigned)unit;
-(unsigned)minimumDaysInFirstWeek;
-(NSRange)minimumRangeOfUnit:(unsigned)unit;
-(id)monthSymbols;
-(unsigned)ordinalityOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;
-(id)quarterSymbols;
-(NSRange)rangeOfUnit:(unsigned)unit inUnit:(unsigned)unit2 forDate:(id)date;
-(BOOL)rangeOfUnit:(unsigned)unit startDate:(id*)date interval:(double*)interval forDate:(id)date4;
-(void)setFirstWeekday:(unsigned)weekday;
-(void)setGregorianStartDate:(id)date;
-(void)setLocale:(id)locale;
-(void)setMinimumDaysInFirstWeek:(unsigned)firstWeek;
-(void)setTimeZone:(id)zone;
-(id)shortMonthSymbols;
-(id)shortQuarterSymbols;
-(id)shortStandaloneMonthSymbols;
-(id)shortStandaloneQuarterSymbols;
-(id)shortStandaloneWeekdaySymbols;
-(id)shortWeekdaySymbols;
-(id)standaloneMonthSymbols;
-(id)standaloneQuarterSymbols;
-(id)standaloneWeekdaySymbols;
-(id)timeZone;
-(id)veryShortMonthSymbols;
-(id)veryShortStandaloneMonthSymbols;
-(id)veryShortStandaloneWeekdaySymbols;
-(id)veryShortWeekdaySymbols;
-(id)weekdaySymbols;
@end

