/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PassKit-Structs.h"

@class WLCardDiffView, UILabel, WLCardFieldTemplate, WLField;

@interface WLCardFieldView : XXUnknownSuperclass {
@private
	WLField* _field;
	WLCardFieldTemplate* _fieldTemplate;
	WLCardDiffView* _cardDiffView;
	UILabel* _labelLabel;
	UILabel* _valueLabel;
}
@property(retain, nonatomic) WLCardDiffView* cardDiffView;	// @synthesize=_cardDiffView
@property(retain, nonatomic) WLField* field;	// @synthesize=_field
@property(retain, nonatomic) WLCardFieldTemplate* fieldTemplate;	// @synthesize=_fieldTemplate
@property(readonly, assign, nonatomic) UILabel* labelLabel;	// @synthesize=_labelLabel
@property(readonly, assign, nonatomic) UILabel* valueLabel;	// @synthesize=_valueLabel
+(id)newViewForField:(id)field fieldTemplate:(id)aTemplate;
-(id)initWithField:(id)field fieldTemplate:(id)aTemplate;
-(id)_labelAttributedString;
-(id)_textAttributesWithTextColor:(id)textColor alignment:(int)alignment lineBreakMode:(int)mode;
-(id)_valueAttributedString;
// declared property getter: -(id)cardDiffView;
-(void)dealloc;
// declared property getter: -(id)field;
// declared property getter: -(id)fieldTemplate;
-(BOOL)fitsInSize:(CGSize)size;
// declared property getter: -(id)labelLabel;
-(void)layoutSubviews;
-(void)presentDiff:(id)diff completion:(id)completion;
// declared property setter: -(void)setCardDiffView:(id)view;
-(void)setColorProfile:(id)profile background:(int)background;
// declared property setter: -(void)setField:(id)field;
// declared property setter: -(void)setFieldTemplate:(id)aTemplate;
-(CGSize)sizeThatFits:(CGSize)fits;
// declared property getter: -(id)valueLabel;
@end

