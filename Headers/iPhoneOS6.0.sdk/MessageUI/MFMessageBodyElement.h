/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MFMessageBodyElement_Private.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, MFMessageBodyParser;

@protocol MFMessageBodyElement
-(void)appendInnerTextToStringAccumulator:(id)stringAccumulator;
-(unsigned)quoteLevel;
-(int)valueForAttributes:(int)attributes;
@end

@interface MFMessageBodyElement : XXUnknownSuperclass <MFMessageBodyElement_Private> {
	MFMessageBodyParser* _parser;
	NSArray* _nodes;
	unsigned _quoteLevel;
	unsigned _externalRetainCount;
	int _validAttributes;
	int _attributes;
}
@property(retain, nonatomic) NSArray* nodes;
@property(assign, nonatomic) MFMessageBodyParser* parser;	// @synthesize=_parser
-(id)init;
-(BOOL)_hasValueForAttributes:(int)attributes;
-(void)_setValue:(int)value forAttributes:(int)attributes;
-(void)appendInnerTextToStringAccumulator:(id)stringAccumulator;
-(void)dealloc;
-(id)description;
-(unsigned)getQuoteLevel;
-(BOOL)isExternallyRetained;
// declared property getter: -(id)nodes;
// declared property getter: -(id)parser;
-(unsigned)quoteLevel;
-(void)releaseExternally;
-(void)reset;
-(id)retainExternally;
// declared property setter: -(void)setNodes:(id)nodes;
// declared property setter: -(void)setParser:(id)parser;
-(int)valueForAttributes:(int)attributes;
@end

