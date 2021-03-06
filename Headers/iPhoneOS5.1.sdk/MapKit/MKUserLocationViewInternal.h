/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import "MapKit-Structs.h"
#import "MKUserLocationViewInternal.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MKUserLocationAccuracyAnimation, MKUserLocationPositionAnimation, MKHoverAnimation, MKDotBounceAnimation, MKUserLocationView, MKUserLocationLayer, MKAccuracyLayer, CALayer, CAAnimationGroup;

__attribute__((visibility("hidden")))
@interface MKUserLocationViewInternal : XXUnknownSuperclass {
	id delegate;
	MKUserLocationView* view;
	MKUserLocationLayer* layer;
	CALayer* dotLayer;
	CALayer* bounceLayer;
	CALayer* userLayer;
	CALayer* headingLayer;
	CALayer* haloLayer;
	MKAccuracyLayer* accuracyLayer;
	unsigned mapType;
	int zoomDirection;
	float accuracy;
	double headingAccuracy;
	MKUserLocationPositionAnimation* _positionAnimation;
	MKUserLocationAccuracyAnimation* _accuracyAnimation;
	MKDotBounceAnimation* _dotBounceAnimation;
	MKHoverAnimation* _hoverAnimation;
	CAAnimationGroup* _haloAnimation;
	struct {
		unsigned animatedSublayers : 1;
		unsigned disableAccuracyDidUpdate : 1;
		unsigned enforceLowerBound : 1;
		unsigned shouldDisplayHalo : 1;
		unsigned shouldDisplayEffects : 1;
		unsigned effectsVisible : 1;
		unsigned shouldDisplayAccuracy : 1;
		unsigned shouldDisplayHeading : 1;
		unsigned stale : 1;
		unsigned delegateAccuracyDidUpdate : 1;
		unsigned delegateDidQuiesce : 1;
		unsigned delegateIsZooming : 1;
		unsigned willAnimateProperty : 1;
	} flags;
}
@property(assign, nonatomic) float accuracy;	// @synthesize
@property(assign, nonatomic) BOOL animatedSublayers;
@property(readonly, assign, nonatomic) BOOL canHalo;
@property(readonly, assign, nonatomic) BOOL canHaloExcludingAccuracy;
@property(readonly, assign, nonatomic) BOOL canHaloExcludingEffects;
@property(assign, nonatomic) id delegate;	// @synthesize
@property(assign, nonatomic) BOOL disableAccuracyDidUpdate;
@property(assign, nonatomic) BOOL effectsVisible;
@property(readonly, assign, nonatomic) BOOL hasHalo;
@property(readonly, assign, nonatomic) BOOL hasQuiesced;
@property(assign, nonatomic) double headingAccuracy;	// @synthesize
@property(readonly, assign, nonatomic, getter=isHovering) BOOL hovering;
@property(assign, nonatomic) unsigned mapType;	// @synthesize
@property(readonly, assign, nonatomic) BOOL needsHalo;
@property(assign, nonatomic) CADoublePoint position;
@property(assign, nonatomic) BOOL shouldDisplayAccuracy;
@property(assign, nonatomic) BOOL shouldDisplayEffects;
@property(assign, nonatomic) BOOL shouldDisplayHalo;
@property(assign, nonatomic) BOOL shouldDisplayHeading;
@property(assign, nonatomic, getter=isStale) BOOL stale;
@property(assign, nonatomic) int zoomDirection;	// @synthesize
+(float)accuracyDiameter:(float)diameter level:(unsigned)level;
+(id)bounceImageRects;
+(id)dotImage;
+(id)dotPressedImage;
+(CADoubleRect)effectiveFrameWithFrame:(CADoubleRect)frame;
+(CGSize)effectsSize;
+(void)frameLayer:(id)layer initialAccuracy:(float*)accuracy restAccuracy:(float*)accuracy3;
+(id)greyDotImage;
+(id)greyDotPressedImage;
+(id)haloImages;
+(id)headingAngleLargeImage;
+(id)headingAngleMediumImage;
+(id)headingAngleSmallImage;
+(void)initialize;
+(float)maxVisibleAccuracyDiameter;
-(id)initWithView:(id)view;
// declared property getter: -(float)accuracy;
// declared property getter: -(BOOL)animatedSublayers;
-(void)applyScale:(float)scale animated:(BOOL)animated;
// declared property getter: -(BOOL)canHalo;
// declared property getter: -(BOOL)canHaloExcludingAccuracy;
// declared property getter: -(BOOL)canHaloExcludingEffects;
-(void)clampAccuracyValue:(float*)value;
-(void)clearViewReferences;
-(void)dealloc;
// declared property getter: -(id)delegate;
-(void)didBeginZoom;
-(void)didEndZoom;
// declared property getter: -(BOOL)disableAccuracyDidUpdate;
-(void)drawAccuracy:(float)accuracy;
-(id)dropTeleportingUserLocationAtPoint:(CGPoint)point;
// declared property getter: -(BOOL)effectsVisible;
-(void)effectsVisibleDidChange;
// declared property getter: -(BOOL)hasHalo;
// declared property getter: -(BOOL)hasQuiesced;
// declared property getter: -(double)headingAccuracy;
-(id)headingImageForAccuracy:(double)accuracy anchorPoint:(CGPoint*)point;
-(unsigned)indexForSubLayer:(id)subLayer;
-(void)insertSublayer:(id)sublayer;
-(void)insertSublayer:(id)sublayer animated:(BOOL)animated;
-(BOOL)isAccuracyChanging;
-(BOOL)isDotBouncing;
-(BOOL)isDotTeleporting;
// declared property getter: -(BOOL)isHovering;
// declared property getter: -(BOOL)isStale;
-(BOOL)isZooming;
// declared property getter: -(unsigned)mapType;
// declared property getter: -(BOOL)needsHalo;
-(void)orderInDotLayer;
-(void)orderInLayer:(id)layer beginTime:(double)time;
-(void)pauseHalo;
-(void)pauseHover;
// declared property getter: -(CADoublePoint)position;
-(void)removeHover;
-(void)removeSublayer:(id)sublayer animated:(BOOL)animated;
-(void)removeSublayers;
-(void)resetAccuracy;
-(void)resetScale;
-(void)resumeHalo;
-(void)resumeHover;
// declared property setter: -(void)setAccuracy:(float)accuracy;
// declared property setter: -(void)setAnimatedSublayers:(BOOL)sublayers;
-(void)setContentsScale:(float)scale;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDisableAccuracyDidUpdate:(BOOL)update;
// declared property setter: -(void)setEffectsVisible:(BOOL)visible;
// declared property setter: -(void)setHeadingAccuracy:(double)accuracy;
// declared property setter: -(void)setMapType:(unsigned)type;
// declared property setter: -(void)setPosition:(CADoublePoint)position;
// declared property setter: -(void)setShouldDisplayAccuracy:(BOOL)displayAccuracy;
// declared property setter: -(void)setShouldDisplayEffects:(BOOL)displayEffects;
// declared property setter: -(void)setShouldDisplayHalo:(BOOL)displayHalo;
// declared property setter: -(void)setShouldDisplayHeading:(BOOL)displayHeading;
// declared property setter: -(void)setStale:(BOOL)stale;
// declared property setter: -(void)setZoomDirection:(int)direction;
-(void)setZoomDirection:(int)direction deltaScale:(float)scale;
// declared property getter: -(BOOL)shouldDisplayAccuracy;
-(void)shouldDisplayAccuracyDidChange;
// declared property getter: -(BOOL)shouldDisplayEffects;
-(void)shouldDisplayEffectsDidChange;
// declared property getter: -(BOOL)shouldDisplayHalo;
// declared property getter: -(BOOL)shouldDisplayHeading;
-(void)shouldDisplayHeadingDidChange;
-(BOOL)sizeAccuracyLayerToFit:(float)fit animated:(BOOL)animated;
-(void)staleDidChange;
-(void)stopHover;
-(void)terminateHoverAccuracy:(float)accuracy duration:(double)duration;
-(void)updateDot;
-(void)updateHalo;
-(void)updateHeading;
-(void)updateHover;
-(void)userLocationAccuracyDidUpdate;
-(void)userLocationViewAccuracyDidUpdate;
-(void)userLocationViewDidUpdate;
// declared property getter: -(int)zoomDirection;
@end

@interface MKUserLocationViewInternal (Animations)
@property(readonly, assign, nonatomic) MKHoverAnimation* hoverAnimation;
@property(readonly, assign, nonatomic) MKUserLocationPositionAnimation* positionAnimation;
-(id)accuracyAnimation;
-(id)actionForLayer:(id)layer forKey:(id)key;
-(void)animationDidStart:(id)animation;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(id)dotBounceAnimation;
-(id)haloAnimation;
// declared property getter: -(id)hoverAnimation;
// declared property getter: -(id)positionAnimation;
@end

