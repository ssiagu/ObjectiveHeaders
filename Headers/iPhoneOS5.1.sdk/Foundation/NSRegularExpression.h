/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSRegularExpression.h"

@class NSString;

@interface NSRegularExpression : XXUnknownSuperclass <NSCopying, NSCoding> {
	NSString* _pattern;
	unsigned _options;
	void* _internal;
	id _reserved1;
	int _checkout;
	int _reserved2;
}
@property(readonly, assign) unsigned numberOfCaptureGroups;
@property(readonly, assign) unsigned options;
@property(readonly, assign) NSString* pattern;
+(id)escapedPatternForString:(id)string;
+(void)initialize;
+(id)regularExpressionWithPattern:(id)pattern options:(unsigned)options error:(id*)error;
-(id)initWithCoder:(id)coder;
-(id)initWithPattern:(id)pattern options:(unsigned)options error:(id*)error;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(void)finalize;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(unsigned)numberOfCaptureGroups;
// declared property getter: -(unsigned)options;
// declared property getter: -(id)pattern;
@end

@interface NSRegularExpression (NSMatching)
-(void)enumerateMatchesInString:(id)string options:(unsigned)options range:(NSRange)range usingBlock:(id)block;
-(id)firstMatchInString:(id)string options:(unsigned)options range:(NSRange)range;
-(id)matchesInString:(id)string options:(unsigned)options range:(NSRange)range;
-(unsigned)numberOfMatchesInString:(id)string options:(unsigned)options range:(NSRange)range;
-(NSRange)rangeOfFirstMatchInString:(id)string options:(unsigned)options range:(NSRange)range;
@end

@interface NSRegularExpression (NSReplacement)
+(id)escapedTemplateForString:(id)string;
-(unsigned)replaceMatchesInString:(id)string options:(unsigned)options range:(NSRange)range withTemplate:(id)aTemplate;
-(id)replacementStringForResult:(id)result inString:(id)string offset:(int)offset template:(id)aTemplate;
-(id)stringByReplacingMatchesInString:(id)string options:(unsigned)options range:(NSRange)range withTemplate:(id)aTemplate;
@end

