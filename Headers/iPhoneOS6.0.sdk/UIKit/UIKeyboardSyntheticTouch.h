/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : XXUnknownSuperclass {
@private
	double timestamp;
	int phase;
	unsigned tapCount;
	UIWindow* window;
	CGPoint locationInWindow;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	float _pathMajorRadius;
}
@property(readonly, assign, nonatomic) unsigned char _pathIdentity;	// @synthesize
@property(readonly, assign, nonatomic) unsigned char _pathIndex;	// @synthesize
@property(assign, nonatomic) float _pathMajorRadius;	// @synthesize
@property(assign, nonatomic) CGPoint locationInWindow;	// @synthesize
@property(assign, nonatomic) int phase;	// @synthesize
@property(assign, nonatomic) unsigned tapCount;	// @synthesize
@property(assign, nonatomic) double timestamp;	// @synthesize
@property(retain, nonatomic) UIWindow* window;	// @synthesize
+(id)syntheticTouchWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;
-(id)initWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;
// declared property getter: -(unsigned char)_pathIdentity;
// declared property getter: -(unsigned char)_pathIndex;
// declared property getter: -(float)_pathMajorRadius;
-(CGPoint)getLocationInWindow;
-(CGPoint)locationInView:(id)view;
// declared property getter: -(CGPoint)locationInWindow;
// declared property getter: -(int)phase;
-(CGPoint)previousLocationInView:(id)view;
// declared property setter: -(void)setLocationInWindow:(CGPoint)window;
// declared property setter: -(void)setPhase:(int)phase;
// declared property setter: -(void)setTapCount:(unsigned)count;
// declared property setter: -(void)setTimestamp:(double)timestamp;
// declared property setter: -(void)setWindow:(id)window;
// declared property setter: -(void)set_pathMajorRadius:(float)radius;
// declared property getter: -(unsigned)tapCount;
// declared property getter: -(double)timestamp;
// declared property getter: -(id)window;
@end
