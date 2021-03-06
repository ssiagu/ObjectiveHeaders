/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIOldSliderControl.h"
#import "UIKit-Structs.h"

@class UIView;

@interface UIScrubberControl : UIOldSliderControl {
@private
	XXUnion_a01swB _sliderAvailableFill;
@protected
	double _duration;
	float _lastDisplayedWidth;
	float _maxTrackWidth;
	UIView* _elapsedTimeView;
	UIView* _remainingTimeView;
	id _delegate;
	double _trackingStartTime;
	CGPoint _lastUpdatedPoint;
	float _valueAvailable;
	unsigned _didDrag : 1;
	unsigned _sentScrubbingStart : 1;
	unsigned _autoSizesToFitDuration : 1;
	unsigned _layoutTimeParts : 2;
	unsigned _remainingIsDuration : 1;
	unsigned _delegateDidEnterScrubbingState : 1;
	unsigned _delegateDidChangeScrubValue : 1;
	unsigned _delegateShouldBeginScrubbing : 1;
	unsigned _endingTracking : 1;
	unsigned _showKnob : 1;
	unsigned _largeKnob : 1;
	unsigned _rightCapIsDownloadCap : 1;
	unsigned _requireMomentaryDelay : 1;
	unsigned _showFullWidthComponents : 1;
	unsigned _alwaysShowAllComponentsForDuration : 1;
	unsigned _timeLayoutDisabledCount : 7;
	unsigned _timeLayoutSkippedLayout : 1;
	unsigned _timeLayoutSkippedForcedLayout : 1;
	unsigned _showTimeCentered : 1;
	unsigned _leftCapIsDownloadCap : 1;
	unsigned _allowsAnyValue : 1;
	unsigned _unused : 3;
}
+(BOOL)allowLayeredFillForKnob;
-(id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times knobStyle:(int)style;
-(id)initWithFrame:(CGRect)frame maxTrackWidth:(float)width showTimes:(BOOL)times showKnob:(BOOL)knob;
-(BOOL)_notAllValueAvailable;
-(CGRect)_rectOfTrack;
-(void)_resetTimeFrames;
-(void)_sendDelegateDidEnterScrubbingState:(BOOL)_sendDelegate;
-(void)_setValue:(float)value andSendAction:(BOOL)action;
-(void)_updateAvailableFill;
-(void)_updateTimes:(BOOL)times;
-(BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;
-(BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;
-(BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
-(BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;
-(id)createSliderKnobView;
-(void)dealloc;
-(void)disableTimesLayout;
-(void)drawSliderPiece:(int)piece inRect:(CGRect)rect;
-(double)duration;
-(void)enableTimesLayout;
-(void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;
-(void)endTrackingWithTouch:(id)touch withEvent:(id)event;
-(CGRect)fillBounds;
-(CGRect)hitRect;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(id)imageForSliderPiece:(int)sliderPiece;
-(const XXStruct_NwkmQC*)metrics;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(BOOL)pointInsideKnob:(CGPoint)knob forEvent:(GSEventRef)event;
-(BOOL)pointInsideKnob:(CGPoint)knob withEvent:(id)event;
-(double)requiredAutoUpdateDurationForDuration:(double)duration;
-(float)scrubValue;
-(void)setAllowsAnyValue:(BOOL)value;
-(void)setDelegate:(id)delegate;
-(void)setDuration:(double)duration;
-(void)setPinTimeToOutsideEdges:(BOOL)outsideEdges;
-(void)setScrubbingRequiresMomentaryDelay:(BOOL)delay;
-(void)setShowDuration:(BOOL)duration;
-(void)setShowFullWidthComponents:(BOOL)components;
-(void)setShowTimeCenteredInAvailableArea:(BOOL)availableArea;
-(void)setTimeColor:(id)color;
-(void)setTimeShadowColor:(id)color;
-(void)setValue:(float)value animated:(BOOL)animated animationCurve:(int)curve;
-(void)setValueAvailable:(float)available;
-(void)sizeToFit;
-(CGRect)sliderBounds;
@end

