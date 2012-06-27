/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface QLPreviewItemAVState : XXUnknownSuperclass {
@private
	double position;
	double duration;
	BOOL playing;
}
@property(assign) double duration;	// @synthesize
@property(assign, getter=isPlaying) BOOL playing;	// @synthesize
@property(assign) double position;	// @synthesize
+(id)avStateWithPosition:(double)position duration:(double)duration playing:(BOOL)playing;
-(id)initWithCoder:(id)coder;
-(id)description;
// declared property getter: -(double)duration;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(BOOL)isPlaying;
// declared property getter: -(double)position;
// declared property setter: -(void)setDuration:(double)duration;
// declared property setter: -(void)setPlaying:(BOOL)playing;
// declared property setter: -(void)setPosition:(double)position;
@end
