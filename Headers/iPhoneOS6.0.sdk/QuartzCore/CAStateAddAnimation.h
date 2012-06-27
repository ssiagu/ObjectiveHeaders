/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class CAAnimation, NSString;

@interface CAStateAddAnimation : CAStateElement {
@private
	NSString* _key;
	CAAnimation* _animation;
}
@property(retain, nonatomic) CAAnimation* animation;	// @synthesize=_animation
@property(copy, nonatomic) NSString* key;	// @synthesize=_key
-(id)initWithCoder:(id)coder;
// declared property getter: -(id)animation;
-(void)apply:(id)apply;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)debugDescription;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)key;
-(id)keyPath;
-(BOOL)matches:(id)matches;
// declared property setter: -(void)setAnimation:(id)animation;
// declared property setter: -(void)setKey:(id)key;
@end
