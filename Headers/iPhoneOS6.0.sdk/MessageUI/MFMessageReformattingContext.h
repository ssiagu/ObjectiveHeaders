/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, DOMRange, NSArray, DOMDocument, DOMNode;

@interface MFMessageReformattingContext : XXUnknownSuperclass {
@private
	DOMDocument* _document;
	DOMNode* _body;
	NSMutableArray* _changes;
	float _maximumWidth;
	float _meanWidth;
	float _widthDeviation;
	BOOL _hasAnyLeftFloat;
	NSArray* _rightFloats;
	BOOL _floatsNeedUpdate;
	BOOL _metricsNeedUpdate;
	DOMRange* _firstTextRange;
	float _minimumRescalingFactor;
}
@property(readonly, assign, nonatomic) DOMNode* body;
@property(readonly, assign, nonatomic) BOOL didChangeDocument;
@property(readonly, assign, nonatomic) DOMDocument* document;
@property(retain, nonatomic) DOMRange* firstTextRange;	// @synthesize=_firstTextRange
@property(readonly, assign, nonatomic) BOOL hasAnyLeftFloat;
@property(readonly, assign, nonatomic) BOOL hasAnyRightFloat;
@property(readonly, assign, nonatomic) float maximumWidth;
@property(readonly, assign, nonatomic) float meanWidth;
@property(assign, nonatomic) float minimumRescalingFactor;	// @synthesize=_minimumRescalingFactor
@property(readonly, assign, nonatomic) NSArray* rightFloats;
@property(readonly, assign, nonatomic) float widthDeviation;
-(id)initWithDocument:(id)document;
-(void)_rollBackChange:(id)change;
-(void)_updateFloatsIfNecessary;
-(void)_updateMetricsIfNecessary;
// declared property getter: -(id)body;
-(BOOL)changeMarginOfElement:(id)element priority:(id)priority usingBlock:(id)block;
-(void)changeProprety:(id)proprety ofElement:(id)element toValue:(id)value priority:(id)priority;
-(BOOL)changeSizeOfElement:(id)element priority:(id)priority usingBlock:(id)block;
-(void)dealloc;
// declared property getter: -(BOOL)didChangeDocument;
// declared property getter: -(id)document;
// declared property getter: -(id)firstTextRange;
// declared property getter: -(BOOL)hasAnyLeftFloat;
// declared property getter: -(BOOL)hasAnyRightFloat;
// declared property getter: -(float)maximumWidth;
// declared property getter: -(float)meanWidth;
// declared property getter: -(float)minimumRescalingFactor;
-(BOOL)rescaleElement:(id)element withScale:(float)scale;
-(BOOL)resizeElement:(id)element withScale:(float)scale verificationBlock:(id)block;
// declared property getter: -(id)rightFloats;
-(void)rollBackAllChanges;
-(void)rollBackLastChangeForElement:(id)element;
// declared property setter: -(void)setFirstTextRange:(id)range;
// declared property setter: -(void)setMinimumRescalingFactor:(float)factor;
// declared property getter: -(float)widthDeviation;
@end
