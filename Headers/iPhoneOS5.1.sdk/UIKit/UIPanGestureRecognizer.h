/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
@private
	CGPoint _firstScreenLocation;
	CGPoint _lastScreenLocation;
	double _lastTouchTime;
	id _velocitySample;
	id _previousVelocitySample;
	NSMutableArray* _touches;
	unsigned _lastTouchCount;
	unsigned _minimumNumberOfTouches;
	unsigned _maximumNumberOfTouches;
	float _hysteresis;
	CGPoint _lastUnadjustedScreenLocation;
	unsigned _failsPastMaxTouches : 1;
	unsigned _canPanHorizontally : 1;
	unsigned _canPanVertically : 1;
}
@property(readonly, assign, getter=_previousVelocitySample) UIPanGestureVelocitySample* _previousVelocitySample;	// @synthesize
@property(readonly, assign, getter=_velocitySample) UIPanGestureVelocitySample* _velocitySample;	// @synthesize
@property(assign, nonatomic) unsigned maximumNumberOfTouches;	// @synthesize=_maximumNumberOfTouches
@property(assign, nonatomic) unsigned minimumNumberOfTouches;	// @synthesize=_minimumNumberOfTouches
-(id)initWithCoder:(id)coder;
-(id)initWithTarget:(id)target action:(SEL)action;
-(CGPoint)_adjustScreenLocation:(CGPoint)location;
-(BOOL)_canPanHorizontally;
-(BOOL)_canPanVertically;
-(void)_centroidMovedTo:(CGPoint)to atTime:(double)time;
-(CADoublePoint)_convertPoint:(CGPoint)point fromScreenCoordinatesToView:(id)view;
-(CADoublePoint)_convertPoint:(CGPoint)point toScreenCoordinatesFromView:(id)view;
-(CADoublePoint)_convertVelocitySample:(id)sample fromScreenCoordinatesToView:(id)view;
-(float)_hysteresis;
-(int)_lastTouchCount;
-(UIOffset)_offsetInViewFromScreenLocation:(CGPoint)screenLocation toScreenLocation:(CGPoint)screenLocation2;
// declared property getter: -(id)_previousVelocitySample;
-(void)_removeHysteresisFromTranslation;
-(void)_resetGestureRecognizer;
-(void)_resetVelocitySamples;
-(void)_setCanPanHorizontally:(BOOL)horizontally;
-(void)_setCanPanVertically:(BOOL)vertically;
-(void)_setHysteresis:(float)hysteresis;
-(CGPoint)_shiftPanLocationToNewScreenLocation:(CGPoint)newScreenLocation lockingToAxis:(int)axis;
-(BOOL)_shouldTryToBeginWithEvent:(id)event;
-(void)_touchesListChangedFrom:(id)from to:(id)to;
// declared property getter: -(id)_velocitySample;
-(BOOL)_willScrollX;
-(BOOL)_willScrollY;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(BOOL)failsPastMaxTouches;
-(CGPoint)locationInView:(id)view;
-(CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;
// declared property getter: -(unsigned)maximumNumberOfTouches;
// declared property getter: -(unsigned)minimumNumberOfTouches;
-(unsigned)numberOfTouches;
-(void)setFailsPastMaxTouches:(BOOL)touches;
// declared property setter: -(void)setMaximumNumberOfTouches:(unsigned)touches;
// declared property setter: -(void)setMinimumNumberOfTouches:(unsigned)touches;
-(void)setTranslation:(CGPoint)translation inView:(id)view;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(CGPoint)translationInView:(id)view;
-(CGPoint)velocityInView:(id)view;
@end
