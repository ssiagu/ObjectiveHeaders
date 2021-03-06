/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, UIImage, NSMutableDictionary, NSNumber, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationBarAppearanceStorage : XXUnknownSuperclass {
@private
	NSMutableDictionary* backgroundImagesForBarMetrics;
	NSDictionary* textAttributes;
	NSNumber* titleVerticalAdjustment;
	NSNumber* miniTitleVerticalAdjustment;
	UIImage* shadowImage;
	BOOL hidesShadow;
	BOOL reversesShadowOffset;
	_UIBarButtonItemAppearanceStorage* buttonAppearanceStorage;
	BOOL _hidesShadow;
	BOOL _deferShadowToSearchBar;
}
@property(readonly, assign, nonatomic) _UIBarButtonItemAppearanceStorage* _barButtonAppearanceStorage;
@property(readonly, assign, nonatomic) UIImage* backgroundImage;
@property(readonly, assign, nonatomic) _UIBarButtonItemAppearanceStorage* barButtonAppearanceStorage;
@property(assign, nonatomic) BOOL deferShadowToSearchBar;	// @synthesize=_deferShadowToSearchBar
@property(assign, nonatomic) BOOL hidesShadow;	// @synthesize=_hidesShadow
@property(readonly, assign, nonatomic) UIImage* miniBackgroundImage;
@property(readonly, assign, nonatomic) UIImage* miniPromptBackgroundImage;
@property(retain, nonatomic) NSNumber* miniTitleVerticalAdjustment;	// @synthesize
@property(readonly, assign, nonatomic) UIImage* promptBackgroundImage;
@property(assign, nonatomic) BOOL reversesShadowOffset;	// @synthesize
@property(retain, nonatomic) UIImage* shadowImage;	// @synthesize
@property(copy, nonatomic) NSDictionary* textAttributes;	// @synthesize
@property(retain, nonatomic) NSNumber* titleVerticalAdjustment;	// @synthesize
// declared property getter: -(id)_barButtonAppearanceStorage;
// declared property getter: -(id)backgroundImage;
-(id)backgroundImageForBarMetrics:(int)barMetrics;
// declared property getter: -(id)barButtonAppearanceStorage;
-(void)dealloc;
// declared property getter: -(BOOL)deferShadowToSearchBar;
// declared property getter: -(BOOL)hidesShadow;
// declared property getter: -(id)miniBackgroundImage;
// declared property getter: -(id)miniPromptBackgroundImage;
// declared property getter: -(id)miniTitleVerticalAdjustment;
// declared property getter: -(id)promptBackgroundImage;
// declared property getter: -(BOOL)reversesShadowOffset;
-(void)setBackgroundImage:(id)image forBarMetrics:(int)barMetrics;
// declared property setter: -(void)setDeferShadowToSearchBar:(BOOL)searchBar;
// declared property setter: -(void)setHidesShadow:(BOOL)shadow;
// declared property setter: -(void)setMiniTitleVerticalAdjustment:(id)adjustment;
// declared property setter: -(void)setReversesShadowOffset:(BOOL)offset;
// declared property setter: -(void)setShadowImage:(id)image;
// declared property setter: -(void)setTextAttributes:(id)attributes;
// declared property setter: -(void)setTitleVerticalAdjustment:(id)adjustment;
// declared property getter: -(id)shadowImage;
// declared property getter: -(id)textAttributes;
// declared property getter: -(id)titleVerticalAdjustment;
@end

