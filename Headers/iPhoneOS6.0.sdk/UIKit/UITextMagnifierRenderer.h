/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextMagnifierRenderer : UIView {
@private
	int m_autoscrollDirections;
	int m_magnifierMethod;
}
@property(assign, nonatomic) int autoscrollDirections;	// @synthesize=m_autoscrollDirections
@property(assign, nonatomic) int magnifierMethod;	// @synthesize=m_magnifierMethod
-(id)initWithFrame:(CGRect)frame;
// declared property getter: -(int)autoscrollDirections;
-(void)drawAutoscroller:(CGRect)autoscroller;
-(void)drawMagnifier:(CGRect)magnifier;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(int)magnifierMethod;
// declared property setter: -(void)setAutoscrollDirections:(int)directions;
// declared property setter: -(void)setMagnifierMethod:(int)method;
@end

