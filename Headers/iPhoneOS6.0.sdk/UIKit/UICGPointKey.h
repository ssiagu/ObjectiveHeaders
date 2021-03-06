/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UICGPointKey : XXUnknownSuperclass <NSCopying> {
@private
	CGPoint _point;
}
@property(readonly, assign, nonatomic) CGPoint point;	// @synthesize=_point
+(id)pointKeyWithPoint:(CGPoint)point;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
// declared property getter: -(CGPoint)point;
@end

