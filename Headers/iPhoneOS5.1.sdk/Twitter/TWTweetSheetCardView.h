/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Twitter.framework/Twitter
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Twitter-Structs.h"

@class UIImageView, UIView;

@interface TWTweetSheetCardView : XXUnknownSuperclass {
	UIView* _contentView;
	UIView* _paperBG;
	UIView* _paperTexture;
	UIImageView* _chrome;
	UIImageView* _topGradient;
	UIImageView* _bottomGradient;
	BOOL _hidesBottom;
}
@property(readonly, assign, nonatomic) UIView* contentView;
+(CGRect)cardRectForOrientation:(int)orientation options:(int)options parentBounds:(CGRect)bounds keyboardFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
-(void)awakeFromNib;
// declared property getter: -(id)contentView;
-(void)dealloc;
-(id)imageWithName:(id)name;
-(CGRect)keyboardFrameForInterfaceOrientation:(int)interfaceOrientation;
-(void)layoutSubviews;
-(CGRect)paperBounds;
-(void)setHidesBottom:(BOOL)bottom;
-(void)setupSubviews;
-(void)updateCardRectForOrientation:(int)orientation options:(int)options;
@end

