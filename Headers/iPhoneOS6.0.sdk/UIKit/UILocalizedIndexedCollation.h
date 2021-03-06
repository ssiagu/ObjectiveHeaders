/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSLocale, NSString;

@interface UILocalizedIndexedCollation : XXUnknownSuperclass {
@private
	NSLocale* _locale;
	NSArray* _sectionTitles;
	NSArray* _sectionStartStrings;
	NSArray* _sectionIndexTitles;
	NSArray* _sectionIndexMapping;
	NSString* _transform;
	NSString* _firstSectionStartString;
	NSString* _lastSectionStartString;
}
@property(readonly, assign, nonatomic) NSArray* sectionIndexTitles;
@property(readonly, assign, nonatomic) NSArray* sectionTitles;
+(id)collationWithDictionary:(id)dictionary;
+(id)currentCollation;
-(id)initWithDictionary:(id)dictionary;
-(void)dealloc;
-(int)sectionForObject:(id)object collationStringSelector:(SEL)selector;
-(int)sectionForSectionIndexTitleAtIndex:(int)index;
// declared property getter: -(id)sectionIndexTitles;
// declared property getter: -(id)sectionTitles;
-(id)sortedArrayFromArray:(id)array collationStringSelector:(SEL)selector;
-(id)transformedCollationStringForString:(id)string;
@end

