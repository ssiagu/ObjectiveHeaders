/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import </libxml2.2.h>


@interface NSAKSerializer : NSObject {
	id ss;
}
-(id)initForSerializerStream:(id)serializerStream;
-(void)dealloc;
-(unsigned)serializeData:(id)data;
-(unsigned)serializeList:(id)list;
-(unsigned)serializeListItemIn:(id)anIn at:(unsigned)at;
-(unsigned)serializeObject:(id)object;
-(unsigned)serializePListKeyIn:(id)anIn key:(id)key value:(id)value;
-(unsigned)serializePListValueIn:(id)anIn key:(id)key value:(id)value;
-(unsigned)serializePropertyList:(id)list;
-(unsigned)serializeString:(id)string;
-(id)serializerStream;
@end
