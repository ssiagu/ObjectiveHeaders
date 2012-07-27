/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSString;

@interface CAMeshTransform : XXUnknownSuperclass <NSCoding, NSCopying, NSMutableCopying> {
@private
	void* _impl;
	unsigned _normalization;
	int _subdivisionSteps;
}
@property(readonly, copy) NSString* depthNormalization;
@property(readonly, assign) unsigned faceCount;
@property(readonly, assign) int subdivisionSteps;
@property(readonly, assign) unsigned vertexCount;
+(id)meshTransformWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex*)vertices faceCount:(unsigned long)count faces:(const CAMeshFace*)faces depthNormalization:(id)normalization;
-(id)init;
-(id)initWithCoder:(id)coder;
-(id)initWithVertexCount:(unsigned long)vertexCount vertices:(const CAMeshVertex*)vertices faceCount:(unsigned long)count faces:(const CAMeshFace*)faces depthNormalization:(id)normalization;
-(Object*)CA_copyRenderValue;
-(float)CA_distanceToValue:(id)value;
-(id)CA_interpolateValue:(id)value byFraction:(float)fraction;
-(id)CA_interpolateValues:(id)values :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)interpolator;
-(BOOL)_constructWithData:(id)data;
-(id)_data;
-(id)_init;
-(id)_initWithMeshTransform:(id)meshTransform;
-(id)_subdivideToDepth:(int)depth;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
// declared property getter: -(id)depthNormalization;
-(void)encodeWithCoder:(id)coder;
-(CAMeshFace)faceAtIndex:(unsigned long)index;
// declared property getter: -(unsigned long)faceCount;
-(id)meshTransformForLayer:(id)layer;
-(id)mutableCopyWithZone:(NSZone*)zone;
// declared property getter: -(int)subdivisionSteps;
-(CAMeshVertex)vertexAtIndex:(unsigned long)index;
// declared property getter: -(unsigned long)vertexCount;
@end
