/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameKit.framework/GameKit
 */

#import "GameKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray, GKUITheme, UIImage;

@interface GKCellBackgroundView : XXUnknownSuperclass {
	GKUITheme* _theme;
	NSMutableArray* _backgroundDrawDescriptors;
	struct {
		unsigned drawSelected : 1;
		unsigned groupedTableViewStyle : 1;
	} _gkViewFlags;
@private
	int _backgroundStyle;
	CGSize _fillImagePhase;
	UIImage* _fillImage;
	BOOL _ignoreFillPhaseYOffset;
	unsigned _columnCount;
	int _selectedColumn;
	unsigned _cellCount;
	float _cellGapWidth;
	int _selectedCell;
	UIEdgeInsets _borderInsets;
}
@property(retain, nonatomic) NSArray* backgroundDrawDescriptors;	// @synthesize=_backgroundDrawDescriptors
@property(assign, nonatomic) int backgroundStyle;	// @synthesize=_backgroundStyle
@property(assign, nonatomic) UIEdgeInsets borderInsets;	// @synthesize=_borderInsets
@property(assign, nonatomic) unsigned cellCount;	// @synthesize=_cellCount
@property(assign, nonatomic) float cellGapWidth;	// @synthesize=_cellGapWidth
@property(assign, nonatomic) unsigned columnCount;	// @synthesize=_columnCount
@property(assign, nonatomic) BOOL drawSelected;
@property(retain, nonatomic) UIImage* fillImage;	// @synthesize=_fillImage
@property(assign, nonatomic) CGSize fillImagePhase;	// @synthesize=_fillImagePhase
@property(assign, nonatomic) BOOL grouped;
@property(assign, nonatomic) BOOL ignoreFillPhaseYOffset;	// @synthesize=_ignoreFillPhaseYOffset
@property(assign, nonatomic) int selectedCell;	// @synthesize=_selectedCell
@property(assign, nonatomic) int selectedColumn;	// @synthesize=_selectedColumn
@property(retain, nonatomic) GKUITheme* theme;	// @synthesize=_theme
+(id)buttonCellBackgroundWithTheme:(id)theme;
+(id)cellBackgroundWithTheme:(id)theme;
+(id)cellBackgroundWithTheme:(id)theme tableViewStyle:(int)style;
+(id)selectedButtonCellBackgroundWithTheme:(id)theme;
+(id)selectedCellBackgroundWithTheme:(id)theme;
+(id)selectedCellBackgroundWithTheme:(id)theme tableViewStyle:(int)style;
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(void)_drawBorderOutlineInRect:(CGRect)rect cellIndex:(int)index;
// declared property getter: -(id)backgroundDrawDescriptors;
// declared property getter: -(int)backgroundStyle;
// declared property getter: -(UIEdgeInsets)borderInsets;
-(CGRect)borderRectForCell:(unsigned)cell;
// declared property getter: -(unsigned)cellCount;
// declared property getter: -(float)cellGapWidth;
// declared property getter: -(unsigned)columnCount;
-(void)configureBorderImages;
-(void)dealloc;
-(void)drawBorderInRect:(CGRect)rect cellIndex:(int)index;
-(id)drawDescriptorForCellIndex:(int)cellIndex;
-(void)drawFillInRect:(CGRect)rect;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(BOOL)drawSelected;
// declared property getter: -(id)fillImage;
// declared property getter: -(CGSize)fillImagePhase;
-(CGPathRef)fillPathForCell:(unsigned)cell;
-(CGPathRef)fillPathForColumn:(unsigned)column;
-(CGRect)fillRectForCell:(unsigned)cell;
-(CGRect)fillRectForColumn:(unsigned)column;
// declared property getter: -(BOOL)grouped;
-(BOOL)hasKnownLocations;
// declared property getter: -(BOOL)ignoreFillPhaseYOffset;
-(CGPathRef)pathForRect:(CGRect)rect withRoundedCorners:(int)roundedCorners cornerRadius:(float)radius;
-(CGRect)rectForCell:(unsigned)cell withBounds:(CGRect)bounds;
-(int)sectionLocation;
// declared property getter: -(int)selectedCell;
// declared property getter: -(int)selectedColumn;
// declared property setter: -(void)setBackgroundDrawDescriptors:(id)descriptors;
// declared property setter: -(void)setBackgroundStyle:(int)style;
// declared property setter: -(void)setBorderInsets:(UIEdgeInsets)insets;
-(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setCellCount:(unsigned)count;
// declared property setter: -(void)setCellGapWidth:(float)width;
// declared property setter: -(void)setColumnCount:(unsigned)count;
// declared property setter: -(void)setDrawSelected:(BOOL)selected;
// declared property setter: -(void)setFillImage:(id)image;
// declared property setter: -(void)setFillImagePhase:(CGSize)phase;
-(void)setFrame:(CGRect)frame;
// declared property setter: -(void)setGrouped:(BOOL)grouped;
// declared property setter: -(void)setIgnoreFillPhaseYOffset:(BOOL)offset;
-(void)setSectionLocation:(int)location animated:(BOOL)animated;
-(void)setSectionLocations:(id)locations;
// declared property setter: -(void)setSelectedCell:(int)cell;
// declared property setter: -(void)setSelectedColumn:(int)column;
// declared property setter: -(void)setTheme:(id)theme;
-(BOOL)shouldDrawBorderAtIndex:(int)index;
// declared property getter: -(id)theme;
-(void)updateContentStretchForFrame:(CGRect)frame;
@end

