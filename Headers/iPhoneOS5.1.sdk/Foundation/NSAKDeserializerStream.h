/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDeserializerStream.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSAKDeserializerStream : XXUnknownSuperclass <NSDeserializerStream> {
	const void* memory;
	const char* current;
	unsigned left;
	unsigned max;
	BOOL freeWhenDone;
}
-(id)initFromMemoryNoCopy:(const void*)memoryNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;
-(id)initFromPath:(id)path;
-(void)dealloc;
-(void)finalize;
-(unsigned)readAlignedDataSize;
-(void)readData:(void*)data length:(unsigned)length;
-(int)readInt;
@end

