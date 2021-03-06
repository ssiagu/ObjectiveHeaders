/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPreferencesTableCell.h"
#import "UIImageAndTextTableCell.h"

@class UIImageView, UIBezierPath, UITextLabel;

@interface UIPreferencesTableCell : UIImageAndTextTableCell {
@private
	int _cellOutline;
	id _value;
	SEL _action;
	id _target;
	UIImageView* _checkedImageView;
@protected
	UIBezierPath* _fillPath;
	UIBezierPath* _strokePath;
	UITextLabel* _valueTextLabel;
	unsigned _radioGroupItem : 1;
	unsigned _ignoreRemoveFromSuperView : 1;
	unsigned _drawAsLabel : 1;
	unsigned _drawAsGroupTitle : 1;
	unsigned _drawsBackground : 1;
	unsigned _blueDisclosureCircle : 1;
	unsigned _checkStyle : 4;
	unsigned _superViewIsPrefTable : 1;
	unsigned _dontHighlightOnMouseDown : 1;
	unsigned _tracking : 1;
	unsigned _valueChanged : 1;
	unsigned _removeControlVisible : 1;
	unsigned _dontIndentForRemoveControl : 1;
	unsigned _checkPosition : 1;
	unsigned _truncatesTitleBeforeValue : 1;
	unsigned _reserved : 14;
}
+(id)defaultTitleFont;
+(Class)valueTextLabelClass;
-(id)initWithFrame:(CGRect)frame;
-(void)_animateRemoveControlVisible:(BOOL)visible;
-(CGImageRef)_cachedBackgroundImage;
-(float)_cellInset;
-(id)_checkMarkImage;
-(id)_copyBackgroundButtonViewWithFrame:(CGRect)frame;
-(void)_createBezierPathWithCornerRadius:(float)cornerRadius bottomRadius:(float)radius animating:(BOOL)animating;
-(CGImageRef)_createCachedPrefImage;
-(CGContextRef)_createContextForCaching;
-(void)_disclosureClicked:(id)clicked;
-(BOOL)_drawAsGroupTitle;
-(id)_getTitleColor;
-(void)_invalidatePaths;
-(void)_layoutDisclosureIfNeeded;
-(void)_layoutSubviewsAnimated:(BOOL)animated;
-(void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;
-(void)_removeContextFromSuperviewAndRedislaySelf:(id)superviewAndRedislaySelf finished:(id)finished context:(id)context;
-(void)_setDrawAsGroupTitle:(BOOL)title;
-(void)_setDrawAsLabel:(BOOL)label;
-(void)_setHighlightOnMouseDown:(BOOL)down;
-(void)_setIgnoreRemoveFromSuperView:(BOOL)superView;
-(void)_setRadioGroupItem:(BOOL)item;
-(void)_setSuperviewsIsPrefTable:(BOOL)table;
-(void)_unhighlight;
-(void)_updateButtonSizeForRemoveControlVisible:(BOOL)removeControlVisible animated:(BOOL)animated;
-(SEL)action;
-(CGRect)buttonBounds;
-(int)cellOutline;
-(CGRect)contentBounds;
-(id)createRemoveControl;
-(void)dealloc;
-(id)disclosureImage;
-(id)disclosurePressedImage;
-(float)disclosureRightMargin;
-(void)drawBackgroundInRect:(CGRect)rect withFade:(float)fade;
-(id)enclosingPreferencesTable;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(CGPoint)iconInset;
-(BOOL)indentsBackgroundForRemoveControl;
-(BOOL)isChecked;
-(void)layoutSubviews;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(void)movedToSuperview:(id)superview;
-(id)outlineColor;
-(BOOL)pointMostlyInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;
-(float)removeButtonAnimationDuration;
-(void)removeControl:(id)control willRemoveTarget:(id)target;
-(void)removeControlWillHideRemoveButton:(id)removeControl animated:(BOOL)animated;
-(void)removeControlWillShowRemoveButton:(id)removeControl animated:(BOOL)animated;
-(void)removeFromSuperview;
-(void)setAction:(SEL)action;
-(void)setCellOutline:(int)outline;
-(void)setCheckPosition:(int)position;
-(void)setCheckStyle:(int)style;
-(void)setChecked:(BOOL)checked;
-(void)setDrawsBackground:(BOOL)background;
-(void)setFrame:(CGRect)frame;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setIcon:(id)icon;
-(void)setIndentsBackgroundForRemoveControl:(BOOL)removeControl;
-(void)setNeedsDisplay;
-(void)setSelected:(BOOL)selected withFade:(BOOL)fade;
-(void)setTarget:(id)target;
-(void)setTruncatesTitleBeforeValue:(BOOL)value;
-(void)setUserInteractionEnabled:(BOOL)enabled;
-(void)setUsesBlueDisclosureCircle:(BOOL)circle;
-(void)setValue:(id)value;
-(void)sizeToFit;
-(id)target;
-(CGPoint)textInset;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(BOOL)truncatesTitleBeforeValue;
-(void)updateHighlightColors;
-(id)value;
-(id)valueColor;
-(id)valueTextLabel;
@end

@interface UIPreferencesTableCell (SyntheticEvents)
-(id)_scriptingInfo;
@end

