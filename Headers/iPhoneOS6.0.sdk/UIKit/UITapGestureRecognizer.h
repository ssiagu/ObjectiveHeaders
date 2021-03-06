/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSArray;

@interface UITapGestureRecognizer : UIGestureRecognizer {
@private
	CGPoint _locationInView;
	id _imp;
	unsigned _delaysRecognitionForGreaterTapCounts;
}
@property(readonly, assign, nonatomic) CGPoint centroid;
@property(readonly, assign, nonatomic) CGPoint location;
@property(assign, nonatomic) unsigned numberOfTapsRequired;
@property(assign, nonatomic) unsigned numberOfTouchesRequired;
@property(readonly, assign, nonatomic) NSArray* touches;
-(id)initWithCoder:(id)coder;
-(id)initWithTarget:(id)target action:(SEL)action;
-(void)_appendSubclassDescription:(id)description;
-(BOOL)_delaysRecognitionForGreaterTapCounts;
-(void)_resetGestureRecognizer;
-(void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)greaterTapCounts;
-(BOOL)_shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;
-(float)allowableMovement;
-(BOOL)canPreventGestureRecognizer:(id)recognizer;
// declared property getter: -(CGPoint)centroid;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(CGPoint)location;
-(CGPoint)locationInView:(id)view;
-(CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;
-(double)maximumIntervalBetweenSuccessiveTaps;
-(double)maximumSingleTapDuration;
// declared property getter: -(unsigned)numberOfTapsRequired;
-(unsigned)numberOfTouches;
// declared property getter: -(unsigned)numberOfTouchesRequired;
-(void)setAllowableMovement:(float)movement;
-(void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;
-(void)setMaximumSingleTapDuration:(double)duration;
// declared property setter: -(void)setNumberOfTapsRequired:(unsigned)tapsRequired;
// declared property setter: -(void)setNumberOfTouchesRequired:(unsigned)touchesRequired;
-(BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;
-(void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;
-(void)tapRecognizerRecognizedTap:(id)tap;
// declared property getter: -(id)touches;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
@end

