/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import </libxml2.2.h>
#import "Foundation-Structs.h"
#import "NSCoding.h"


@interface NSExpression : NSObject <NSCoding, NSCopying> {
@private
	void* _reserved;
	unsigned _expressionType;
}
+(id)_newKeyPathExpressionForString:(id)string;
+(id)expressionForAggregate:(id)aggregate;
+(id)expressionForBlock:(id)block arguments:(id)arguments;
+(id)expressionForConstantValue:(id)constantValue;
+(id)expressionForEvaluatedObject;
+(id)expressionForFunction:(id)function arguments:(id)arguments;
+(id)expressionForFunction:(id)function selectorName:(id)name arguments:(id)arguments;
+(id)expressionForIntersectSet:(id)intersectSet with:(id)with;
+(id)expressionForKeyPath:(id)keyPath;
+(id)expressionForMinusSet:(id)minusSet with:(id)with;
+(id)expressionForSubquery:(id)subquery usingIteratorVariable:(id)variable predicate:(id)predicate;
+(id)expressionForSymbolicString:(id)symbolicString;
+(id)expressionForTernaryWithPredicate:(id)predicate trueExpression:(id)expression falseExpression:(id)expression3;
+(id)expressionForUnionSet:(id)unionSet with:(id)with;
+(id)expressionForVariable:(id)variable;
+(id)expressionForVariableNameAssignment:(id)variableNameAssignment expression:(id)expression;
+(id)expressionWithFormat:(id)format;
+(id)expressionWithFormat:(id)format argumentArray:(id)array;
+(id)expressionWithFormat:(id)format arguments:(void*)arguments;
-(id)initWithCoder:(id)coder;
-(id)initWithExpressionType:(unsigned)expressionType;
-(id)_expressionWithSubstitutionVariables:(id)substitutionVariables;
-(BOOL)_shouldUseParensWithDescription;
-(void)acceptVisitor:(id)visitor flags:(unsigned)flags;
-(id)arguments;
-(id)collection;
-(id)constantValue;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)expressionBlock;
-(unsigned)expressionType;
-(id)expressionValueWithObject:(id)object context:(id)context;
-(id)falseExpression;
-(id)function;
-(id)keyPath;
-(id)leftExpression;
-(id)operand;
-(id)predicate;
-(id)predicateFormat;
-(id)rightExpression;
-(SEL)selector;
-(id)subexpression;
-(id)trueExpression;
-(id)variable;
@end
