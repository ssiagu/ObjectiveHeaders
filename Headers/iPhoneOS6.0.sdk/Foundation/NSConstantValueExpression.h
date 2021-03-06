/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"


@interface NSConstantValueExpression : NSExpression {
@private
	id constantValue;
}
-(id)initWithCoder:(id)coder;
-(id)initWithObject:(id)object;
-(id)constantValue;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)expressionValueWithObject:(id)object;
-(id)expressionValueWithObject:(id)object context:(id)context;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)predicateFormat;
@end

