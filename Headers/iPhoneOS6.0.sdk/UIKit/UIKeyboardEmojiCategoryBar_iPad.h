/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiCategoryBar.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryBar_iPad : UIKeyboardEmojiCategoryBar {
@private
	UIImage* categoryKeyImage;
	UIImage* categoryKeyHighlightedImage;
	UIImage* dividerImage;
	UIImage* dividerHighlightedImage;
}
@property(retain) UIImage* categoryKeyHighlightedImage;	// @synthesize
@property(retain) UIImage* categoryKeyImage;	// @synthesize
@property(retain) UIImage* dividerHighlightedImage;	// @synthesize
@property(retain) UIImage* dividerImage;	// @synthesize
-(id)initWithFrame:(CGRect)frame keyboard:(id)keyboard key:(id)key state:(int)state;
// declared property getter: -(id)categoryKeyHighlightedImage;
// declared property getter: -(id)categoryKeyImage;
-(void)dealloc;
// declared property getter: -(id)dividerHighlightedImage;
// declared property getter: -(id)dividerImage;
-(void)drawRect:(CGRect)rect;
-(CGRect)frameForSegment:(int)segment;
-(void)layoutSubviews;
-(void)releaseImagesAndViews;
// declared property setter: -(void)setCategoryKeyHighlightedImage:(id)image;
// declared property setter: -(void)setCategoryKeyImage:(id)image;
// declared property setter: -(void)setDividerHighlightedImage:(id)image;
// declared property setter: -(void)setDividerImage:(id)image;
-(void)updateSegmentAndDividers:(int)dividers;
-(void)updateSegmentImages;
@end

