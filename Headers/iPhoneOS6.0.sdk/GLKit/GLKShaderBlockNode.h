/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import "GLKit-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSXMLParserDelegate.h"

@class NSString, NSMutableString;

@interface GLKShaderBlockNode : XXUnknownSuperclass <NSXMLParserDelegate, NSCopying> {
	GLKBigInt_s _mask;
	GLKShaderBlockNode* _parent;
	GLKShaderBlockNode* _next;
	GLKShaderBlockNode* _children;
	NSString* _label;
	NSString* _loopVar;
	int _type;
	int _unrollCt;
	unsigned _index;
	NSMutableString* _blockText;
	int _propertyClass;
@private
	BOOL _indexedMask;
}
@property(retain, nonatomic) NSMutableString* blockText;	// @synthesize=_blockText
@property(assign, nonatomic) GLKShaderBlockNode* children;	// @synthesize=_children
@property(assign, nonatomic) unsigned index;	// @synthesize=_index
@property(assign, nonatomic) BOOL indexedMask;	// @synthesize=_indexedMask
@property(retain, nonatomic) NSString* label;	// @synthesize=_label
@property(retain, nonatomic) NSString* loopVar;	// @synthesize=_loopVar
@property(assign, nonatomic) GLKBigInt_s mask;	// @synthesize=_mask
@property(assign, nonatomic) GLKShaderBlockNode* next;	// @synthesize=_next
@property(assign, nonatomic) GLKShaderBlockNode* parent;	// @synthesize=_parent
@property(assign, nonatomic) int propertyClass;	// @synthesize=_propertyClass
@property(assign, nonatomic) int type;	// @synthesize=_type
@property(assign, nonatomic) int unrollCt;	// @synthesize=_unrollCt
+(void)buildUnrollNodeArray:(id)array array:(id)array2;
+(id)copyTreeWithRoot:(id)root parent:(id)parent;
+(id)copyTreeWithRootButNotSiblings:(id)rootButNotSiblings parent:(id)parent;
+(void)insertNode:(id)node afterSibling:(id)sibling;
+(GLKBigInt_s)maskForLabel:(id)label root:(id)root index:(int)index;
+(unsigned)nodeCt:(id)ct nodeCt:(unsigned*)ct2;
+(void)printTree:(id)tree;
+(void)printTreeVerbose:(id)verbose;
+(void)setIndicesForRoot:(id)root andReplaceLoopVar:(id)var baseLabel:(id)label basePropertyClass:(int)aClass usingIndex:(unsigned)index indexString:(id)string;
+(void)setMasksWithRoot:(id)root treeRoot:(id)root2 mask:(GLKBigInt_s*)mask;
-(id)init;
// declared property getter: -(id)blockText;
// declared property getter: -(id)children;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
// declared property getter: -(unsigned)index;
// declared property getter: -(BOOL)indexedMask;
// declared property getter: -(id)label;
// declared property getter: -(id)loopVar;
// declared property getter: -(GLKBigInt_s)mask;
// declared property getter: -(id)next;
// declared property getter: -(id)parent;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(void)parser:(id)parser foundCharacters:(id)characters;
// declared property getter: -(int)propertyClass;
// declared property setter: -(void)setBlockText:(id)text;
// declared property setter: -(void)setChildren:(id)children;
// declared property setter: -(void)setIndex:(unsigned)index;
// declared property setter: -(void)setIndexedMask:(BOOL)mask;
// declared property setter: -(void)setLabel:(id)label;
// declared property setter: -(void)setLoopVar:(id)var;
// declared property setter: -(void)setMask:(GLKBigInt_s)mask;
// declared property setter: -(void)setNext:(id)next;
// declared property setter: -(void)setParent:(id)parent;
// declared property setter: -(void)setPropertyClass:(int)aClass;
// declared property setter: -(void)setType:(int)type;
// declared property setter: -(void)setUnrollCt:(int)ct;
// declared property getter: -(int)type;
// declared property getter: -(int)unrollCt;
@end
