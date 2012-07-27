/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAEmitterCell.h"
#import "NSCoding.h"
#import "CAPropertyInfo.h"
#import "QuartzCore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CAMediaTiming.h"

@class NSDictionary, NSArray, NSString;

@interface CAEmitterCell : XXUnknownSuperclass <NSCoding, CAMediaTiming> {
@private
	void* _attr[2];
	void* _state;
	unsigned _flags;
}
@property(assign) float alphaRange;
@property(assign) float alphaSpeed;
@property(assign) BOOL autoreverses;
@property(assign) double beginTime;
@property(assign) float birthRate;
@property(assign) float blueRange;
@property(assign) float blueSpeed;
@property(assign) CGColorRef color;
@property(retain) id contents;
@property(assign) CGRect contentsRect;
@property(assign) double duration;
@property(assign) float emissionLatitude;
@property(assign) float emissionLongitude;
@property(assign) float emissionRange;
@property(copy) NSArray* emitterCells;
@property(assign, getter=isEnabled) BOOL enabled;
@property(copy) NSString* fillMode;
@property(assign) float greenRange;
@property(assign) float greenSpeed;
@property(assign) float lifetime;
@property(assign) float lifetimeRange;
@property(copy) NSString* magnificationFilter;
@property(copy) NSString* minificationFilter;
@property(assign) float minificationFilterBias;
@property(copy) NSString* name;
@property(assign) float redRange;
@property(assign) float redSpeed;
@property(assign) float repeatCount;
@property(assign) double repeatDuration;
@property(assign) float scale;
@property(assign) float scaleRange;
@property(assign) float scaleSpeed;
@property(assign) float speed;
@property(assign) float spin;
@property(assign) float spinRange;
@property(copy) NSDictionary* style;
@property(assign) double timeOffset;
@property(assign) float velocity;
@property(assign) float velocityRange;
@property(assign) float xAcceleration;
@property(assign) float yAcceleration;
@property(assign) float zAcceleration;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
+(id)defaultValueForKey:(id)key;
+(id)emitterCell;
-(id)initWithCoder:(id)coder;
-(Object*)CA_copyRenderValue;
-(void)CA_prepareRenderValue;
// declared property getter: -(float)alphaRange;
// declared property getter: -(float)alphaSpeed;
// declared property getter: -(BOOL)autoreverses;
// declared property getter: -(double)beginTime;
// declared property getter: -(float)birthRate;
// declared property getter: -(float)blueRange;
// declared property getter: -(float)blueSpeed;
// declared property getter: -(CGColorRef)color;
// declared property getter: -(id)contents;
// declared property getter: -(CGRect)contentsRect;
-(void)dealloc;
-(id)debugDescription;
// declared property getter: -(double)duration;
// declared property getter: -(float)emissionLatitude;
// declared property getter: -(float)emissionLongitude;
// declared property getter: -(float)emissionRange;
// declared property getter: -(id)emitterCells;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)fillMode;
// declared property getter: -(float)greenRange;
// declared property getter: -(float)greenSpeed;
// declared property getter: -(BOOL)isEnabled;
// declared property getter: -(float)lifetime;
// declared property getter: -(float)lifetimeRange;
// declared property getter: -(id)magnificationFilter;
// declared property getter: -(id)minificationFilter;
// declared property getter: -(float)minificationFilterBias;
// declared property getter: -(id)name;
// declared property getter: -(float)redRange;
// declared property getter: -(float)redSpeed;
// declared property getter: -(float)repeatCount;
// declared property getter: -(double)repeatDuration;
// declared property getter: -(float)scale;
// declared property getter: -(float)scaleRange;
// declared property getter: -(float)scaleSpeed;
// declared property setter: -(void)setAlphaRange:(float)range;
// declared property setter: -(void)setAlphaSpeed:(float)speed;
// declared property setter: -(void)setAutoreverses:(BOOL)autoreverses;
// declared property setter: -(void)setBeginTime:(double)time;
// declared property setter: -(void)setBirthRate:(float)rate;
// declared property setter: -(void)setBlueRange:(float)range;
// declared property setter: -(void)setBlueSpeed:(float)speed;
// declared property setter: -(void)setColor:(CGColorRef)color;
// declared property setter: -(void)setContents:(id)contents;
// declared property setter: -(void)setContentsRect:(CGRect)rect;
// declared property setter: -(void)setDuration:(double)duration;
// declared property setter: -(void)setEmissionLatitude:(float)latitude;
// declared property setter: -(void)setEmissionLongitude:(float)longitude;
// declared property setter: -(void)setEmissionRange:(float)range;
// declared property setter: -(void)setEmitterCells:(id)cells;
// declared property setter: -(void)setEnabled:(BOOL)enabled;
// declared property setter: -(void)setFillMode:(id)mode;
// declared property setter: -(void)setGreenRange:(float)range;
// declared property setter: -(void)setGreenSpeed:(float)speed;
// declared property setter: -(void)setLifetime:(float)lifetime;
// declared property setter: -(void)setLifetimeRange:(float)range;
// declared property setter: -(void)setMagnificationFilter:(id)filter;
// declared property setter: -(void)setMinificationFilter:(id)filter;
// declared property setter: -(void)setMinificationFilterBias:(float)bias;
// declared property setter: -(void)setName:(id)name;
// declared property setter: -(void)setRedRange:(float)range;
// declared property setter: -(void)setRedSpeed:(float)speed;
// declared property setter: -(void)setRepeatCount:(float)count;
// declared property setter: -(void)setRepeatDuration:(double)duration;
// declared property setter: -(void)setScale:(float)scale;
// declared property setter: -(void)setScaleRange:(float)range;
// declared property setter: -(void)setScaleSpeed:(float)speed;
// declared property setter: -(void)setSpeed:(float)speed;
// declared property setter: -(void)setSpin:(float)spin;
// declared property setter: -(void)setSpinRange:(float)range;
// declared property setter: -(void)setStyle:(id)style;
// declared property setter: -(void)setTimeOffset:(double)offset;
-(void)setValue:(id)value forKey:(id)key;
-(void)setValue:(id)value forKeyPath:(id)keyPath;
-(void)setValue:(id)value forUndefinedKey:(id)undefinedKey;
// declared property setter: -(void)setVelocity:(float)velocity;
// declared property setter: -(void)setVelocityRange:(float)range;
// declared property setter: -(void)setXAcceleration:(float)acceleration;
// declared property setter: -(void)setYAcceleration:(float)acceleration;
// declared property setter: -(void)setZAcceleration:(float)acceleration;
-(BOOL)shouldArchiveValueForKey:(id)key;
// declared property getter: -(float)speed;
// declared property getter: -(float)spin;
// declared property getter: -(float)spinRange;
// declared property getter: -(id)style;
// declared property getter: -(double)timeOffset;
-(id)valueForKey:(id)key;
-(id)valueForKeyPath:(id)keyPath;
-(id)valueForUndefinedKey:(id)undefinedKey;
// declared property getter: -(float)velocity;
// declared property getter: -(float)velocityRange;
// declared property getter: -(float)xAcceleration;
// declared property getter: -(float)yAcceleration;
// declared property getter: -(float)zAcceleration;
@end

@interface CAEmitterCell (CAEmitterCellPrivate) <CAPropertyInfo>
+(id)properties;
@end
