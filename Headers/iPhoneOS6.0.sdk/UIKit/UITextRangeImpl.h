/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextRange.h"

@class DOMRange;

__attribute__((visibility("hidden")))
@interface UITextRangeImpl : UITextRange {
@private
	DOMRange* _domRange;
	int _affinityIfCollapsed;
}
@property(assign, nonatomic) int affinity;	// @synthesize=_affinityIfCollapsed
@property(retain, nonatomic) DOMRange* domRange;	// @synthesize=_domRange
+(id)wrapDOMRange:(id)range;
+(id)wrapDOMRange:(id)range withAffinity:(int)affinity;
-(void)adjustAffinityOfPosition:(id)position isStart:(BOOL)start;
// declared property getter: -(int)affinity;
-(void)dealloc;
-(id)description;
// declared property getter: -(id)domRange;
-(id)end;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)equal;
// declared property setter: -(void)setAffinity:(int)affinity;
// declared property setter: -(void)setDomRange:(id)range;
-(id)start;
@end

