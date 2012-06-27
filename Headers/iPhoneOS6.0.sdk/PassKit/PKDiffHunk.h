/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/PassKit.framework/PassKit
 */

#import "NSSecureCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface PKDiffHunk : XXUnknownSuperclass <NSSecureCoding> {
@private
	NSString* _key;
	id _oldValue;
	id _newValue;
	NSString* _message;
}
@property(retain, nonatomic) NSString* key;	// @synthesize=_key
@property(retain, nonatomic) NSString* message;	// @synthesize=_message
@property(retain, nonatomic) id valueNew;	// @synthesize=_newValue
@property(retain, nonatomic) id valueOld;	// @synthesize=_oldValue
+(id)hunkWithKey:(id)key oldValue:(id)value newValue:(id)value3 message:(id)message;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
// declared property getter: -(id)key;
// declared property getter: -(id)message;
// declared property setter: -(void)setKey:(id)key;
// declared property setter: -(void)setMessage:(id)message;
// declared property setter: -(void)setValueNew:(id)aNew;
// declared property setter: -(void)setValueOld:(id)old;
// declared property getter: -(id)valueNew;
// declared property getter: -(id)valueOld;
@end
