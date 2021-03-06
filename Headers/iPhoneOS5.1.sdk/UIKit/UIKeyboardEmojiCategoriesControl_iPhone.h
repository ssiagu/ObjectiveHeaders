/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiCategoriesControl.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoriesControl_iPhone : UIKeyboardEmojiCategoriesControl {
@private
	NSArray* _selectedImages;
	NSArray* _unselectedImages;
}
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(void)releaseImagesAndViews;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)updateSegmentAndDividers:(int)dividers;
-(void)updateSegmentImages;
@end

