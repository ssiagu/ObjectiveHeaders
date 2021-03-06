/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"
#import "UIKit-Structs.h"

@class UIView;

@protocol UITextMagnifier <NSObject>
@property(assign, nonatomic) CGPoint animationPoint;
@property(assign, nonatomic) CGPoint magnificationPoint;
@property(readonly, assign, nonatomic) UIView* target;
@property(readonly, assign, nonatomic) CGPoint terminalPoint;
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;
// declared property getter: -(CGPoint)animationPoint;
-(void)autoscrollWillNotStart;
-(void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;
// declared property getter: -(CGPoint)magnificationPoint;
-(void)postAutoscrollPoint:(CGPoint)point;
// declared property setter: -(void)setAnimationPoint:(CGPoint)point;
-(void)setAutoscrollDirections:(int)directions;
// declared property setter: -(void)setMagnificationPoint:(CGPoint)point;
-(void)stopMagnifying:(BOOL)magnifying;
// declared property getter: -(id)target;
// declared property getter: -(CGPoint)terminalPoint;
// declared property getter: -(BOOL)terminalPointPlacedCarefully;
@end

